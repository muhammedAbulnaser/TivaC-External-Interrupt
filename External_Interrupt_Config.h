/*
  Authores : Mohamed Abd Elmotaal 
	   : Mohamed Abd Elnaseer
  Release : V 1.0.0
  Type   : EXTERNAL_INTERRUPT Driver 
	                                           */



/* if you want your interrupt_sense in your port in edge state          PORTX_SENCE   -> EDGE 
and if you want your interrupt_sense in your port in level state        PORTX_SENCE   -> LEVEL 
*/

#define PORTA_SENCE  EDGE
#define PORTB_SENCE  EDGE
#define PORTC_SENCE  EDGE
#define PORTD_SENCE  EDGE
#define PORTE_SENCE  EDGE
#define PORTF_SENCE  EDGE

/* if you want your interrupt_event in your port in (high / rising) state          PORTX_EVENT  -> HIGH 
and if you want your interrupt_event in your port in (low / falling) state        PORTX_EVENT   -> LOW 
*/

#define PORTA_EVENT  HIGH
#define PORTB_EVENT  HIGH
#define PORTC_EVENT  HIGH
#define PORTD_EVENT  HIGH
#define PORTE_EVENT  HIGH
#define PORTF_EVENT  LOW

