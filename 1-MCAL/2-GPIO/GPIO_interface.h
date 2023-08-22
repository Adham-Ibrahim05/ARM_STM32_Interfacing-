/**********************************************************/
/**********************************************************/
/***************	Author: Adham Ibrahim	***************/
/***************	Layer: 	MCAL			***************/
/***************	SWC: 	GPIO			***************/
/***************	Version:1.00			***************/
/**********************************************************/
/**********************************************************/
#ifndef GPIO_INTERFACE_H_
#define GPIO_INTERFACE_H_

#define PIN_HIGH						1
#define PIN_LOW							0

#define PORT_HIGH						0xFFFF
#define PORT_LOW						0x0000

#define GPIO_OUTPUT						1
#define GPIO_INPUT						0

#define	OUTPUT_ALTERNATIVE_PUSH_PULL	0
#define	OUTPUT_ALTERNATIVE_OPEN_DRAIN	1
#define	OUTPUT_PUSH_PULL_LOW_Speed		2
#define	OUTPUT_PUSH_PULL_MEDIUM_Speed	3
#define	OUTPUT_PUSH_PULL_HIGH_Speed		4
#define	OUTPUT_OPEN_DRAIN_LOW_Speed		5
#define	OUTPUT_OPEN_DRAIN_MEDIUM_Speed	6
#define	OUTPUT_OPEN_DRAIN_HIGH_Speed	7
#define INPUT_FLOAT						8
#define INPUT_PULL_UP					9
#define INPUT_PULL_DOWN					10
#define INPUT_ANALOG					11


#define GPIO_PORTA			0
#define GPIO_PORTB			1
#define GPIO_PORTC			2
#define GPIO_PORTD			3
#define GPIO_PORTF			4

#define GPIO_PIN0			0
#define GPIO_PIN1			1
#define GPIO_PIN2			2
#define GPIO_PIN3			3
#define GPIO_PIN4			4
#define GPIO_PIN5			5
#define GPIO_PIN6			6
#define GPIO_PIN7			7
#define GPIO_PIN8			8
#define GPIO_PIN9			9
#define GPIO_PIN10			10
#define GPIO_PIN11			11
#define GPIO_PIN12			12
#define GPIO_PIN13			13
#define GPIO_PIN14			14
#define GPIO_PIN15			15

void DIO_VoidSetPinValue(u8 PORT,u8 PIN,u8 Value);
void DIO_VoidSetPortValue(u8 PORT,u8 Value);

void DIO_VoidSetPinDirection(u8 PORT,u8 PIN,u8 Direction, u8 Mode);

void DIO_VoidSetPortDirection(u8 PORT,u8 Direction);

u8 DIO_VoidGetPinValue(u8 PORT,u8 PIN);

#endif
