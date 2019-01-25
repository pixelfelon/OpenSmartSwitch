/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.65.2
        Device            :  PIC18LF27K42
        Driver Version    :  2.00
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/


#include "mcc_generated_files/mcc.h"

#include <stdint.h>


static uint8_t led_anim[] = {
	/*
	0b00000000,
	0b11111111,
	0b11111110,
	0b11111101,
	0b11111011,
	0b11111001,
	0b11111100,
	0b11111010,
	0b11111000,
	0b00000000,
	0b10000000,
	0b01000000,
	0b00100000,
	0b00010000,
	0b00001000
	*/
	0b00000101,
	0b10000101,
	0b01000101,
	0b00100101,
	0b00010101,
	0b00001101
};


/*
                         Main application
 */
void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();
	
    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global Interrupts
    // Use the following macros to:
	
    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();
	
    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();
	
	uint8_t i = 0;
	uint8_t c = 0;
	
	//LATC = 0xFF;
	//LATC = 0b11111000;
	//LATC = 0x00;
	
    while (1)
    {
		c += 1;
		if (c > 3)
		{
			LATC = led_anim[i];
			i += 1;
			c = 0;
		}
		if (i >= sizeof(led_anim))
		{
			i = 0;
		}
		
		if (M3D_GP0_GetValue())
		{
			LATC = 0b11111011;
		}
		if (M3D_GP1_GetValue())
		{
			LATC = 0b11111110;
		}
		
		__delay_ms(90);
    }
}

/**
 End of File
*/
