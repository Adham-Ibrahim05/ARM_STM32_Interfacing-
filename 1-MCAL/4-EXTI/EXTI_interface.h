/**********************************************************/
/**********************************************************/
/***************	Author: Adham Ibrahim	***************/
/***************	Layer: 	MCAL			***************/
/***************	SWC: 	EXTI			***************/
/***************	Version:1.00			***************/
/**********************************************************/
/**********************************************************/
#ifndef		EXTI_INTERFACE_H
#define		EXTI_INTERFACE_H

void EXTI_voidInit(u8 Line_Number ,u8 Port);

//void EXTI_voidInit();

void EXTI_voidEnableLine(u8 Line_Number);

void EXTI_voidDisableLine(u8 Line_Number);

void EXTI_voidSetSenseMode(u8 Line_Number, u8 Mode);

void EXTI_voidClearPendingFlag(u8 Line_Number);

#endif
