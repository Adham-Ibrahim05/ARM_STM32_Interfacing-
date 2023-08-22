/**********************************************************/
/**********************************************************/
/***************	Author: Adham Ibrahim	***************/
/***************	Layer: 	MCAL			***************/
/***************	SWC: 	RCC				***************/
/***************	Version:1.00			***************/
/**********************************************************/
/**********************************************************/
#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "RCC_register.h"
#include "RCC_private.h"
#include "RCC_config.h"
#include "RCC_interface.h"

void RCC_VoidInit(void)
{
	/*Enable RCC */
	SET_BIT(RCC_CR,RCC_CR_HSION);

	/*Set System Clock as HSI*/
	RCC_CFGR &= SW_MASK;
	RCC_CFGR |= SYSTEM_CLOCK_TYPE;
	//RCC_CFGR = 0x00000000;

}
void RCC_VoidPeripheralClkEnable(u8 Bus_ID, u8 Peripheral_ID)
{
	/*Switch ON Bus ID*/
	switch(Bus_ID)
	{
		case AHB:  SET_BIT(RCC_AHBENR,Peripheral_ID);break;
		case APB1: SET_BIT(RCC_APB1ENR,Peripheral_ID);break;
		case APB2: SET_BIT(RCC_APB2ENR,Peripheral_ID);break;
	}

}
void RCC_VoidPeripheralClkDisable(u8 Bus_ID, u8 Peripheral_ID)
{
	switch(Bus_ID)
		{
			case AHB:  CLR_BIT(RCC_AHBENR,Peripheral_ID);break;
			case APB1: CLR_BIT(RCC_APB1ENR,Peripheral_ID);break;
			case APB2: CLR_BIT(RCC_APB2ENR,Peripheral_ID);break;
		}
}
