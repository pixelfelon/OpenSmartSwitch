/*
 * Animation Definitions
 * 
 * @Company
 *   Open Smart Switch / James Rowley
 * 
 * @File Name
 *   animations.h
 * 
 * @Summary
 *   Interface to predefined animations for the anim.c Animation Controller.
*/

#ifndef ANIMATIONS_H
#define	ANIMATIONS_H


#include "anim.h"


#define ANIMATION_SWIPE_UP_FINAL   0b10000101
#define ANIMATION_SWIPE_DOWN_FINAL 0b00001011


#ifdef	__cplusplus
extern "C" {
#endif


extern anim_t animation_swipe_down;
extern anim_t animation_swipe_up;
extern anim_t animation_idle;


#ifdef	__cplusplus
}
#endif

#endif	/* ANIMATIONS_H */
