/**********************************************************/
/**********************************************************/
/***************	Author: Adham Ibrahim	***************/
/***************	Layer: 	MCAL			***************/
/***************	SWC: 	EXTI			***************/
/***************	Version:1.00			***************/
/**********************************************************/
/**********************************************************/
#ifndef		EXTI_REGISTER_H
#define		EXTI_REGISTER_H



typedef struct
{
	volatile u32 IMR1;
	volatile u32 EMR1;
	volatile u32 RTSR1;
	volatile u32 FTSR1;
	volatile u32 SWIER1;
	volatile u32 PR1;
}EXTI_t;

#define		EXTI			((EXTI_t*)(0x40010400))

#endif
