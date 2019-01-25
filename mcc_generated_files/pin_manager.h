/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.65.2
        Device            :  PIC18LF27K42
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.45
        MPLAB 	          :  MPLAB X 4.15	
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

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set SENSE aliases
#define SENSE_TRIS                 TRISAbits.TRISA0
#define SENSE_LAT                  LATAbits.LATA0
#define SENSE_PORT                 PORTAbits.RA0
#define SENSE_WPU                  WPUAbits.WPUA0
#define SENSE_OD                   ODCONAbits.ODCA0
#define SENSE_ANS                  ANSELAbits.ANSELA0
#define SENSE_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define SENSE_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define SENSE_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define SENSE_GetValue()           PORTAbits.RA0
#define SENSE_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define SENSE_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define SENSE_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define SENSE_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define SENSE_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define SENSE_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define SENSE_SetAnalogMode()      do { ANSELAbits.ANSELA0 = 1; } while(0)
#define SENSE_SetDigitalMode()     do { ANSELAbits.ANSELA0 = 0; } while(0)

// get/set DRIVE aliases
#define DRIVE_TRIS                 TRISAbits.TRISA1
#define DRIVE_LAT                  LATAbits.LATA1
#define DRIVE_PORT                 PORTAbits.RA1
#define DRIVE_WPU                  WPUAbits.WPUA1
#define DRIVE_OD                   ODCONAbits.ODCA1
#define DRIVE_ANS                  ANSELAbits.ANSELA1
#define DRIVE_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define DRIVE_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define DRIVE_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define DRIVE_GetValue()           PORTAbits.RA1
#define DRIVE_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define DRIVE_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define DRIVE_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define DRIVE_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define DRIVE_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define DRIVE_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define DRIVE_SetAnalogMode()      do { ANSELAbits.ANSELA1 = 1; } while(0)
#define DRIVE_SetDigitalMode()     do { ANSELAbits.ANSELA1 = 0; } while(0)

// get/set M3D_GP4 aliases
#define M3D_GP4_TRIS                 TRISAbits.TRISA2
#define M3D_GP4_LAT                  LATAbits.LATA2
#define M3D_GP4_PORT                 PORTAbits.RA2
#define M3D_GP4_WPU                  WPUAbits.WPUA2
#define M3D_GP4_OD                   ODCONAbits.ODCA2
#define M3D_GP4_ANS                  ANSELAbits.ANSELA2
#define M3D_GP4_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define M3D_GP4_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define M3D_GP4_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define M3D_GP4_GetValue()           PORTAbits.RA2
#define M3D_GP4_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define M3D_GP4_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define M3D_GP4_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define M3D_GP4_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define M3D_GP4_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define M3D_GP4_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define M3D_GP4_SetAnalogMode()      do { ANSELAbits.ANSELA2 = 1; } while(0)
#define M3D_GP4_SetDigitalMode()     do { ANSELAbits.ANSELA2 = 0; } while(0)

// get/set M3D_GP3 aliases
#define M3D_GP3_TRIS                 TRISAbits.TRISA3
#define M3D_GP3_LAT                  LATAbits.LATA3
#define M3D_GP3_PORT                 PORTAbits.RA3
#define M3D_GP3_WPU                  WPUAbits.WPUA3
#define M3D_GP3_OD                   ODCONAbits.ODCA3
#define M3D_GP3_ANS                  ANSELAbits.ANSELA3
#define M3D_GP3_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define M3D_GP3_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define M3D_GP3_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define M3D_GP3_GetValue()           PORTAbits.RA3
#define M3D_GP3_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define M3D_GP3_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define M3D_GP3_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define M3D_GP3_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define M3D_GP3_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define M3D_GP3_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define M3D_GP3_SetAnalogMode()      do { ANSELAbits.ANSELA3 = 1; } while(0)
#define M3D_GP3_SetDigitalMode()     do { ANSELAbits.ANSELA3 = 0; } while(0)

// get/set M3D_GP2 aliases
#define M3D_GP2_TRIS                 TRISAbits.TRISA4
#define M3D_GP2_LAT                  LATAbits.LATA4
#define M3D_GP2_PORT                 PORTAbits.RA4
#define M3D_GP2_WPU                  WPUAbits.WPUA4
#define M3D_GP2_OD                   ODCONAbits.ODCA4
#define M3D_GP2_ANS                  ANSELAbits.ANSELA4
#define M3D_GP2_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define M3D_GP2_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define M3D_GP2_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define M3D_GP2_GetValue()           PORTAbits.RA4
#define M3D_GP2_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define M3D_GP2_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define M3D_GP2_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define M3D_GP2_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define M3D_GP2_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define M3D_GP2_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define M3D_GP2_SetAnalogMode()      do { ANSELAbits.ANSELA4 = 1; } while(0)
#define M3D_GP2_SetDigitalMode()     do { ANSELAbits.ANSELA4 = 0; } while(0)

// get/set M3D_GP1 aliases
#define M3D_GP1_TRIS                 TRISAbits.TRISA5
#define M3D_GP1_LAT                  LATAbits.LATA5
#define M3D_GP1_PORT                 PORTAbits.RA5
#define M3D_GP1_WPU                  WPUAbits.WPUA5
#define M3D_GP1_OD                   ODCONAbits.ODCA5
#define M3D_GP1_ANS                  ANSELAbits.ANSELA5
#define M3D_GP1_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define M3D_GP1_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define M3D_GP1_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define M3D_GP1_GetValue()           PORTAbits.RA5
#define M3D_GP1_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define M3D_GP1_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define M3D_GP1_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define M3D_GP1_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define M3D_GP1_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define M3D_GP1_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define M3D_GP1_SetAnalogMode()      do { ANSELAbits.ANSELA5 = 1; } while(0)
#define M3D_GP1_SetDigitalMode()     do { ANSELAbits.ANSELA5 = 0; } while(0)

// get/set M3D_GP0 aliases
#define M3D_GP0_TRIS                 TRISAbits.TRISA6
#define M3D_GP0_LAT                  LATAbits.LATA6
#define M3D_GP0_PORT                 PORTAbits.RA6
#define M3D_GP0_WPU                  WPUAbits.WPUA6
#define M3D_GP0_OD                   ODCONAbits.ODCA6
#define M3D_GP0_ANS                  ANSELAbits.ANSELA6
#define M3D_GP0_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define M3D_GP0_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define M3D_GP0_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define M3D_GP0_GetValue()           PORTAbits.RA6
#define M3D_GP0_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define M3D_GP0_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define M3D_GP0_SetPullup()          do { WPUAbits.WPUA6 = 1; } while(0)
#define M3D_GP0_ResetPullup()        do { WPUAbits.WPUA6 = 0; } while(0)
#define M3D_GP0_SetPushPull()        do { ODCONAbits.ODCA6 = 0; } while(0)
#define M3D_GP0_SetOpenDrain()       do { ODCONAbits.ODCA6 = 1; } while(0)
#define M3D_GP0_SetAnalogMode()      do { ANSELAbits.ANSELA6 = 1; } while(0)
#define M3D_GP0_SetDigitalMode()     do { ANSELAbits.ANSELA6 = 0; } while(0)

// get/set LEDB aliases
#define LEDB_TRIS                 TRISCbits.TRISC0
#define LEDB_LAT                  LATCbits.LATC0
#define LEDB_PORT                 PORTCbits.RC0
#define LEDB_WPU                  WPUCbits.WPUC0
#define LEDB_OD                   ODCONCbits.ODCC0
#define LEDB_ANS                  ANSELCbits.ANSELC0
#define LEDB_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define LEDB_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define LEDB_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define LEDB_GetValue()           PORTCbits.RC0
#define LEDB_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define LEDB_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define LEDB_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define LEDB_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define LEDB_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define LEDB_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define LEDB_SetAnalogMode()      do { ANSELCbits.ANSELC0 = 1; } while(0)
#define LEDB_SetDigitalMode()     do { ANSELCbits.ANSELC0 = 0; } while(0)

// get/set LEDG aliases
#define LEDG_TRIS                 TRISCbits.TRISC1
#define LEDG_LAT                  LATCbits.LATC1
#define LEDG_PORT                 PORTCbits.RC1
#define LEDG_WPU                  WPUCbits.WPUC1
#define LEDG_OD                   ODCONCbits.ODCC1
#define LEDG_ANS                  ANSELCbits.ANSELC1
#define LEDG_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define LEDG_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define LEDG_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define LEDG_GetValue()           PORTCbits.RC1
#define LEDG_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define LEDG_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define LEDG_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define LEDG_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define LEDG_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define LEDG_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define LEDG_SetAnalogMode()      do { ANSELCbits.ANSELC1 = 1; } while(0)
#define LEDG_SetDigitalMode()     do { ANSELCbits.ANSELC1 = 0; } while(0)

// get/set LEDR aliases
#define LEDR_TRIS                 TRISCbits.TRISC2
#define LEDR_LAT                  LATCbits.LATC2
#define LEDR_PORT                 PORTCbits.RC2
#define LEDR_WPU                  WPUCbits.WPUC2
#define LEDR_OD                   ODCONCbits.ODCC2
#define LEDR_ANS                  ANSELCbits.ANSELC2
#define LEDR_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define LEDR_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define LEDR_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define LEDR_GetValue()           PORTCbits.RC2
#define LEDR_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define LEDR_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define LEDR_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define LEDR_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define LEDR_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define LEDR_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define LEDR_SetAnalogMode()      do { ANSELCbits.ANSELC2 = 1; } while(0)
#define LEDR_SetDigitalMode()     do { ANSELCbits.ANSELC2 = 0; } while(0)

// get/set LED0 aliases
#define LED0_TRIS                 TRISCbits.TRISC3
#define LED0_LAT                  LATCbits.LATC3
#define LED0_PORT                 PORTCbits.RC3
#define LED0_WPU                  WPUCbits.WPUC3
#define LED0_OD                   ODCONCbits.ODCC3
#define LED0_ANS                  ANSELCbits.ANSELC3
#define LED0_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define LED0_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define LED0_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define LED0_GetValue()           PORTCbits.RC3
#define LED0_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define LED0_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define LED0_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define LED0_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define LED0_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define LED0_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define LED0_SetAnalogMode()      do { ANSELCbits.ANSELC3 = 1; } while(0)
#define LED0_SetDigitalMode()     do { ANSELCbits.ANSELC3 = 0; } while(0)

// get/set LED1 aliases
#define LED1_TRIS                 TRISCbits.TRISC4
#define LED1_LAT                  LATCbits.LATC4
#define LED1_PORT                 PORTCbits.RC4
#define LED1_WPU                  WPUCbits.WPUC4
#define LED1_OD                   ODCONCbits.ODCC4
#define LED1_ANS                  ANSELCbits.ANSELC4
#define LED1_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define LED1_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define LED1_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define LED1_GetValue()           PORTCbits.RC4
#define LED1_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define LED1_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define LED1_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define LED1_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define LED1_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define LED1_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define LED1_SetAnalogMode()      do { ANSELCbits.ANSELC4 = 1; } while(0)
#define LED1_SetDigitalMode()     do { ANSELCbits.ANSELC4 = 0; } while(0)

// get/set LED2 aliases
#define LED2_TRIS                 TRISCbits.TRISC5
#define LED2_LAT                  LATCbits.LATC5
#define LED2_PORT                 PORTCbits.RC5
#define LED2_WPU                  WPUCbits.WPUC5
#define LED2_OD                   ODCONCbits.ODCC5
#define LED2_ANS                  ANSELCbits.ANSELC5
#define LED2_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define LED2_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define LED2_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define LED2_GetValue()           PORTCbits.RC5
#define LED2_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define LED2_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define LED2_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define LED2_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define LED2_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define LED2_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define LED2_SetAnalogMode()      do { ANSELCbits.ANSELC5 = 1; } while(0)
#define LED2_SetDigitalMode()     do { ANSELCbits.ANSELC5 = 0; } while(0)

// get/set LED3 aliases
#define LED3_TRIS                 TRISCbits.TRISC6
#define LED3_LAT                  LATCbits.LATC6
#define LED3_PORT                 PORTCbits.RC6
#define LED3_WPU                  WPUCbits.WPUC6
#define LED3_OD                   ODCONCbits.ODCC6
#define LED3_ANS                  ANSELCbits.ANSELC6
#define LED3_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define LED3_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define LED3_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define LED3_GetValue()           PORTCbits.RC6
#define LED3_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define LED3_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define LED3_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define LED3_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define LED3_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define LED3_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define LED3_SetAnalogMode()      do { ANSELCbits.ANSELC6 = 1; } while(0)
#define LED3_SetDigitalMode()     do { ANSELCbits.ANSELC6 = 0; } while(0)

// get/set LED4 aliases
#define LED4_TRIS                 TRISCbits.TRISC7
#define LED4_LAT                  LATCbits.LATC7
#define LED4_PORT                 PORTCbits.RC7
#define LED4_WPU                  WPUCbits.WPUC7
#define LED4_OD                   ODCONCbits.ODCC7
#define LED4_ANS                  ANSELCbits.ANSELC7
#define LED4_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define LED4_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define LED4_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define LED4_GetValue()           PORTCbits.RC7
#define LED4_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define LED4_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define LED4_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define LED4_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define LED4_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define LED4_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define LED4_SetAnalogMode()      do { ANSELCbits.ANSELC7 = 1; } while(0)
#define LED4_SetDigitalMode()     do { ANSELCbits.ANSELC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/