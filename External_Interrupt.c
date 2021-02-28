
/*
  Authores : Mohamed Abd Elmotaal 
	   : Mohamed Abd Elnaseer
  Release : V 1.0.0
  Type   : EXTERNAL_INTERRUPT Driver 
	                                           */

#include "TM4C123GH6PM.h"
#include <stdint.h>
#include "GPIO_interface.h"
#include "External_Interrupt.h"
#include "External_Interrupt_Config.h"


Ptr_Func array_A [8];
Ptr_Func array_B [8];
Ptr_Func array_C [8];
Ptr_Func array_D [8];
Ptr_Func array_E [8];
Ptr_Func array_F [8];

/*****************************************************************************************
***************************Describtion : using GPIO interrupt ****************************
             
 Required : the num of pin which you want tou use   ex : p0,p4 -> 0x11
                          													
****************************Return : void *************************************************/

void PORTA_Enable_Interrupt(int8_t Pins_num )
{			
     NVIC_EnableIRQ(GPIOA_IRQn);           /* enabling the IRQ num to register ICER  (interuupt clear enable reg )*/  
	
	 GPIOA->IS  &=  PORTA_SENCE;             /* make edge sensitive */	  
	 GPIOA->IBE |=  PORTA_EVENT;             /* make it falling edge or low level */
       GPIOA->IEV |=  PORTA_EVENT;             	    
       GPIOA->ICR |=  Pins_num;              /* clear any prior interrupt */
       GPIOA->IM  |=  Pins_num;             /* unmask interrupt */
	__enable_irq();
                                                    
		  
}

/*****************************************************************************************
***************************Describtion : using GPIO interrupt ****************************
             
						      Required : the num of pin which you want tou use   ex : p0,p4 -> 0x11
                          													
****************************Return : void *************************************************/

void PORTB_Enable_Interrupt(int8_t Pins_num )
{
			
		  NVIC_EnableIRQ(GPIOB_IRQn);           /* enabling the IRQ num to register ICER  (interuupt clear enable reg )*/  
	
		  GPIOB->IS  &=  PORTB_SENCE;              /* make edge sensitive */	  
		  GPIOB->IBE |=  PORTB_EVENT;             /* make it falling edge or low level */
      GPIOB->IEV |=  PORTB_EVENT;             
		    
      GPIOB->ICR |=  Pins_num;                          /* clear any prior interrupt */
      GPIOB->IM  |=  Pins_num;                           /* unmask interrupt */
		  	__enable_irq();
}
		
/*****************************************************************************************
***************************Describtion : using GPIO interrupt ****************************
             
						      Required : the num of pin which you want tou use   ex : p0,p4 -> 0x11
                          													
****************************Return : void *************************************************/

void PORTC_Enable_Interrupt(int8_t Pins_num )
{
			
		  NVIC_EnableIRQ(GPIOC_IRQn);           /* enabling the IRQ num to register ICER  (interuupt clear enable reg )*/  
	
		  GPIOC->IS  &=  PORTC_SENCE;              /* make edge sensitive */	  
		  GPIOC->IBE |=  PORTC_EVENT;             /* make it falling edge or low level */
      GPIOC->IEV |=  PORTC_EVENT;             
		    
      GPIOC->ICR |=  Pins_num;                          /* clear any prior interrupt */
      GPIOC->IM  |=  Pins_num;                           /* unmask interrupt */
		  	__enable_irq();
}

/*****************************************************************************************
***************************Describtion : using GPIO interrupt ****************************
            Required : the num of pin which you want tou use   ex : p0,p4 -> 0x11
                          													
****************************Return : void *************************************************/

void PORTD_Enable_Interrupt(int8_t Pins_num )
{
			
		  NVIC_EnableIRQ(GPIOD_IRQn);           /* enabling the IRQ num to register ICER  (interuupt clear enable reg )*/  
	
		  GPIOD->IS  &=  PORTD_SENCE;              /* make edge sensitive */	  
		  GPIOD->IBE |=  PORTD_EVENT;             /* make it falling edge or low level */
      GPIOD->IEV |=  PORTD_EVENT;             
		    
      GPIOD->ICR |=  Pins_num;                          /* clear any prior interrupt */
      GPIOD->IM  |=  Pins_num;                           /* unmask interrupt */
		  	__enable_irq();
}

/*****************************************************************************************
***************************Describtion : using GPIO interrupt ****************************
             
						      Required : the num of pin which you want tou use   ex : p0,p4 -> 0x11
                          													
****************************Return : void *************************************************/

void PORTE_Enable_Interrupt(int8_t Pins_num )
{
			
		  NVIC_EnableIRQ(GPIOE_IRQn);           /* enabling the IRQ num to register ICER  (interuupt clear enable reg )*/  
	
		  GPIOE->IS  &=  PORTE_SENCE;              /* make edge sensitive */	  
		  GPIOE->IBE |=  PORTE_EVENT;             /* make it falling edge or low level */
      GPIOE->IEV |=  PORTE_EVENT;             
		    
      GPIOE->ICR |=  Pins_num;                          /* clear any prior interrupt */
      GPIOE->IM  |=  Pins_num;                           /* unmask interrupt */
		  	__enable_irq();
}

/*****************************************************************************************
***************************Describtion : using GPIO interrupt ****************************
             
						      Required : the num of pin which you want tou use   ex : p0,p4 -> 0x11
                          													
****************************Return : void *************************************************/

void PORTF_Enable_Interrupt(int8_t Pins_num )
{
			
		  NVIC_EnableIRQ(GPIOF_IRQn);           /* enabling the IRQ num to register ICER  (interuupt clear enable reg )*/  
	
		  GPIOF->IS  &=  PORTF_SENCE;              /* make edge sensitive */	  
		  GPIOF->IBE |=  PORTF_EVENT;             /* make it falling edge or low level */
      GPIOF->IEV |=  PORTF_EVENT;             
		    
      GPIOF->ICR |=  Pins_num;                          /* clear any prior interrupt */
      GPIOF->IM  |=  Pins_num;                           /* unmask interrupt */
		  	__enable_irq();
}

/*****************************************************************************************
******************Describtion : Disable interrupt which you want   ***********************
                 Required: the interrupt num from intrreupt vector table in mazide page 155								
****************************Return : void *************************************************/

void GPIO_Disable_Interrupt(int8_t PORT)
{
	switch (PORT)
	{
		case PORTA :
	      NVIC_DisableIRQ(GPIOA_IRQn);
		    break;
		
		case PORTB :
	      NVIC_DisableIRQ(GPIOB_IRQn);
		    break;
		
		case PORTC :
	      NVIC_DisableIRQ(GPIOC_IRQn);
		    break;
		
		case PORTD :
	      NVIC_DisableIRQ(GPIOD_IRQn);
		    break;
		
		case PORTE :
	      NVIC_DisableIRQ(GPIOE_IRQn);
		    break;
		
		case PORTF :
	      NVIC_DisableIRQ(GPIOF_IRQn);
		    break;
	}
}

/*****************************************************************************************
***************************Describtion : Disable Global interrupt  ****************************
                            Required:	void							
****************************Return : void *************************************************/

void GPIO_Disable_Global_Interrupt(void)
{
	__disable_irq();                                 /* Disable interrupt Globally */
}


void Interrupt_Func (int8_t PORT, int8_t PIN, void (* Ptr_Func )(void))
{
	switch (PORT)
	{
		case PORTA : array_A [PIN] = Ptr_Func ;  break;
		case PORTB : array_B [PIN] = Ptr_Func ;  break;
		case PORTC : array_C [PIN] = Ptr_Func ;  break;
		case PORTD : array_D [PIN] = Ptr_Func ;  break;
		case PORTE : array_E [PIN] = Ptr_Func ;  break;
	  case PORTF : array_F [PIN] = Ptr_Func ;  break;
	}
}

void GPIOA_Handler(void)
{
	for( uint8_t i=0;i<8;i++)    //check which bit in the reg.
	{
		if ((GPIOA->RIS >>i)& 1)   // if you find the bit number
		{
			array_A[i]() ;           // it will send the function related to that bin
			GPIOA->ICR |=  (1<<5);   // clear the flag
		}
	}
	
}


void GPIOB_Handler(void)
{
	for( uint8_t i=0;i<8;i++)
	{
		if ((GPIOB->RIS >>i) & 1)
		{
			array_B[i] () ;
			GPIOB->ICR |=  (1<<5);
		}
	}
	
}


void GPIOC_Handler(void)
{
	for( uint8_t i=0;i<8;i++)
	{
		if ((GPIOC->RIS >>i) & 1)
		{
			array_C[i] () ;
			GPIOC->ICR |=  (1<<5);
		}
	}
}


void GPIOD_Handler(void)
{
	for( uint8_t i=0;i<8;i++)
	{
		if ((GPIOD->RIS >>i )& 1)
		{
			array_D[i] () ;
			GPIOD->ICR |=  (1<<5);
		}
	}
}

void GPIOE_Handler(void)
{
	for( uint8_t i=0;i<8;i++)
	{
		if ((GPIOE->RIS >>i) & 1)
		{
			array_E[i] () ;
			GPIOE->ICR |=  (1<<5);
		}
	}
}

void GPIOF_Handler(void)
{
	for( uint8_t i=0;i<8;i++)
	{
		if ((GPIOF->RIS >>i) & 1)
		{
			array_F[i] () ;
			GPIOF->ICR |=  (1<<5);
		}
	}
}