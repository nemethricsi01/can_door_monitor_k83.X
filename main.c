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
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC18F26K83
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

/*
                         Main application
 */
uCAN_MSG canMessage;
uint8_t messageReady;


uint16_t ignTimer = 0;
uint16_t yellowTimer = 500;

uint8_t rc0,rb2,leds;
void RXB0InterruptHandler(void)
{
    CAN_receive(&canMessage);
    if((canMessage.frame.id == 0x12f))
    {
        ignTimer = 500;
    }
    if((canMessage.frame.id == 0xFE)&&((canMessage.frame.data0 != 0xff)||(canMessage.frame.data1 != 0xff)||
            (canMessage.frame.data2 != 0xff)||(canMessage.frame.data3 != 0xff)||(canMessage.frame.data4 != 0xff)||
            (canMessage.frame.data5 != 0xff)||(canMessage.frame.data6 != 0xff)||(canMessage.frame.data7 != 0xff)))
    {
        ignTimer = 500;
    }
    if((canMessage.frame.id == 0x52)&&((canMessage.frame.data5&0xf0) == 0x40))
    {
        ignTimer = 500;
    }
    if((canMessage.frame.id == 0x296)&&((canMessage.frame.data5&0x0f) == 0x0A))
    {
        ignTimer = 500;
    } 
    messageReady = 1;
}
void TMR6InterruptHandler(void)
{
    if(ignTimer > 0)
    {
        ignTimer--;
        IGN_LED_SetHigh();
        if(ignTimer == 0)
        {
            IGN_LED_SetLow();
        }
    }
    if(yellowTimer > 0)
    {
        yellowTimer--;
        if(yellowTimer == 0)
        {
            yellowTimer = 500;
            LED_STATUS_SetHigh();
        }
        if(yellowTimer < 400)
        {
            LED_STATUS_SetLow();
        }
    }
}
void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();

    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global Interrupts
    // Use the following macros to:

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();
    //CAN_STB_SetHigh();
    ECAN_SetRXB0InterruptHandler(RXB0InterruptHandler);
    TMR6_Start();
    TMR6_SetInterruptHandler(TMR6InterruptHandler);
    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();
    
    while (1)
    {
        // Add your application code
//        __delay_ms(1000);
//        rc0 = WAKEUP_GetValue();
//        rb2 = IGN_LED_GetValue();
//        leds = (LED1R_GetValue() & LED2R_GetValue());
//        if(leds == 0)
//        {
//            if( ( rb2 == 0 )&&( rc0 == 1 ))
//            {
//                LED1R_SetHigh();
//                LED2R_SetHigh();
//            }
//        }
//        else if(leds == 1)
//        {
//            if(rc0 == 0)
//            {
//                LED1R_SetLow();
//                LED2R_SetLow();
//            }
//        }
//        
//        
//        
    }
}



/**
 End of File
*/