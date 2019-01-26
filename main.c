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

#include <stdbool.h>
#include <xc.h>


static bool switch_on;


void
main (void)
{
    // Initialize the device
    SYSTEM_Initialize();
	sw_timer_init();
	
    INTERRUPT_GlobalInterruptHighEnable();
    INTERRUPT_GlobalInterruptLowEnable();
	
	
	DRIVE_SetLow();
	LATC = ANIMATION_SWIPE_DOWN_FINAL;
	switch_on = false;
	__delay_ms(500);
	
    while (1)
    {
		if (M3D_GP0_GetValue() && !switch_on)
		{
			anim_set(&animation_swipe_up);
			DRIVE_SetHigh();
			switch_on = true;
		}
		if (M3D_GP1_GetValue() && switch_on)
		{
			anim_set(&animation_swipe_down);
			DRIVE_SetLow();
			switch_on = false;
		}
		
		anim_task();
		__delay_ms(1);
    }
}
