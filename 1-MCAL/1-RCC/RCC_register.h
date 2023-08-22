/**********************************************************/
/**********************************************************/
/***************	Author: Adham Ibrahim	***************/
/***************	Layer: 	MCAL			***************/
/***************	SWC: 	RCC				***************/
/***************	Version:1.00			***************/
/**********************************************************/
/**********************************************************/
#ifndef RCC_REGISTER_H_
#define RCC_REGISTER_H_

#define		RCC_BASE_ADD		(0x40021000)

#define		RCC_CR				*((volatile u32 *)(RCC_BASE_ADD + 0x00))
#define 	RCC_CR_PLLON		24
#define 	RCC_CR_HSEBYP		18
#define 	RCC_CR_HSEON		16
#define 	RCC_CR_HSION		0

#define		RCC_CFGR			*((volatile u32 *)(RCC_BASE_ADD + 0x04))
#define		RCC_CFGR_PLLXTPRE	17
#define		RCC_CFG_RUSBPRE		22
#define		RCC_CFGR_I2SSRC		23
#define		RCC_CFGR_PLLNODIV	31

#define		RCC_CIR				*((volatile u32 *)(RCC_BASE_ADD + 0x08))
#define		RCC_APB2RSTR		*((volatile u32 *)(RCC_BASE_ADD + 0x0C))
#define		RCC_APB1RSTRCR		*((volatile u32 *)(RCC_BASE_ADD + 0x10))
#define		RCC_AHBENR			*((volatile u32 *)(RCC_BASE_ADD + 0x14))
#define		RCC_AHBENR_IOPFEN	22
#define		RCC_AHBENR_IOPDEN	20
#define		RCC_AHBENR_IOPCEN	19
#define		RCC_AHBENR_IOPBEN	18
#define		RCC_AHBENR_IOPAEN	17

#define		RCC_APB2ENR			*((volatile u32 *)(RCC_BASE_ADD + 0x18))
#define		RCC_APB1ENR			*((volatile u32 *)(RCC_BASE_ADD + 0x1C))
#define		RCC_BDCR			*((volatile u32 *)(RCC_BASE_ADD + 0x20))
#define		RCC_CSR				*((volatile u32 *)(RCC_BASE_ADD + 0x24))
#define		RCC_AHBRSTR			*((volatile u32 *)(RCC_BASE_ADD + 0x28))
#define		RCC_CFGR2			*((volatile u32 *)(RCC_BASE_ADD + 0x2C))
#define		RCC_CFGR3			*((volatile u32 *)(RCC_BASE_ADD + 0x30))

#endif /* RCC_REGISTER_H_ */
