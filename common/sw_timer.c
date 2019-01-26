/*
 * Software Timer Library
 * 
 * @Company
 *   1o1 Oscilloscope Team / James Rowley
 * 
 * @File Name
 *   sw_timer.c
 * 
 * @Summary
 *   Provides simple configurable timers backed by a single hardware timer.
 *   NOTE that in this implementation the timer configuration is done in MCC.
*/

#include "sw_timer.h"

#include "../mcc_generated_files/tmr0.h"

#include <stdbool.h>
#include <stdint.h>
#include <limits.h>

static void     tmr_interrupt (void);
static uint32_t tmr_elapsed        (sw_timer_t timer);

uint16_t g_ticks;

void
sw_timer_init (void)
{
	TMR0_SetInterruptHandler(tmr_interrupt);
	TMR0_StartTimer();
	
    g_ticks++;
}

static uint32_t
tmr_elapsed (sw_timer_t timer)
{
    // On the PIC32MZ this is atomic
    uint16_t local_ticks = g_ticks;
    
    if (local_ticks >= timer.start_tick)
	{
        return local_ticks - timer.start_tick;
    }
	else
	{
        return UINT16_MAX - timer.start_tick - local_ticks;
    }
}

bool
sw_timer_expired (sw_timer_t timer)
{
    if (timer.running != true)
	{
        return false;
    }
    
    return tmr_elapsed(timer) > timer.length;
}

void
sw_timer_reset (sw_timer_t* timer)
{
    // On the PIC32MZ this is atomic
    uint16_t local_ticks = g_ticks;
    
    timer->start_tick = local_ticks;
	timer->running = true;
}

static void
tmr_interrupt (void)
{
	g_ticks++;
}
