/**********************************************************/
/**********************************************************/
/***************	Author: Adham Ibrahim	***************/
/***************	Layer: 	MCAL			***************/
/***************	SWC: 	NVIC			***************/
/***************	Version:1.00			***************/
/**********************************************************/
/**********************************************************/
#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "NVIC_register.h"
#include "NVIC_private.h"
#include "NVIC_config.h"
#include "NVIC_interface.h"

void NVIC_voidInit()
{
	#ifndef SCB_AIRCR
	#define SCB_AIRCR		*((volatile u32 *)0xE000ED0C)
	#endif

	SCB_AIRCR = NUM_OF_GRP_SUB;
}

void NVIC_voidEnableInterrupt(u8 IntNumber)
{
	if(IntNumber < 32)
	{
		/*Enable Interrupt */
		NVIC_ISER0 = (1 << IntNumber);
	}
	
	else if (IntNumber < 64)
	{
		IntNumber -= 32; 	// 32 Means bit 0 in ISER1
		NVIC_ISER1 = (1 << IntNumber);
	}
}

void NVIC_voidDisableInterrupt(u8 IntNumber)
{
	if(IntNumber < 32)
	{
		NVIC_ICER0 = (1 << IntNumber);
	}
	
	else if (IntNumber > 64)
	{
		IntNumber -= 32; 	
		NVIC_ICER0 = (1 << IntNumber);
	}
}

void NVIC_voidSetPendingFlag(u8 IntNumber)
{
	if(IntNumber < 32)
	{
		NVIC_ISPR0 = (1 << IntNumber);
	}
	
	else if(IntNumber > 64)
	{
		IntNumber -= 32; 	
		NVIC_ISPR0 = (1 << IntNumber);
	}	
}

void NVIC_voidClearPendingFlag(u8 IntNumber)
{
	if(IntNumber < 32)
	{
		NVIC_ICPR0 = (1 << IntNumber);
	}
	
	else if(IntNumber > 64)
	{
		IntNumber -= 32; 	
		NVIC_ICPR0 = (1 << IntNumber);
	}
}

u8 NVIC_u8GetActiveFlag(u8 IntNumber)
{
	u8 Local_State;
	if(IntNumber < 32)
	{
		Local_State = GET_BIT(NVIC_IABR0,IntNumber);
	}
	
	else if(IntNumber > 64)
	{
		IntNumber -= 32;
		Local_State = GET_BIT(NVIC_IABR1,IntNumber);
	}
	return Local_State;
}

void NVIC_voidSetPriority(u8 IntNumber, u8 Priority)
{
	NVIC_IPR[IntNumber] = (Priority << 4);
}
