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
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC18F26K83
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.36 and above
        MPLAB 	          :  MPLAB X 6.00	
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

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_RA0 aliases
#define IO_RA0_TRIS                 TRISAbits.TRISA0
#define IO_RA0_LAT                  LATAbits.LATA0
#define IO_RA0_PORT                 PORTAbits.RA0
#define IO_RA0_WPU                  WPUAbits.WPUA0
#define IO_RA0_OD                   ODCONAbits.ODCA0
#define IO_RA0_ANS                  ANSELAbits.ANSELA0
#define IO_RA0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define IO_RA0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define IO_RA0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define IO_RA0_GetValue()           PORTAbits.RA0
#define IO_RA0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define IO_RA0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define IO_RA0_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define IO_RA0_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define IO_RA0_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define IO_RA0_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define IO_RA0_SetAnalogMode()      do { ANSELAbits.ANSELA0 = 1; } while(0)
#define IO_RA0_SetDigitalMode()     do { ANSELAbits.ANSELA0 = 0; } while(0)

// get/set IO_RA1 aliases
#define IO_RA1_TRIS                 TRISAbits.TRISA1
#define IO_RA1_LAT                  LATAbits.LATA1
#define IO_RA1_PORT                 PORTAbits.RA1
#define IO_RA1_WPU                  WPUAbits.WPUA1
#define IO_RA1_OD                   ODCONAbits.ODCA1
#define IO_RA1_ANS                  ANSELAbits.ANSELA1
#define IO_RA1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define IO_RA1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define IO_RA1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define IO_RA1_GetValue()           PORTAbits.RA1
#define IO_RA1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define IO_RA1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define IO_RA1_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define IO_RA1_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define IO_RA1_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define IO_RA1_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define IO_RA1_SetAnalogMode()      do { ANSELAbits.ANSELA1 = 1; } while(0)
#define IO_RA1_SetDigitalMode()     do { ANSELAbits.ANSELA1 = 0; } while(0)

// get/set IO_RA2 aliases
#define IO_RA2_TRIS                 TRISAbits.TRISA2
#define IO_RA2_LAT                  LATAbits.LATA2
#define IO_RA2_PORT                 PORTAbits.RA2
#define IO_RA2_WPU                  WPUAbits.WPUA2
#define IO_RA2_OD                   ODCONAbits.ODCA2
#define IO_RA2_ANS                  ANSELAbits.ANSELA2
#define IO_RA2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define IO_RA2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define IO_RA2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define IO_RA2_GetValue()           PORTAbits.RA2
#define IO_RA2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define IO_RA2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define IO_RA2_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define IO_RA2_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define IO_RA2_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define IO_RA2_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define IO_RA2_SetAnalogMode()      do { ANSELAbits.ANSELA2 = 1; } while(0)
#define IO_RA2_SetDigitalMode()     do { ANSELAbits.ANSELA2 = 0; } while(0)

// get/set IO_RA3 aliases
#define IO_RA3_TRIS                 TRISAbits.TRISA3
#define IO_RA3_LAT                  LATAbits.LATA3
#define IO_RA3_PORT                 PORTAbits.RA3
#define IO_RA3_WPU                  WPUAbits.WPUA3
#define IO_RA3_OD                   ODCONAbits.ODCA3
#define IO_RA3_ANS                  ANSELAbits.ANSELA3
#define IO_RA3_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define IO_RA3_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define IO_RA3_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define IO_RA3_GetValue()           PORTAbits.RA3
#define IO_RA3_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define IO_RA3_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define IO_RA3_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define IO_RA3_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define IO_RA3_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define IO_RA3_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define IO_RA3_SetAnalogMode()      do { ANSELAbits.ANSELA3 = 1; } while(0)
#define IO_RA3_SetDigitalMode()     do { ANSELAbits.ANSELA3 = 0; } while(0)

// get/set IO_RA4 aliases
#define IO_RA4_TRIS                 TRISAbits.TRISA4
#define IO_RA4_LAT                  LATAbits.LATA4
#define IO_RA4_PORT                 PORTAbits.RA4
#define IO_RA4_WPU                  WPUAbits.WPUA4
#define IO_RA4_OD                   ODCONAbits.ODCA4
#define IO_RA4_ANS                  ANSELAbits.ANSELA4
#define IO_RA4_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define IO_RA4_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define IO_RA4_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define IO_RA4_GetValue()           PORTAbits.RA4
#define IO_RA4_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define IO_RA4_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define IO_RA4_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define IO_RA4_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define IO_RA4_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define IO_RA4_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define IO_RA4_SetAnalogMode()      do { ANSELAbits.ANSELA4 = 1; } while(0)
#define IO_RA4_SetDigitalMode()     do { ANSELAbits.ANSELA4 = 0; } while(0)

// get/set IO_RA5 aliases
#define IO_RA5_TRIS                 TRISAbits.TRISA5
#define IO_RA5_LAT                  LATAbits.LATA5
#define IO_RA5_PORT                 PORTAbits.RA5
#define IO_RA5_WPU                  WPUAbits.WPUA5
#define IO_RA5_OD                   ODCONAbits.ODCA5
#define IO_RA5_ANS                  ANSELAbits.ANSELA5
#define IO_RA5_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define IO_RA5_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define IO_RA5_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define IO_RA5_GetValue()           PORTAbits.RA5
#define IO_RA5_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define IO_RA5_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define IO_RA5_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define IO_RA5_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define IO_RA5_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define IO_RA5_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define IO_RA5_SetAnalogMode()      do { ANSELAbits.ANSELA5 = 1; } while(0)
#define IO_RA5_SetDigitalMode()     do { ANSELAbits.ANSELA5 = 0; } while(0)

// get/set RB0 aliases
#define RB0_TRIS                 TRISBbits.TRISB0
#define RB0_LAT                  LATBbits.LATB0
#define RB0_PORT                 PORTBbits.RB0
#define RB0_WPU                  WPUBbits.WPUB0
#define RB0_OD                   ODCONBbits.ODCB0
#define RB0_ANS                  ANSELBbits.ANSELB0
#define RB0_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define RB0_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define RB0_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define RB0_GetValue()           PORTBbits.RB0
#define RB0_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define RB0_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define RB0_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define RB0_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define RB0_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define RB0_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define RB0_SetAnalogMode()      do { ANSELBbits.ANSELB0 = 1; } while(0)
#define RB0_SetDigitalMode()     do { ANSELBbits.ANSELB0 = 0; } while(0)

// get/set RB1 aliases
#define RB1_TRIS                 TRISBbits.TRISB1
#define RB1_LAT                  LATBbits.LATB1
#define RB1_PORT                 PORTBbits.RB1
#define RB1_WPU                  WPUBbits.WPUB1
#define RB1_OD                   ODCONBbits.ODCB1
#define RB1_ANS                  ANSELBbits.ANSELB1
#define RB1_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define RB1_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define RB1_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define RB1_GetValue()           PORTBbits.RB1
#define RB1_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define RB1_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define RB1_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define RB1_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define RB1_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define RB1_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define RB1_SetAnalogMode()      do { ANSELBbits.ANSELB1 = 1; } while(0)
#define RB1_SetDigitalMode()     do { ANSELBbits.ANSELB1 = 0; } while(0)

// get/set RB2 aliases
#define RB2_TRIS                 TRISBbits.TRISB2
#define RB2_LAT                  LATBbits.LATB2
#define RB2_PORT                 PORTBbits.RB2
#define RB2_WPU                  WPUBbits.WPUB2
#define RB2_OD                   ODCONBbits.ODCB2
#define RB2_ANS                  ANSELBbits.ANSELB2
#define RB2_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define RB2_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define RB2_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define RB2_GetValue()           PORTBbits.RB2
#define RB2_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define RB2_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define RB2_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define RB2_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define RB2_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define RB2_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define RB2_SetAnalogMode()      do { ANSELBbits.ANSELB2 = 1; } while(0)
#define RB2_SetDigitalMode()     do { ANSELBbits.ANSELB2 = 0; } while(0)

// get/set RB3 procedures
#define RB3_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define RB3_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define RB3_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define RB3_GetValue()              PORTBbits.RB3
#define RB3_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define RB3_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define RB3_SetPullup()             do { WPUBbits.WPUB3 = 1; } while(0)
#define RB3_ResetPullup()           do { WPUBbits.WPUB3 = 0; } while(0)
#define RB3_SetAnalogMode()         do { ANSELBbits.ANSELB3 = 1; } while(0)
#define RB3_SetDigitalMode()        do { ANSELBbits.ANSELB3 = 0; } while(0)

// get/set RB4 procedures
#define RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define RB4_GetValue()              PORTBbits.RB4
#define RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define RB4_SetPullup()             do { WPUBbits.WPUB4 = 1; } while(0)
#define RB4_ResetPullup()           do { WPUBbits.WPUB4 = 0; } while(0)
#define RB4_SetAnalogMode()         do { ANSELBbits.ANSELB4 = 1; } while(0)
#define RB4_SetDigitalMode()        do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set CAN_STB aliases
#define CAN_STB_TRIS                 TRISBbits.TRISB5
#define CAN_STB_LAT                  LATBbits.LATB5
#define CAN_STB_PORT                 PORTBbits.RB5
#define CAN_STB_WPU                  WPUBbits.WPUB5
#define CAN_STB_OD                   ODCONBbits.ODCB5
#define CAN_STB_ANS                  ANSELBbits.ANSELB5
#define CAN_STB_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define CAN_STB_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define CAN_STB_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define CAN_STB_GetValue()           PORTBbits.RB5
#define CAN_STB_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define CAN_STB_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define CAN_STB_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define CAN_STB_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define CAN_STB_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define CAN_STB_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define CAN_STB_SetAnalogMode()      do { ANSELBbits.ANSELB5 = 1; } while(0)
#define CAN_STB_SetDigitalMode()     do { ANSELBbits.ANSELB5 = 0; } while(0)

// get/set IO_RB6 aliases
#define IO_RB6_TRIS                 TRISBbits.TRISB6
#define IO_RB6_LAT                  LATBbits.LATB6
#define IO_RB6_PORT                 PORTBbits.RB6
#define IO_RB6_WPU                  WPUBbits.WPUB6
#define IO_RB6_OD                   ODCONBbits.ODCB6
#define IO_RB6_ANS                  ANSELBbits.ANSELB6
#define IO_RB6_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define IO_RB6_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define IO_RB6_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define IO_RB6_GetValue()           PORTBbits.RB6
#define IO_RB6_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define IO_RB6_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define IO_RB6_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define IO_RB6_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define IO_RB6_SetPushPull()        do { ODCONBbits.ODCB6 = 0; } while(0)
#define IO_RB6_SetOpenDrain()       do { ODCONBbits.ODCB6 = 1; } while(0)
#define IO_RB6_SetAnalogMode()      do { ANSELBbits.ANSELB6 = 1; } while(0)
#define IO_RB6_SetDigitalMode()     do { ANSELBbits.ANSELB6 = 0; } while(0)

// get/set IO_RB7 aliases
#define IO_RB7_TRIS                 TRISBbits.TRISB7
#define IO_RB7_LAT                  LATBbits.LATB7
#define IO_RB7_PORT                 PORTBbits.RB7
#define IO_RB7_WPU                  WPUBbits.WPUB7
#define IO_RB7_OD                   ODCONBbits.ODCB7
#define IO_RB7_ANS                  ANSELBbits.ANSELB7
#define IO_RB7_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define IO_RB7_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define IO_RB7_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define IO_RB7_GetValue()           PORTBbits.RB7
#define IO_RB7_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define IO_RB7_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define IO_RB7_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define IO_RB7_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define IO_RB7_SetPushPull()        do { ODCONBbits.ODCB7 = 0; } while(0)
#define IO_RB7_SetOpenDrain()       do { ODCONBbits.ODCB7 = 1; } while(0)
#define IO_RB7_SetAnalogMode()      do { ANSELBbits.ANSELB7 = 1; } while(0)
#define IO_RB7_SetDigitalMode()     do { ANSELBbits.ANSELB7 = 0; } while(0)

// get/set WAKEUP aliases
#define WAKEUP_TRIS                 TRISCbits.TRISC0
#define WAKEUP_LAT                  LATCbits.LATC0
#define WAKEUP_PORT                 PORTCbits.RC0
#define WAKEUP_WPU                  WPUCbits.WPUC0
#define WAKEUP_OD                   ODCONCbits.ODCC0
#define WAKEUP_ANS                  ANSELCbits.ANSELC0
#define WAKEUP_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define WAKEUP_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define WAKEUP_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define WAKEUP_GetValue()           PORTCbits.RC0
#define WAKEUP_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define WAKEUP_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define WAKEUP_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define WAKEUP_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define WAKEUP_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define WAKEUP_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define WAKEUP_SetAnalogMode()      do { ANSELCbits.ANSELC0 = 1; } while(0)
#define WAKEUP_SetDigitalMode()     do { ANSELCbits.ANSELC0 = 0; } while(0)

// get/set LOCK_IN aliases
#define LOCK_IN_TRIS                 TRISCbits.TRISC1
#define LOCK_IN_LAT                  LATCbits.LATC1
#define LOCK_IN_PORT                 PORTCbits.RC1
#define LOCK_IN_WPU                  WPUCbits.WPUC1
#define LOCK_IN_OD                   ODCONCbits.ODCC1
#define LOCK_IN_ANS                  ANSELCbits.ANSELC1
#define LOCK_IN_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define LOCK_IN_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define LOCK_IN_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define LOCK_IN_GetValue()           PORTCbits.RC1
#define LOCK_IN_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define LOCK_IN_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define LOCK_IN_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define LOCK_IN_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define LOCK_IN_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define LOCK_IN_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define LOCK_IN_SetAnalogMode()      do { ANSELCbits.ANSELC1 = 1; } while(0)
#define LOCK_IN_SetDigitalMode()     do { ANSELCbits.ANSELC1 = 0; } while(0)

// get/set UNLOCK_IN aliases
#define UNLOCK_IN_TRIS                 TRISCbits.TRISC2
#define UNLOCK_IN_LAT                  LATCbits.LATC2
#define UNLOCK_IN_PORT                 PORTCbits.RC2
#define UNLOCK_IN_WPU                  WPUCbits.WPUC2
#define UNLOCK_IN_OD                   ODCONCbits.ODCC2
#define UNLOCK_IN_ANS                  ANSELCbits.ANSELC2
#define UNLOCK_IN_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define UNLOCK_IN_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define UNLOCK_IN_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define UNLOCK_IN_GetValue()           PORTCbits.RC2
#define UNLOCK_IN_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define UNLOCK_IN_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define UNLOCK_IN_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define UNLOCK_IN_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define UNLOCK_IN_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define UNLOCK_IN_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define UNLOCK_IN_SetAnalogMode()      do { ANSELCbits.ANSELC2 = 1; } while(0)
#define UNLOCK_IN_SetDigitalMode()     do { ANSELCbits.ANSELC2 = 0; } while(0)

// get/set LED_TRIG aliases
#define LED_TRIG_TRIS                 TRISCbits.TRISC3
#define LED_TRIG_LAT                  LATCbits.LATC3
#define LED_TRIG_PORT                 PORTCbits.RC3
#define LED_TRIG_WPU                  WPUCbits.WPUC3
#define LED_TRIG_OD                   ODCONCbits.ODCC3
#define LED_TRIG_ANS                  ANSELCbits.ANSELC3
#define LED_TRIG_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define LED_TRIG_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define LED_TRIG_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define LED_TRIG_GetValue()           PORTCbits.RC3
#define LED_TRIG_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define LED_TRIG_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define LED_TRIG_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define LED_TRIG_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define LED_TRIG_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define LED_TRIG_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define LED_TRIG_SetAnalogMode()      do { ANSELCbits.ANSELC3 = 1; } while(0)
#define LED_TRIG_SetDigitalMode()     do { ANSELCbits.ANSELC3 = 0; } while(0)

// get/set LED_STATUS aliases
#define LED_STATUS_TRIS                 TRISCbits.TRISC4
#define LED_STATUS_LAT                  LATCbits.LATC4
#define LED_STATUS_PORT                 PORTCbits.RC4
#define LED_STATUS_WPU                  WPUCbits.WPUC4
#define LED_STATUS_OD                   ODCONCbits.ODCC4
#define LED_STATUS_ANS                  ANSELCbits.ANSELC4
#define LED_STATUS_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define LED_STATUS_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define LED_STATUS_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define LED_STATUS_GetValue()           PORTCbits.RC4
#define LED_STATUS_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define LED_STATUS_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define LED_STATUS_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define LED_STATUS_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define LED_STATUS_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define LED_STATUS_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define LED_STATUS_SetAnalogMode()      do { ANSELCbits.ANSELC4 = 1; } while(0)
#define LED_STATUS_SetDigitalMode()     do { ANSELCbits.ANSELC4 = 0; } while(0)

// get/set IGN_LED aliases
#define IGN_LED_TRIS                 TRISCbits.TRISC5
#define IGN_LED_LAT                  LATCbits.LATC5
#define IGN_LED_PORT                 PORTCbits.RC5
#define IGN_LED_WPU                  WPUCbits.WPUC5
#define IGN_LED_OD                   ODCONCbits.ODCC5
#define IGN_LED_ANS                  ANSELCbits.ANSELC5
#define IGN_LED_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define IGN_LED_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define IGN_LED_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define IGN_LED_GetValue()           PORTCbits.RC5
#define IGN_LED_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define IGN_LED_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define IGN_LED_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define IGN_LED_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define IGN_LED_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define IGN_LED_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define IGN_LED_SetAnalogMode()      do { ANSELCbits.ANSELC5 = 1; } while(0)
#define IGN_LED_SetDigitalMode()     do { ANSELCbits.ANSELC5 = 0; } while(0)

// get/set IO_RC6 aliases
#define IO_RC6_TRIS                 TRISCbits.TRISC6
#define IO_RC6_LAT                  LATCbits.LATC6
#define IO_RC6_PORT                 PORTCbits.RC6
#define IO_RC6_WPU                  WPUCbits.WPUC6
#define IO_RC6_OD                   ODCONCbits.ODCC6
#define IO_RC6_ANS                  ANSELCbits.ANSELC6
#define IO_RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define IO_RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define IO_RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define IO_RC6_GetValue()           PORTCbits.RC6
#define IO_RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define IO_RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define IO_RC6_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define IO_RC6_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define IO_RC6_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define IO_RC6_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define IO_RC6_SetAnalogMode()      do { ANSELCbits.ANSELC6 = 1; } while(0)
#define IO_RC6_SetDigitalMode()     do { ANSELCbits.ANSELC6 = 0; } while(0)

// get/set IO_RC7 aliases
#define IO_RC7_TRIS                 TRISCbits.TRISC7
#define IO_RC7_LAT                  LATCbits.LATC7
#define IO_RC7_PORT                 PORTCbits.RC7
#define IO_RC7_WPU                  WPUCbits.WPUC7
#define IO_RC7_OD                   ODCONCbits.ODCC7
#define IO_RC7_ANS                  ANSELCbits.ANSELC7
#define IO_RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define IO_RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define IO_RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define IO_RC7_GetValue()           PORTCbits.RC7
#define IO_RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define IO_RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define IO_RC7_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define IO_RC7_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define IO_RC7_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define IO_RC7_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define IO_RC7_SetAnalogMode()      do { ANSELCbits.ANSELC7 = 1; } while(0)
#define IO_RC7_SetDigitalMode()     do { ANSELCbits.ANSELC7 = 0; } while(0)

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