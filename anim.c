/*
 * Animation Controller
 * 
 * @Company
 *   Open Smart Switch / James Rowley
 * 
 * @File Name
 *   anim.h
 * 
 * @Summary
 *   Simple yet flexible animation controller for single-port LED animations.
*/

#include "anim.h"

#include "common/sw_timer.h"

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <xc.h>


static struct
{
	uint8_t stage;
	anim_t * current_anim;
}
anim_state = {
	0,
	NULL
};

static sw_timer_t anim_timer = {0, 0, false};


void
anim_task (void)
{
	if (anim_state.current_anim == NULL)
	{
		// No animation playing
		return;
	}
	
	if (sw_timer_expired(anim_timer))
	{
		// Display next frame
		LATC = *(anim_state.current_anim->states + anim_state.stage);
		
		sw_timer_reset(&anim_timer);
		anim_state.stage += 1;
		if (anim_state.stage >= anim_state.current_anim->stages)
		{
			if (anim_state.current_anim->loop)
			{
				// If current animation configured to loop, just reset counter
				anim_state.stage = 0;
			}
			else
			{
				// Otherwise, clear current animation
				anim_clear();
			}
		}
	}
}

void
anim_set (anim_t * anim)
{
	// Update animation pointer and reset to first frame
	anim_state.stage = 0;
	anim_state.current_anim = anim;
	
	// Reconfigure timer
	anim_timer.length = anim_state.current_anim->delay_ms;
	sw_timer_reset(&anim_timer);
	
	// Display immediately
	anim_task();
}

void
anim_clear (void)
{
	// Stop current animation (if any)
	anim_state.current_anim = NULL;
	anim_timer.running = false;
}

bool
anim_running (void)
{
	// Return true if animation is running
	return (anim_state.current_anim != NULL);
}
