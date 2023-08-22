/**********************************************************/
/**********************************************************/
/***************	Author: Adham Ibrahim	***************/
/***************	Layer: 	MCAL			***************/
/***************	SWC: 	EXTI			***************/
/***************	Version:1.00			***************/
/**********************************************************/
/**********************************************************/
#include "../../Inc/LIB/STD_TYPES.h"
#include "../../Inc/LIB/BIT_MATH.h"
#include "../../Inc/EXTI/EXTI_register.h"
#include "../../Inc/EXTI/EXTI_private.h"
#include "../../Inc/EXTI/EXTI_config.h"
#include "../../Inc/EXTI/EXTI_interface.h"

void EXTI_voidInit(u8 Line_Number ,u8 Port)
{
	#ifndef	SYSCFG_EXTICR1
	#define SYSCFG_EXTICR1	*((volatile u32 *)0x40010008)
	#endif
	#ifndef	SYSCFG_EXTICR2
	#define SYSCFG_EXTICR2	*((volatile u32 *)0x4001000C)
	#endif
	#ifndef	SYSCFG_EXTICR3
	#define SYSCFG_EXTICR3	*((volatile u32 *)0x40010010)
	#endif
	#ifndef	SYSCFG_EXTICR4
	#define SYSCFG_EXTICR4	*((volatile u32 *)0x40010014)
	#endif

	if(Line_Number <= 3)	//EXTI0 TO EXTI3
	{
		switch(Port)
		{
			case PORTA :     if(Line_Number == LINE0) {SYSCFG_EXTICR1 = (PORTA);}
						else if(Line_Number == LINE1) {SYSCFG_EXTICR1 = (PORTA<<4);}
						else if(Line_Number == LINE2) {SYSCFG_EXTICR1 = (PORTA<<8);}
						else if(Line_Number == LINE3) {SYSCFG_EXTICR1 = (PORTA<<12);}
			break;

			case PORTB :     if(Line_Number == LINE0) {SYSCFG_EXTICR1 = (PORTB);}
						else if(Line_Number == LINE1) {SYSCFG_EXTICR1 = (PORTB<<4);}
						else if(Line_Number == LINE2) {SYSCFG_EXTICR1 = (PORTB<<8);}
						else if(Line_Number == LINE3) {SYSCFG_EXTICR1 = (PORTB<<12);}
			break;

			case PORTC :     if(Line_Number == LINE0) {SYSCFG_EXTICR1 = (PORTC);}
						else if(Line_Number == LINE1) {SYSCFG_EXTICR1 = (PORTC<<4);}
						else if(Line_Number == LINE2) {SYSCFG_EXTICR1 = (PORTC<<8);}
						else if(Line_Number == LINE3) {SYSCFG_EXTICR1 = (PORTC<<12);}
			break;

			case PORTD :     if(Line_Number == LINE0) {SYSCFG_EXTICR1 = (PORTD);}
						else if(Line_Number == LINE1) {SYSCFG_EXTICR1 = (PORTD<<4);}
						else if(Line_Number == LINE2) {SYSCFG_EXTICR1 = (PORTD<<8);}
						else if(Line_Number == LINE3) {SYSCFG_EXTICR1 = (PORTD<<12);}
			break;

			case PORTF :     if(Line_Number == LINE0) {SYSCFG_EXTICR1 = (PORTF);}
						else if(Line_Number == LINE1) {SYSCFG_EXTICR1 = (PORTF<<4);}
						else if(Line_Number == LINE2) {SYSCFG_EXTICR1 = (PORTF<<8);}
						else if(Line_Number == LINE3) {SYSCFG_EXTICR1 = (PORTF<<12);}
			break;
		}
	}

	else if(Line_Number <= 7)	//EXTI4 TO EXTI7
	{
		switch(Port)
		{
			case PORTA :	 if(Line_Number == LINE4) {SYSCFG_EXTICR2 = (PORTA);}
						else if(Line_Number == LINE5) {SYSCFG_EXTICR2 = (PORTA<<4);}
						else if(Line_Number == LINE6) {SYSCFG_EXTICR2 = (PORTA<<8);}
						else if(Line_Number == LINE7) {SYSCFG_EXTICR2 = (PORTA<<12);}
			break;

			case PORTB :     if(Line_Number == LINE4) {SYSCFG_EXTICR2 = (PORTB);}
						else if(Line_Number == LINE5) {SYSCFG_EXTICR2 = (PORTB<<4);}
						else if(Line_Number == LINE6) {SYSCFG_EXTICR2 = (PORTB<<8);}
						else if(Line_Number == LINE7) {SYSCFG_EXTICR2 = (PORTB<<12);}
			break;

			case PORTC :     if(Line_Number == LINE4) {SYSCFG_EXTICR2 = (PORTC);}
						else if(Line_Number == LINE5) {SYSCFG_EXTICR2 = (PORTC<<4);}
						else if(Line_Number == LINE6) {SYSCFG_EXTICR2 = (PORTC<<8);}
						else if(Line_Number == LINE7) {SYSCFG_EXTICR2 = (PORTC<<12);}
			break;

			case PORTD :     if(Line_Number == LINE4) {SYSCFG_EXTICR2 = (PORTD);}
						else if(Line_Number == LINE5) {SYSCFG_EXTICR2 = (PORTD<<4);}
						else if(Line_Number == LINE6) {SYSCFG_EXTICR2 = (PORTD<<8);}
						else if(Line_Number == LINE7) {SYSCFG_EXTICR2 = (PORTD<<12);}
			break;

			case PORTF :     if(Line_Number == LINE4) {SYSCFG_EXTICR2 = (PORTF);}
						else if(Line_Number == LINE5) {SYSCFG_EXTICR2 = (PORTF<<4);}
						else if(Line_Number == LINE6) {SYSCFG_EXTICR2 = (PORTF<<8);}
						else if(Line_Number == LINE7) {SYSCFG_EXTICR2 = (PORTF<<12);}
			break;
		}
	}

	else if(Line_Number <= 11)	//EXTI8 TO EXTI11
	{
		switch(Port)
		{
			case PORTA :	 if(Line_Number == LINE8)  {SYSCFG_EXTICR3 = (PORTA);}
						else if(Line_Number == LINE9)  {SYSCFG_EXTICR3 = (PORTA<<4);}
						else if(Line_Number == LINE10) {SYSCFG_EXTICR3 = (PORTA<<8);}
						else if(Line_Number == LINE11) {SYSCFG_EXTICR3 = (PORTA<<12);}
			break;

			case PORTB :     if(Line_Number == LINE8)  {SYSCFG_EXTICR3 = (PORTB);}
						else if(Line_Number == LINE9)  {SYSCFG_EXTICR3 = (PORTB<<4);}
						else if(Line_Number == LINE10) {SYSCFG_EXTICR3 = (PORTB<<8);}
						else if(Line_Number == LINE11) {SYSCFG_EXTICR3 = (PORTB<<12);}
			break;

			case PORTC :     if(Line_Number == LINE8)  {SYSCFG_EXTICR3 = (PORTC);}
						else if(Line_Number == LINE9)  {SYSCFG_EXTICR3 = (PORTC<<4);}
						else if(Line_Number == LINE10) {SYSCFG_EXTICR3 = (PORTC<<8);}
						else if(Line_Number == LINE11) {SYSCFG_EXTICR3 = (PORTC<<12);}
			break;

			case PORTD :     if(Line_Number == LINE8)  {SYSCFG_EXTICR3 = (PORTD);}
						else if(Line_Number == LINE9)  {SYSCFG_EXTICR3 = (PORTD<<4);}
						else if(Line_Number == LINE10) {SYSCFG_EXTICR3 = (PORTD<<8);}
						else if(Line_Number == LINE11) {SYSCFG_EXTICR3 = (PORTD<<12);}
			break;

			case PORTF :     if(Line_Number == LINE8)  {SYSCFG_EXTICR3 = (PORTF);}
						else if(Line_Number == LINE9)  {SYSCFG_EXTICR3 = (PORTF<<4);}
						else if(Line_Number == LINE10) {SYSCFG_EXTICR3 = (PORTF<<8);}
						else if(Line_Number == LINE11) {SYSCFG_EXTICR3 = (PORTF<<12);}
			break;
		}
	}

	else if(Line_Number <= 15)	//EXTI12 TO EXTI15
	{
		switch(Port)
		{
			case PORTA :	 if(Line_Number == LINE12) {SYSCFG_EXTICR4 = (PORTA);}
						else if(Line_Number == LINE13) {SYSCFG_EXTICR4 = (PORTA<<4);}
						else if(Line_Number == LINE14) {SYSCFG_EXTICR4 = (PORTA<<8);}
						else if(Line_Number == LINE15) {SYSCFG_EXTICR4 = (PORTA<<12);}
			break;

			case PORTB :     if(Line_Number == LINE12) {SYSCFG_EXTICR4 = (PORTB);}
						else if(Line_Number == LINE13) {SYSCFG_EXTICR4 = (PORTB<<4);}
						else if(Line_Number == LINE14) {SYSCFG_EXTICR4 = (PORTB<<8);}
						else if(Line_Number == LINE15) {SYSCFG_EXTICR4 = (PORTB<<12);}
			break;

			case PORTC :     if(Line_Number == LINE12) {SYSCFG_EXTICR4 = (PORTC);}
						else if(Line_Number == LINE13) {SYSCFG_EXTICR4 = (PORTC<<4);}
						else if(Line_Number == LINE14) {SYSCFG_EXTICR4 = (PORTC<<8);}
						else if(Line_Number == LINE15) {SYSCFG_EXTICR4 = (PORTC<<12);}
			break;

			case PORTD :     if(Line_Number == LINE12) {SYSCFG_EXTICR4 = (PORTD);}
						else if(Line_Number == LINE13) {SYSCFG_EXTICR4 = (PORTD<<4);}
						else if(Line_Number == LINE14) {SYSCFG_EXTICR4 = (PORTD<<8);}
						else if(Line_Number == LINE15) {SYSCFG_EXTICR4 = (PORTD<<12);}
			break;

			case PORTF :     if(Line_Number == LINE12) {SYSCFG_EXTICR4 = (PORTF);}
						else if(Line_Number == LINE13) {SYSCFG_EXTICR4 = (PORTF<<4);}
						else if(Line_Number == LINE14) {SYSCFG_EXTICR4 = (PORTF<<8);}
						else if(Line_Number == LINE15) {SYSCFG_EXTICR4 = (PORTF<<12);}
			break;
		}
	}
	EXTI_voidClearPendingFlag(Line_Number);
}

void EXTI_voidEnableLine(u8 Line_Number)
{
	//EXTI->IMR1 = (1<<Line_Number);
	SET_BIT(EXTI->IMR1 ,Line_Number);
	//SET_BIT(EXTI->PR1 ,Line_Number);
}

void EXTI_voidDisableLine(u8 Line_Number)
{
	EXTI -> IMR1 = 0<<Line_Number;	
}

void EXTI_voidSetSenseMode(u8 Line_Number, u8 Mode)
{
	switch(Mode)
	{
		case RISING: 	EXTI -> RTSR1 = 1<<Line_Number;
		break;

		case FALLING: 	EXTI -> FTSR1 = 1<<Line_Number;
		break;

		case ON_CHANGE: EXTI -> RTSR1 = 1<<Line_Number;
					    EXTI -> FTSR1 = 1<<Line_Number;
		break;
	}
}

void EXTI_voidClearPendingFlag(u8 Line_Number)
{
	SET_BIT(EXTI->PR1 ,Line_Number);
}
