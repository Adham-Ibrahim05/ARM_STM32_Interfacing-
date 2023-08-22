/**********************************************************/
/**********************************************************/
/***************	Author: Adham Ibrahim	***************/
/***************	Layer: 	MCAL			***************/
/***************	SWC: 	NVIC			***************/
/***************	Version:1.00			***************/
/**********************************************************/
/**********************************************************/
#ifndef NVIC_INTERFACE_H_
#define NVIC_INTERFACE_H_

void NVIC_voidInit(void);

void NVIC_voidEnableInterrupt(u8 IntNumber);

void NVIC_voidDisableInterrupt(u8 IntNumber);

void NVIC_voidSetPendingFlag(u8 IntNumber);

void NVIC_voidClearPendingFlag(u8 IntNumber);

u8 NVIC_u8GetActiveFlag(u8 IntNumber);

void NVIC_voidSetPriority(u8 IntNumber, u8 Priority);

#endif /* NVIC_INTERFACE_H_ */
