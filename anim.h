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

#ifndef ANIM_H
#define	ANIM_H


#include <stdbool.h>
#include <stdint.h>


#ifdef	__cplusplus
extern "C" {
#endif


typedef struct
{
	uint8_t  stages;
	uint16_t delay_ms;
	bool     loop;
	uint8_t* states;
} anim_t;


void anim_task    (void);
void anim_set     (anim_t * anim);
void anim_clear   (void);
bool anim_running (void);


#ifdef	__cplusplus
}
#endif

#endif	/* ANIM_H */
