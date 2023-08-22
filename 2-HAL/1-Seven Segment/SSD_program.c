#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "Delay.h"
#include "SSD_config.h"
#include "SSD_interface.h"
#include "DIO_interface.h"
#include "DIO_register.h"
#include "DIO_config.h"

void SSD_Init()
{
	GPIO_VoidSetPinDirection(GPIO_PORTA,GPIO_PIN3,OUTPUT_PUSH_PULL_LOW_Speed);
	GPIO_VoidSetPinDirection(GPIO_PORTA,GPIO_PIN2,OUTPUT_PUSH_PULL_LOW_Speed);
	GPIO_VoidSetPinDirection(GPIO_PORTB,GPIO_PIN5,OUTPUT_PUSH_PULL_LOW_Speed);
	GPIO_VoidSetPinDirection(GPIO_PORTB,GPIO_PIN6,OUTPUT_PUSH_PULL_LOW_Speed);
	
	GPIO_VoidSetPinDirection(GPIO_PORTB,GPIO_PIN0,OUTPUT_PUSH_PULL_LOW_Speed);
	GPIO_VoidSetPinDirection(GPIO_PORTB,GPIO_PIN1,OUTPUT_PUSH_PULL_LOW_Speed);
	GPIO_VoidSetPinDirection(GPIO_PORTB,GPIO_PIN2,OUTPUT_PUSH_PULL_LOW_Speed);
	GPIO_VoidSetPinDirection(GPIO_PORTB,GPIO_PIN4,OUTPUT_PUSH_PULL_LOW_Speed);
}

void SSD_voidDisplayOff(u8 SSD_ID)
{
	switch (SSD_ID)
	{
		case SSD1:GPIO_VoidSetPinValue(GPIO_PORTA,GPIO_PIN3,PIN_HIGH);break;
		case SSD2:GPIO_voidSetPinValue(GPIO_PORTA,GPIO_PIN2,PIN_HIGH);break;
		case SSD3:GPIO_voidSetPinValue(GPIO_PORTB,GPIO_PIN5,PIN_HIGH);break;
		case SSD4:GPIO_voidSetPinValue(GPIO_PORTB,GPIO_PIN6,PIN_HIGH);break;
	}
}

void SSD_voidDisplayNumbers(u16 Number)
{
	u16 Temp= Number%10;
	GPIO_VoidSetPinDirection(GPIO_PORTB,GPIO_PIN0,GET_BIT(Temp,0));
	GPIO_VoidSetPinDirection(GPIO_PORTB,GPIO_PIN1,GET_BIT(Temp,1));
	GPIO_VoidSetPinDirection(GPIO_PORTB,GPIO_PIN2,GET_BIT(Temp,2));
	GPIO_VoidSetPinDirection(GPIO_PORTB,GPIO_PIN4,GET_BIT(Temp,3));
	
	GPIO_VoidSetPinValue(GPIO_PORTA,GPIO_PIN3,PIN_LOW);
	GPIO_voidSetPinValue(GPIO_PORTA,GPIO_PIN2,PIN_HIGH);
	GPIO_voidSetPinValue(GPIO_PORTB,GPIO_PIN5,PIN_HIGH);
	GPIO_voidSetPinValue(GPIO_PORTB,GPIO_PIN6,PIN_HIGH);
	_delay_ms(5);
	
	Number/=10;
	Temp= Number%10;
	GPIO_VoidSetPinDirection(GPIO_PORTB,GPIO_PIN0,GET_BIT(Temp,0));
	GPIO_VoidSetPinDirection(GPIO_PORTB,GPIO_PIN1,GET_BIT(Temp,1));
	GPIO_VoidSetPinDirection(GPIO_PORTB,GPIO_PIN2,GET_BIT(Temp,2));
	GPIO_VoidSetPinDirection(GPIO_PORTB,GPIO_PIN4,GET_BIT(Temp,3));
	
	GPIO_VoidSetPinValue(GPIO_PORTA,GPIO_PIN3,PIN_HIGH);
	GPIO_voidSetPinValue(GPIO_PORTA,GPIO_PIN2,PIN_LOW);
	GPIO_voidSetPinValue(GPIO_PORTB,GPIO_PIN5,PIN_HIGH);
	GPIO_voidSetPinValue(GPIO_PORTB,GPIO_PIN6,PIN_HIGH);
	_delay_ms(5);
	
	Number/=10;
	Temp= Number%10;
	GPIO_VoidSetPinDirection(GPIO_PORTB,GPIO_PIN0,GET_BIT(Temp,0));
	GPIO_VoidSetPinDirection(GPIO_PORTB,GPIO_PIN1,GET_BIT(Temp,1));
	GPIO_VoidSetPinDirection(GPIO_PORTB,GPIO_PIN2,GET_BIT(Temp,2));
	GPIO_VoidSetPinDirection(GPIO_PORTB,GPIO_PIN4,GET_BIT(Temp,3));
	
	GPIO_VoidSetPinValue(GPIO_PORTA,GPIO_PIN3,PIN_HIGH);
	GPIO_voidSetPinValue(GPIO_PORTA,GPIO_PIN2,PIN_HIGH);
	GPIO_voidSetPinValue(GPIO_PORTB,GPIO_PIN5,PIN_LOW);
	GPIO_voidSetPinValue(GPIO_PORTB,GPIO_PIN6,PIN_HIGH);
	_delay_ms(5);
	
	Number/=10;
	Temp= Number%10;
	GPIO_VoidSetPinDirection(GPIO_PORTB,GPIO_PIN0,GET_BIT(Number,0));
	GPIO_VoidSetPinDirection(GPIO_PORTB,GPIO_PIN1,GET_BIT(Number,1));
	GPIO_VoidSetPinDirection(GPIO_PORTB,GPIO_PIN2,GET_BIT(Number,2));
	GPIO_VoidSetPinDirection(GPIO_PORTB,GPIO_PIN4,GET_BIT(Number,3));
	
	GPIO_VoidSetPinValue(GPIO_PORTA,GPIO_PIN3,PIN_HIGH);
	GPIO_voidSetPinValue(GPIO_PORTA,GPIO_PIN2,PIN_HIGH);
	GPIO_voidSetPinValue(GPIO_PORTB,GPIO_PIN5,PIN_HIGH);
	GPIO_voidSetPinValue(GPIO_PORTB,GPIO_PIN6,PIN_LOW);
	_delay_ms(5);
}