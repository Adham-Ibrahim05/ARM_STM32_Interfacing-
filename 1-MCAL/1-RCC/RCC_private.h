/**********************************************************/
/**********************************************************/
/***************	Author: Adham Ibrahim	***************/
/***************	Layer: 	MCAL			***************/
/***************	SWC: 	RCC				***************/
/***************	Version:1.00			***************/
/**********************************************************/
/**********************************************************/
#ifndef RCC_PRIVATE_H_
#define RCC_PRIVATE_H_

/*Microcontroller Clock Output Prescaler*/
#define MCO_PRESCALER_MASK		0X70000000
#define MCO_DIV_BY1				0
#define MCO_DIV_BY2				1
#define MCO_DIV_BY4				2
#define MCO_DIV_BY8				3
#define MCO_DIV_BY16			4
#define MCO_DIV_BY32			5
#define MCO_DIV_BY64			6
#define MCO_DIV_BY128			7

/*Microcontroller clock output*/
#define MCO_MASK				0X07000000
#define MCO_NOCLOCK				0
#define MCO_LSI					2
#define MCO_LSE					3
#define MCO_SYSCLK				4
#define MCO_HSI					5
#define MCO_HSE					6
#define MCO_PLL					7

/*PLL multiplication factor*/
#define PLL_MUL_MASK			0X003C0000
#define INPUT_CLOCK_2			0
#define INPUT_CLOCK_3			1
#define INPUT_CLOCK_4			2
#define INPUT_CLOCK_5			3
#define INPUT_CLOCK_6			4
#define INPUT_CLOCK_7			5
#define INPUT_CLOCK_8			6
#define INPUT_CLOCK_9			7
#define INPUT_CLOCK_10			8
#define INPUT_CLOCK_11			9
#define INPUT_CLOCK_12			10
#define INPUT_CLOCK_13			11
#define INPUT_CLOCK_14			12
#define INPUT_CLOCK_15			13
#define INPUT_CLOCK_16			14
#define INPUT_CLOCK_16			15

/*PLL entry clock source*/
#define PLLSRC_MASK				0X00018000
#define HSI_PREDIV1_DIV_BY2		0
#define HSI_PREDIV1				1
#define HSE_PREDIV1				2

/*APB high-speed prescaler (APB2)*/
#define PPRE2_MASK				0X00003800
#define NODIV					0
#define HCLK_DIV_BY2			1
#define HCLK_DIV_BY4			2
#define HCLK_DIV_BY8			3
#define HCLK_DIV_BY16			4


/*APB high-speed prescaler (APB1)*/
#define PPRE1_MASK				0X00000700
#define NODIV					0
#define HCLK_DIV_BY2			1
#define HCLK_DIV_BY4			2
#define HCLK_DIV_BY8			3
#define HCLK_DIV_BY16			4

/*HLCK prescaler*/
#define HPRE_MASK				0X000000F0
#define SYSCLK_NODIV			0
#define SYSCLK_DIV_BY2			1
#define SYSCLK_DIV_BY4			2
#define SYSCLK_DIV_BY8			3
#define SYSCLK_DIV_BY16			4
#define SYSCLK_DIV_BY32			5
#define SYSCLK_DIV_BY64			6
#define SYSCLK_DIV_BY128		7
#define SYSCLK_DIV_BY256		8
#define SYSCLK_DIV_BY512		9

/*System clock switch*/
#define SW_MASK					0X00000003
#define HSI						0
#define HSE						1
#define PLL						2
#define NOT_ALLOWED				3

#endif /* RCC_PRIVATE_H_ */
