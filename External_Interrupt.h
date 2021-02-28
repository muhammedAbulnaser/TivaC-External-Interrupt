
/*
  Authores : Mohamed Abd Elmotaal 
	   : Mohamed Abd Elnaseer
  Release : V 1.0.0
  Type   : EXTERNAL_INTERRUPT Driver 
	                                           */

#include "TM4C123GH6PM.h"
#include <stdint.h>

/**************************************************************************************
***************************************************************************************
***************************** PUBLIC DEFENTIONS ***************************************
***************************************************************************************
***************************************************************************************/

typedef void (*Ptr_Func)(void);

#define EDGE  0x00        /*to edge state */
#define LEVEL 0xFF        /*to level state */
#define LOW   0x00        /*to low level or falling edge  */
#define HIGH  0xFF        /*to high level or rising edge  */

/*enum PORTS{
		PORTA = 0,
	  PORTB,
		PORTC,
		PORTD,
		PORTE,
		PORTF
	
};*/

/**************************************************************************************
***************************************************************************************
***************************** PUBLIC FUNCTIONS ****************************************
***************************************************************************************
***************************************************************************************/


/**************************************************************************
********************** Public Functions ***********************************
**************************************************************************/

void PORTA_Enable_Interrupt(int8_t Pins_num );
void PORTB_Enable_Interrupt(int8_t Pins_num );
void PORTC_Enable_Interrupt(int8_t Pins_num );
void PORTD_Enable_Interrupt(int8_t Pins_num );
void PORTE_Enable_Interrupt(int8_t Pins_num );
void PORTF_Enable_Interrupt(int8_t Pins_num );

void GPIO_Disable_Interrupt(int8_t PORT);

void GPIO_Disable_Global_Interrupt(void);

void Interrupt_Func (int8_t PORT, int8_t PIN,void(*Ptr_Func)(void));
