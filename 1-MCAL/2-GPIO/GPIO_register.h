/**********************************************************/
/**********************************************************/
/***************	Author: Adham Ibrahim	***************/
/***************	Layer: 	MCAL			***************/
/***************	SWC: 	GPIO			***************/
/***************	Version:1.00			***************/
/**********************************************************/
/**********************************************************/
#ifndef GPIO_REGISTER_H_
#define GPIO_REGISTER_H_

/*GIOPA REGISTER*/
#define		GPIOA_BASE_ADD		(0x48000000)
#define		GPIOA_MODER			*((volatile u32 *)(GPIOA_BASE_ADD + 0x00))
#define		GPIOA_OTYPER		*((volatile u32 *)(GPIOA_BASE_ADD + 0x04))
#define		GPIOA_OSPEEDR		*((volatile u32 *)(GPIOA_BASE_ADD + 0x08))
#define		GPIOA_PUPDR			*((volatile u32 *)(GPIOA_BASE_ADD + 0x0C))
#define		GPIOA_IDR			*((volatile u32 *)(GPIOA_BASE_ADD + 0x10))
#define		GPIOA_ODR			*((volatile u32 *)(GPIOA_BASE_ADD + 0x14))

/*GIOPB REGISTER*/
#define		GPIOB_BASE_ADD		(0x48000400)
#define		GPIOB_MODER			*((volatile u32 *)(GPIOB_BASE_ADD + 0x00))
#define		GPIOB_OTYPER		*((volatile u32 *)(GPIOB_BASE_ADD + 0x04))
#define		GPIOB_OSPEEDR		*((volatile u32 *)(GPIOB_BASE_ADD + 0x08))
#define		GPIOB_PUPDR			*((volatile u32 *)(GPIOB_BASE_ADD + 0x0C))
#define		GPIOB_IDR			*((volatile u32 *)(GPIOB_BASE_ADD + 0x10))
#define		GPIOB_ODR			*((volatile u32 *)(GPIOB_BASE_ADD + 0x14))

/*GIOPC REGISTER*/
#define		GPIOC_BASE_ADD		(0x48000800)
#define		GPIOC_MODER			*((volatile u32 *)(GPIOC_BASE_ADD + 0x00))
#define		GPIOC_OTYPER		*((volatile u32 *)(GPIOC_BASE_ADD + 0x04))
#define		GPIOC_OSPEEDR		*((volatile u32 *)(GPIOC_BASE_ADD + 0x08))
#define		GPIOC_PUPDR			*((volatile u32 *)(GPIOC_BASE_ADD + 0x0C))
#define		GPIOC_IDR			*((volatile u32 *)(GPIOC_BASE_ADD + 0x10))
#define		GPIOC_ODR			*((volatile u32 *)(GPIOC_BASE_ADD + 0x14))

/*GIOPD REGISTER*/
#define		GPIOD_BASE_ADD		(0x48000C00)
#define		GPIOD_MODER			*((volatile u32 *)(GPIOD_BASE_ADD + 0x00))
#define		GPIOD_OTYPER		*((volatile u32 *)(GPIOD_BASE_ADD + 0x04))
#define		GPIOD_OSPEEDR		*((volatile u32 *)(GPIOD_BASE_ADD + 0x08))
#define		GPIOD_PUPDR			*((volatile u32 *)(GPIOD_BASE_ADD + 0x0C))
#define		GPIOD_IDR			*((volatile u32 *)(GPIOD_BASE_ADD + 0x10))
#define		GPIOD_ODR			*((volatile u32 *)(GPIOD_BASE_ADD + 0x14))

/*GIOPF REGISTER*/
#define		GPIOF_BASE_ADD		(0x48001400)
#define		GPIOF_MODER			*((volatile u32 *)(GPIOF_BASE_ADD + 0x00))
#define		GPIOF_OTYPER		*((volatile u32 *)(GPIOF_BASE_ADD + 0x04))
#define		GPIOF_OSPEEDR		*((volatile u32 *)(GPIOF_BASE_ADD + 0x08))
#define		GPIOF_PUPDR			*((volatile u32 *)(GPIOF_BASE_ADD + 0x0C))
#define		GPIOF_IDR			*((volatile u32 *)(GPIOF_BASE_ADD + 0x10))
#define		GPIOF_ODR			*((volatile u32 *)(GPIOF_BASE_ADD + 0x14))

#endif
