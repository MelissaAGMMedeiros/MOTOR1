/*
 * File:   main.c
 * Author: 21193460
 *
 * Created on 10 de Novembro de 2021, 11:07
 */

#include "conf.h"
#include <xc.h>

#define XTAL_FREQ 4000000

#define BT1   PORTDbits.RD0
#define BT2   PORTDbits.RD1
#define MOTOR PORTDbits.RD2

void main(void) 
{
    TRISDbits.TRISD2 = 0;
    TRISDbits.TRISD0 = 1;
    TRISDbits.TRISD1 = 1;
    
    PORTDbits.RD2 = 0;
    
    while( 1 )
    {        
        if( BT1 == 1 )
        {
            MOTOR = 1;
        }
        if (BT2 == 1 )
        {
           MOTOR = 0; 
        }      
    }
}
