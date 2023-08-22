/**********************************************************/
/**********************************************************/
/***************	Author: Adham Ibrahim	***************/
/***************	Layer: 	MCAL			***************/
/***************	SWC: 	RCC				***************/
/***************	Version:1.00			***************/
/**********************************************************/
/**********************************************************/
#ifndef RCC_INTERFACE_H_
#define RCC_INTERFACE_H_

void RCC_VoidInit(void);
void RCC_VoidPeripheralClkEnable(u8 Bus_ID, u8 Peripheral_ID);
void RCC_VoidPeripheralClkDisable(u8 Bus_ID, u8 Peripheral_ID);

#define AHB		0
#define APB1	1
#define APB2	2

#endif /* RCC_INTERFACE_H_ */
