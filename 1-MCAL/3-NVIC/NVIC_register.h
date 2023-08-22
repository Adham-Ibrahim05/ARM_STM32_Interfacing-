/**********************************************************/
/**********************************************************/
/***************	Author: Adham Ibrahim	***************/
/***************	Layer: 	MCAL			***************/
/***************	SWC: 	NVIC			***************/
/***************	Version:1.00			***************/
/**********************************************************/
/**********************************************************/
#ifndef NVIC_REGISTER_H_
#define NVIC_REGISTER_H_

#define		NVIC_ISER0				*((volatile u32 *)0xE000E100)	//Enable Interrupt From 0 to 31
#define		NVIC_ISER1				*((volatile u32 *)0xE000E104)	//Enable Interrupt From 32 to 63

#define		NVIC_ICER0				*((volatile u32 *)0xE000E180)	//Disable Interrupt From 0 to 31
#define		NVIC_ICER1				*((volatile u32 *)0xE000E184)	//Disable Interrupt From 32 to 63

#define		NVIC_ISPR0				*((volatile u32 *)0xE000E200)	//SET Pending Flag From 0 to 31
#define		NVIC_ISPR1				*((volatile u32 *)0xE000E204)	//SET Pending Flag From 32 to 63

#define		NVIC_ICPR0				*((volatile u32 *)0xE000E280)	//Clear Pending Flag From 0 to 31
#define		NVIC_ICPR1				*((volatile u32 *)0xE000E284)   //Clear Pending Flag From 32 to 63

#define		NVIC_IABR0				*((volatile u32 *)0xE000E300)	// Interrupt Active Bit From 0 to 31
#define		NVIC_IABR1				*((volatile u32 *)0xE000E304)	// Interrupt Active Bit From 32 to 63

#define		NVIC_IPR				((volatile u8 *)0xE000E400)

#define		STIR					*((volatile u32 *)0xE000EF00)	//Software Trigger Interrupt

#endif /* NVIC_REGISTER_H_ */
