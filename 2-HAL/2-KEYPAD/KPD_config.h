/**********************************************************/
/**********************************************************/
/***************	Author: Adham Ibrahim	***************/
/***************	Layer: 	HAL				***************/
/***************	SWC: 	KPD				***************/
/***************	Version:1.00			***************/
/**********************************************************/
/**********************************************************/

#ifndef KPD_CONFIG_H_
#define KPD_CONFIG_H_

#define KEY_NOT_PRESSED	0XFF

#define	ROW_PORT		GPIO_PORTC
#define	COLOUMN_PORT	GPIO_PORTD

#define	ROW1			GPIO_PIN5
#define	ROW2			GPIO_PIN4
#define	ROW3			GPIO_PIN3
#define	ROW4			GPIO_PIN2

#define	COLOUMN1		GPIO_PIN7
#define	COLOUMN2		GPIO_PIN6
#define	COLOUMN3		GPIO_PIN5
#define	COLOUMN4		GPIO_PIN3

#define KPD_ARR_VAL		{{'7','8','9','/'},{'4','5','6','*'},{'1','2','3','-'},{'13','0','=','+'}}

#endif