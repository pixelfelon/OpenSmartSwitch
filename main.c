/*
 * Main Routines
 * 
 * @Company
 *   Open Smart Switch / James Rowley
 * 
 * @File Name
 *   main.c
 * 
 * @Summary
 *   Top-level logic and globals.
 *   Also animation stuff that I haven't moved out yet.
*/


#include "mcc_generated_files/mcc.h"
#include "common/sw_timer.h"
#include "anim.h"
#include "animations.h"


void
main (void)
{
    // Initialize the device
    SYSTEM_Initialize();
	sw_timer_init();
	
    INTERRUPT_GlobalInterruptHighEnable();
    INTERRUPT_GlobalInterruptLowEnable();
	
    while (1)
    {
		if (M3D_GP0_GetValue())
		{
			anim_set(&animation_swipe_up);
		}
		if (M3D_GP1_GetValue())
		{
			anim_set(&animation_swipe_down);
		}
		if (!anim_running())
		{
			anim_set(&animation_idle);
		}
		
		anim_task();
		__delay_ms(1);
    }
}
