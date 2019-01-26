/*
 * Animation Definitions
 * 
 * @Company
 *   Open Smart Switch / James Rowley
 * 
 * @File Name
 *   animations.c
 * 
 * @Summary
 *   Predefined animations for the anim.c Animation Controller.
*/

#include "animations.h"

#include "anim.h"

#include <stdbool.h>


static uint8_t animation_swipe_down_states[] = {
	0b10000001,
	0b01000001,
	0b00100001,
	0b00010001,
	0b00001001
};
anim_t animation_swipe_down = {
	sizeof(animation_swipe_down_states),
	67,
	false,
	animation_swipe_down_states
};

static uint8_t animation_swipe_up_states[] = {
	0b00001001,
	0b00010001,
	0b00100001,
	0b01000001,
	0b10000001
};
anim_t animation_swipe_up = {
	sizeof(animation_swipe_up_states),
	67,
	false,
	animation_swipe_up_states
};

static uint8_t animation_idle_states[] = {
	0b10001110,
	0b01010110,
	0b00100110,
	0b01010110
};
anim_t animation_idle = {
	sizeof(animation_idle_states),
	667,
	false,
	animation_idle_states
};
