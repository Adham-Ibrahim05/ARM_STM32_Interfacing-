/**********************************************************/
/**********************************************************/
/***************	Author: Adham Ibrahim	***************/
/***************	Layer: 	MCAL			***************/
/***************	SWC: 	GPIO			***************/
/***************	Version:1.00			***************/
/**********************************************************/
/**********************************************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "GPIO_register.h"
#include "GPIO_private.h"
#include "GPIO_config.h"
#include "GPIO_interface.h"


void GPIO_VoidSetPinValue(u8 PORT,u8 PIN,u8 Value)
{
	if(PIN <= GPIO_PIN15)
	{
		if(Value == PIN_LOW)
		{
			switch(PORT)
			{
			case GPIO_PORTA: CLR_BIT(GPIOA_ODR,PIN);break;
			case GPIO_PORTB: CLR_BIT(GPIOB_ODR,PIN);break;
			case GPIO_PORTC: CLR_BIT(GPIOC_ODR,PIN);break;
			case GPIO_PORTD: CLR_BIT(GPIOD_ODR,PIN);break;
			case GPIO_PORTF: CLR_BIT(GPIOF_ODR,PIN);break;
			}
		}
		else if(Value == PIN_HIGH)
		{
			switch(PORT)
			{
			case GPIO_PORTA: SET_BIT(GPIOA_ODR,PIN);break;
			case GPIO_PORTB: SET_BIT(GPIOB_ODR,PIN);break;
			case GPIO_PORTC: SET_BIT(GPIOC_ODR,PIN);break;
			case GPIO_PORTD: SET_BIT(GPIOD_ODR,PIN);break;
			case GPIO_PORTF: SET_BIT(GPIOF_ODR,PIN);break;
			}
		}
	}
}

void GPIO_VoidSetPinDirection(u8 PORT,u8 PIN,u8 Direction)
{
	switch (Direction)
	{
case OUTPUT_PUSH_PULL_LOW_Speed:
		switch(PORT)
		{
		case GPIO_PORTA:
			/*Set Pin Output*/
			SET_BIT(GPIOA_MODER,2*PIN);
			CLR_BIT(GPIOA_MODER,((2*PIN)+1));
			/*Set Output as Push Pull*/
			CLR_BIT(GPIOA_OTYPER,PIN);
			/*Set Speed Low*/
			CLR_BIT(GPIOA_OSPEEDR,2*PIN);
			CLR_BIT(GPIOA_OSPEEDR,((2*PIN)+1));
			break;
		case GPIO_PORTB:
			/*Set Pin Output*/
			SET_BIT(GPIOB_MODER,2*PIN);
			CLR_BIT(GPIOB_MODER,((2*PIN)+1));
			/*Set Output as Push Pull*/
			CLR_BIT(GPIOB_OTYPER,PIN);
			/*Set Speed Low*/
			CLR_BIT(GPIOB_OSPEEDR,2*PIN);
			CLR_BIT(GPIOB_OSPEEDR,((2*PIN)+1));
			break;
		case GPIO_PORTC:
			/*Set Pin Output*/
			SET_BIT(GPIOC_MODER,2*PIN);
			CLR_BIT(GPIOC_MODER,((2*PIN)+1));
			/*Set Output as Push Pull*/
			CLR_BIT(GPIOC_OTYPER,PIN);
			/*Set Speed Low*/
			CLR_BIT(GPIOC_OSPEEDR,2*PIN);
			CLR_BIT(GPIOC_OSPEEDR,((2*PIN)+1));
			break;
		case GPIO_PORTD:
			/*Set Pin Output*/
			SET_BIT(GPIOD_MODER,2*PIN);
			CLR_BIT(GPIOD_MODER,((2*PIN)+1));
			/*Set Output as Push Pull*/
			CLR_BIT(GPIOD_OTYPER,PIN);
			/*Set Speed Low*/
			CLR_BIT(GPIOD_OSPEEDR,2*PIN);
			CLR_BIT(GPIOD_OSPEEDR,((2*PIN)+1));
			break;
		case GPIO_PORTF:
			/*Set Pin Output*/
			SET_BIT(GPIOF_MODER,2*PIN);
			CLR_BIT(GPIOF_MODER,((2*PIN)+1));
			/*Set Output as Push Pull*/
			CLR_BIT(GPIOF_OTYPER,PIN);
			/*Set Speed Low*/
			CLR_BIT(GPIOF_OSPEEDR,2*PIN);
			CLR_BIT(GPIOF_OSPEEDR,((2*PIN)+1));
			break;
		}
break;

case OUTPUT_PUSH_PULL_MEDIUM_Speed:
			switch(PORT)
			{
	  case GPIO_PORTA:
			/*Set Pin Output*/
			SET_BIT(GPIOA_MODER,2*PIN);
			CLR_BIT(GPIOA_MODER,((2*PIN)+1));
			/*Set Output as Push Pull*/
			CLR_BIT(GPIOA_OTYPER,PIN);
			/*Set Speed Medium*/
			SET_BIT(GPIOA_OSPEEDR,2*PIN);
			CLR_BIT(GPIOA_OSPEEDR,((2*PIN)+1));
			break;
	  case GPIO_PORTB:
			/*Set Pin Output*/
			SET_BIT(GPIOB_MODER,2*PIN);
			CLR_BIT(GPIOB_MODER,((2*PIN)+1));
			/*Set Output as Push Pull*/
			CLR_BIT(GPIOB_OTYPER,PIN);
			/*Set Speed Medium*/
			SET_BIT(GPIOB_OSPEEDR,2*PIN);
			CLR_BIT(GPIOB_OSPEEDR,((2*PIN)+1));
			break;
	  case GPIO_PORTC:
			/*Set Pin Output*/
			SET_BIT(GPIOC_MODER,2*PIN);
			CLR_BIT(GPIOC_MODER,((2*PIN)+1));
			/*Set Output as Push Pull*/
			CLR_BIT(GPIOC_OTYPER,PIN);
			/*Set Speed Medium*/
			SET_BIT(GPIOC_OSPEEDR,2*PIN);
			CLR_BIT(GPIOC_OSPEEDR,((2*PIN)+1));
			break;
	  case GPIO_PORTD:
			/*Set Pin Output*/
			SET_BIT(GPIOD_MODER,2*PIN);
			CLR_BIT(GPIOD_MODER,((2*PIN)+1));
			/*Set Output as Push Pull*/
			CLR_BIT(GPIOD_OTYPER,PIN);
			/*Set Speed Medium*/
			SET_BIT(GPIOD_OSPEEDR,2*PIN);
			CLR_BIT(GPIOD_OSPEEDR,((2*PIN)+1));
			break;
	  case GPIO_PORTF:
		  	/*Set Pin Output*/
			SET_BIT(GPIOF_MODER,2*PIN);
			CLR_BIT(GPIOF_MODER,((2*PIN)+1));
			/*Set Output as Push Pull*/
			CLR_BIT(GPIOF_OTYPER,PIN);
			/*Set Speed Medium*/
			SET_BIT(GPIOF_OSPEEDR,2*PIN);
			CLR_BIT(GPIOF_OSPEEDR,((2*PIN)+1));
			break;
		  }
break;

case OUTPUT_PUSH_PULL_HIGH_Speed:
		switch(PORT)
		{
		case GPIO_PORTA:
			/*Set Pin Output*/
			SET_BIT(GPIOA_MODER,2*PIN);
			CLR_BIT(GPIOA_MODER,((2*PIN)+1));
			/*Set Output as Push Pull*/
			CLR_BIT(GPIOA_OTYPER,PIN);
			/*Set Speed High*/
			SET_BIT(GPIOA_OSPEEDR,2*PIN);
			SET_BIT(GPIOA_OSPEEDR,((2*PIN)+1));
			break;
		case GPIO_PORTB:
			/*Set Pin Output*/
			SET_BIT(GPIOB_MODER,2*PIN);
			CLR_BIT(GPIOB_MODER,((2*PIN)+1));
			/*Set Output as Push Pull*/
			CLR_BIT(GPIOB_OTYPER,PIN);
			/*Set Speed High*/
			SET_BIT(GPIOB_OSPEEDR,2*PIN);
			SET_BIT(GPIOB_OSPEEDR,((2*PIN)+1));
			break;
		case GPIO_PORTC:
			/*Set Pin Output*/
			SET_BIT(GPIOC_MODER,2*PIN);
			CLR_BIT(GPIOC_MODER,((2*PIN)+1));
			/*Set Output as Push Pull*/
			CLR_BIT(GPIOC_OTYPER,PIN);
			/*Set Speed High*/
			SET_BIT(GPIOC_OSPEEDR,2*PIN);
			SET_BIT(GPIOC_OSPEEDR,((2*PIN)+1));
			break;
		case GPIO_PORTD:
			/*Set Pin Output*/
			SET_BIT(GPIOD_MODER,2*PIN);
			CLR_BIT(GPIOD_MODER,((2*PIN)+1));
			/*Set Output as Push Pull*/
			CLR_BIT(GPIOD_OTYPER,PIN);
			/*Set Speed High*/
			SET_BIT(GPIOD_OSPEEDR,2*PIN);
			SET_BIT(GPIOD_OSPEEDR,((2*PIN)+1));
			break;
		case GPIO_PORTF:
			/*Set Pin Output*/
			SET_BIT(GPIOF_MODER,2*PIN);
			CLR_BIT(GPIOF_MODER,((2*PIN)+1));
			/*Set Output as Push Pull*/
			CLR_BIT(GPIOA_OTYPER,PIN);
			/*Set Speed High*/
			SET_BIT(GPIOF_OSPEEDR,2*PIN);
			CLR_BIT(GPIOF_OSPEEDR,((2*PIN)+1));
			break;
		}
break;

case OUTPUT_OPEN_DRAIN_LOW_Speed:
	switch(PORT)
	{
	 case GPIO_PORTA:
			/*Set Pin Output*/
			SET_BIT(GPIOA_MODER,2*PIN);
			CLR_BIT(GPIOA_MODER,((2*PIN)+1));
			/*Set Output as open drain*/
			SET_BIT(GPIOA_OTYPER,PIN);
			/*Set Speed low*/
			CLR_BIT(GPIOA_OSPEEDR,2*PIN);
			CLR_BIT(GPIOA_OSPEEDR,((2*PIN)+1));
			break;
	 case GPIO_PORTB:
			/*Set Pin Output*/
			SET_BIT(GPIOB_MODER,2*PIN);
			CLR_BIT(GPIOB_MODER,((2*PIN)+1));
			/*Set Output as open drain*/
			SET_BIT(GPIOB_OTYPER,PIN);
			/*Set Speed low*/
			CLR_BIT(GPIOB_OSPEEDR,2*PIN);
			CLR_BIT(GPIOB_OSPEEDR,((2*PIN)+1));
			break;
	 case GPIO_PORTC:
			/*Set Pin Output*/
			SET_BIT(GPIOC_MODER,2*PIN);
			CLR_BIT(GPIOC_MODER,((2*PIN)+1));
			/*Set Output as open drain*/
			SET_BIT(GPIOC_OTYPER,PIN);
			/*Set Speed low*/
			CLR_BIT(GPIOC_OSPEEDR,2*PIN);
			CLR_BIT(GPIOC_OSPEEDR,((2*PIN)+1));
			break;
	 case GPIO_PORTD:
			/*Set Pin Output*/
			SET_BIT(GPIOD_MODER,2*PIN);
			CLR_BIT(GPIOD_MODER,((2*PIN)+1));
			/*Set Output as open drain*/
			SET_BIT(GPIOD_OTYPER,PIN);
			/*Set Speed low*/
			CLR_BIT(GPIOD_OSPEEDR,2*PIN);
			CLR_BIT(GPIOD_OSPEEDR,((2*PIN)+1));
			break;
	 case GPIO_PORTF:
			/*Set Pin Output*/
			SET_BIT(GPIOF_MODER,2*PIN);
			CLR_BIT(GPIOF_MODER,((2*PIN)+1));
			/*Set Output as open drain*/
			SET_BIT(GPIOF_OTYPER,PIN);
			/*Set Speed low*/
			CLR_BIT(GPIOF_OSPEEDR,2*PIN);
			CLR_BIT(GPIOF_OSPEEDR,((2*PIN)+1));
			break;
	}
break;

case OUTPUT_OPEN_DRAIN_MEDIUM_Speed:
		switch(PORT)
		{
		case GPIO_PORTA:
			/*Set Pin Output*/
			SET_BIT(GPIOA_MODER,2*PIN);
			CLR_BIT(GPIOA_MODER,((2*PIN)+1));
			/*Set Output as open drain*/
			SET_BIT(GPIOA_OTYPER,PIN);
			/*Set Speed Medium*/
			SET_BIT(GPIOA_OSPEEDR,2*PIN);
			CLR_BIT(GPIOA_OSPEEDR,((2*PIN)+1));
			break;
		case GPIO_PORTB:
			/*Set Pin Output*/
			SET_BIT(GPIOB_MODER,2*PIN);
			CLR_BIT(GPIOB_MODER,((2*PIN)+1));
			/*Set Output as open drain*/
			SET_BIT(GPIOB_OTYPER,PIN);
			/*Set Speed Medium*/
			SET_BIT(GPIOB_OSPEEDR,2*PIN);
			CLR_BIT(GPIOB_OSPEEDR,((2*PIN)+1));
			break;
		case GPIO_PORTC:
			/*Set Pin Output*/
			SET_BIT(GPIOC_MODER,2*PIN);
			CLR_BIT(GPIOC_MODER,((2*PIN)+1));
			/*Set Output as open drain*/
			SET_BIT(GPIOC_OTYPER,PIN);
			/*Set Speed Medium*/
			SET_BIT(GPIOC_OSPEEDR,2*PIN);
			CLR_BIT(GPIOC_OSPEEDR,((2*PIN)+1));
			break;
		case GPIO_PORTD:
			/*Set Pin Output*/
			SET_BIT(GPIOD_MODER,2*PIN);
		CLR_BIT(GPIOD_MODER,((2*PIN)+1));
		/*Set Output as open drain*/
		SET_BIT(GPIOD_OTYPER,PIN);
		/*Set Speed Medium*/
		SET_BIT(GPIOD_OSPEEDR,2*PIN);
		CLR_BIT(GPIOD_OSPEEDR,((2*PIN)+1));
		break;
	case GPIO_PORTF:
		/*Set Pin Output*/
		SET_BIT(GPIOF_MODER,2*PIN);
		CLR_BIT(GPIOF_MODER,((2*PIN)+1));
		/*Set Output as open drain*/
		SET_BIT(GPIOF_OTYPER,PIN);
		/*Set Speed Medium*/
		SET_BIT(GPIOF_OSPEEDR,2*PIN);
		CLR_BIT(GPIOF_OSPEEDR,((2*PIN)+1));
		break;
}
break;

case OUTPUT_OPEN_DRAIN_HIGH_Speed:
		switch(PORT)
		{
		case GPIO_PORTA:
			/*Set Pin Output*/
			SET_BIT(GPIOA_MODER,2*PIN);
			CLR_BIT(GPIOA_MODER,((2*PIN)+1));
			/*Set Output as open drain*/
			SET_BIT(GPIOA_OTYPER,PIN);
			/*Set Speed High*/
			SET_BIT(GPIOA_OSPEEDR,2*PIN);
			SET_BIT(GPIOA_OSPEEDR,((2*PIN)+1));
			break;
		case GPIO_PORTB:
			/*Set Pin Output*/
			SET_BIT(GPIOB_MODER,2*PIN);
			CLR_BIT(GPIOB_MODER,((2*PIN)+1));
			/*Set Output as open drain*/
			SET_BIT(GPIOB_OTYPER,PIN);
			/*Set Speed High*/
			SET_BIT(GPIOB_OSPEEDR,2*PIN);
			SET_BIT(GPIOB_OSPEEDR,((2*PIN)+1));
			break;
		case GPIO_PORTC:
			/*Set Pin Output*/
			SET_BIT(GPIOC_MODER,2*PIN);
			CLR_BIT(GPIOC_MODER,((2*PIN)+1));
			/*Set Output as open drain*/
			SET_BIT(GPIOC_OTYPER,PIN);
			/*Set Speed High*/
			SET_BIT(GPIOC_OSPEEDR,2*PIN);
			SET_BIT(GPIOC_OSPEEDR,((2*PIN)+1));
		break;
	case GPIO_PORTD:
		/*Set Pin Output*/
		SET_BIT(GPIOD_MODER,2*PIN);
		CLR_BIT(GPIOD_MODER,((2*PIN)+1));
		/*Set Output as open drain*/
		SET_BIT(GPIOD_OTYPER,PIN);
		/*Set Speed High*/
		SET_BIT(GPIOD_OSPEEDR,2*PIN);
		SET_BIT(GPIOD_OSPEEDR,((2*PIN)+1));
		break;
	case GPIO_PORTF:
		/*Set Pin Output*/
		SET_BIT(GPIOF_MODER,2*PIN);
		CLR_BIT(GPIOF_MODER,((2*PIN)+1));
		/*Set Output as open drain*/
		SET_BIT(GPIOF_OTYPER,PIN);
		/*Set Speed High*/
		SET_BIT(GPIOF_OSPEEDR,2*PIN);
		SET_BIT(GPIOF_OSPEEDR,((2*PIN)+1));
		break;
}
break;

case  OUTPUT_ALTERNATIVE_PUSH_PULL:
	switch(PORT)
	{
	case GPIO_PORTA:
		/*Set Pin Output Alternative*/
		CLR_BIT(GPIOA_MODER,2*PIN);
		SET_BIT(GPIOA_MODER,((2*PIN)+1));
		/*Set Output as Push Pull*/
		CLR_BIT(GPIOA_OTYPER,PIN);
		break;
	case GPIO_PORTB:
		/*Set Pin Output Alternative*/
		CLR_BIT(GPIOB_MODER,2*PIN);
		SET_BIT(GPIOB_MODER,((2*PIN)+1));
		/*Set Output as Push Pull*/
		CLR_BIT(GPIOB_OTYPER,PIN);
		break;
	case GPIO_PORTC:
		/*Set Pin Output Alternative*/
		CLR_BIT(GPIOC_MODER,2*PIN);
		SET_BIT(GPIOC_MODER,((2*PIN)+1));
		/*Set Output as Push Pull*/
		CLR_BIT(GPIOC_OTYPER,PIN);
		break;
	case GPIO_PORTD:
		/*Set Pin Output Alternative*/
		CLR_BIT(GPIOD_MODER,2*PIN);
		SET_BIT(GPIOD_MODER,((2*PIN)+1));
		/*Set Output as Push Pull*/
		CLR_BIT(GPIOD_OTYPER,PIN);
		break;
	case GPIO_PORTF:
		/*Set Pin Output Alternative*/
		CLR_BIT(GPIOF_MODER,2*PIN);
		SET_BIT(GPIOF_MODER,((2*PIN)+1));
		/*Set Output as Push Pull*/
		CLR_BIT(GPIOF_OTYPER,PIN);
		break;
	}
	break;

case OUTPUT_ALTERNATIVE_OPEN_DRAIN:
		switch(PORT)
		{
	case GPIO_PORTA:
		/*Set Pin Output Alternative*/
		CLR_BIT(GPIOA_MODER,2*PIN);
		SET_BIT(GPIOA_MODER,((2*PIN)+1));
		/*Set Output as open drain*/
		SET_BIT(GPIOA_OTYPER,PIN);
		break;
	case GPIO_PORTB:
		/*Set Pin Output Alternative*/
		CLR_BIT(GPIOB_MODER,2*PIN);
		SET_BIT(GPIOB_MODER,((2*PIN)+1));
		/*Set Output as open drain*/
		SET_BIT(GPIOB_OTYPER,PIN);
		break;
	case GPIO_PORTC:
		/*Set Pin Output Alternative*/
		CLR_BIT(GPIOC_MODER,2*PIN);
		SET_BIT(GPIOC_MODER,((2*PIN)+1));
		/*Set Output as open drain*/
		SET_BIT(GPIOC_OTYPER,PIN);
		break;
	case GPIO_PORTD:
		/*Set Pin Output Alternative*/
		CLR_BIT(GPIOD_MODER,2*PIN);
		SET_BIT(GPIOD_MODER,((2*PIN)+1));
		/*Set Output as open drain*/
		SET_BIT(GPIOD_OTYPER,PIN);
		break;
	case GPIO_PORTF:
		/*Set Pin Output Alternative*/
		CLR_BIT(GPIOF_MODER,2*PIN);
		SET_BIT(GPIOF_MODER,((2*PIN)+1));
		/*Set Output as open drain*/
		SET_BIT(GPIOF_OTYPER,PIN);
		break;
		}
break;

case INPUT_FLOAT:
		switch(PORT)
		{
	case GPIO_PORTA:
		/*Set Pin Input*/
		CLR_BIT(GPIOA_MODER,2*PIN);
		CLR_BIT(GPIOA_MODER,((2*PIN)+1));
		/*Set Pin as Float*/
		CLR_BIT(GPIOA_PUPDR,2*PIN);
		CLR_BIT(GPIOA_PUPDR,((2*PIN)+1));
		break;
	case GPIO_PORTB:
		/*Set Pin Input*/
		CLR_BIT(GPIOB_MODER,2*PIN);
		CLR_BIT(GPIOB_MODER,((2*PIN)+1));
		/*Set Pin as Float*/
		CLR_BIT(GPIOB_PUPDR,2*PIN);
		CLR_BIT(GPIOB_PUPDR,((2*PIN)+1));
		break;
	case GPIO_PORTC:
		/*Set Pin Input*/
		CLR_BIT(GPIOC_MODER,2*PIN);
		CLR_BIT(GPIOC_MODER,((2*PIN)+1));
		/*Set Pin as Float*/
		CLR_BIT(GPIOC_PUPDR,2*PIN);
		CLR_BIT(GPIOC_PUPDR,((2*PIN)+1));
		break;
	case GPIO_PORTD:
		/*Set Pin Input*/
		CLR_BIT(GPIOD_MODER,2*PIN);
		CLR_BIT(GPIOD_MODER,((2*PIN)+1));
		/*Set Pin as Float*/
		CLR_BIT(GPIOD_PUPDR,2*PIN);
		CLR_BIT(GPIOD_PUPDR,((2*PIN)+1));
		break;
	case GPIO_PORTF:
		/*Set Pin Input*/
		CLR_BIT(GPIOF_MODER,2*PIN);
		CLR_BIT(GPIOF_MODER,((2*PIN)+1));
		/*Set Pin as Float*/
		CLR_BIT(GPIOF_PUPDR,2*PIN);
		CLR_BIT(GPIOF_PUPDR,((2*PIN)+1));
		break;
	}
break;

case INPUT_PULL_UP:
		switch(PORT)
		{
   case GPIO_PORTA:
		/*Set Pin Input*/
		CLR_BIT(GPIOA_MODER,2*PIN);
		CLR_BIT(GPIOA_MODER,((2*PIN)+1));
		/*Set Pin as Pull Up*/
		SET_BIT(GPIOA_PUPDR,2*PIN);
		CLR_BIT(GPIOA_PUPDR,((2*PIN)+1));
		break;
   case GPIO_PORTB:
		/*Set Pin Input*/
		CLR_BIT(GPIOB_MODER,2*PIN);
		CLR_BIT(GPIOB_MODER,((2*PIN)+1));
		/*Set Pin as Pull Up*/
		SET_BIT(GPIOB_PUPDR,2*PIN);
		CLR_BIT(GPIOB_PUPDR,((2*PIN)+1));
		break;
    case GPIO_PORTC:
		/*Set Pin Input*/
		CLR_BIT(GPIOC_MODER,2*PIN);
		CLR_BIT(GPIOC_MODER,((2*PIN)+1));
		/*Set Pin as Pull Up*/
		SET_BIT(GPIOC_PUPDR,2*PIN);
		CLR_BIT(GPIOC_PUPDR,((2*PIN)+1));
		break;
	case GPIO_PORTD:
		/*Set Pin Input*/
		CLR_BIT(GPIOD_MODER,2*PIN);
		CLR_BIT(GPIOD_MODER,((2*PIN)+1));
		/*Set Pin as Pull Up*/
		SET_BIT(GPIOD_PUPDR,2*PIN);
		CLR_BIT(GPIOD_PUPDR,((2*PIN)+1));
		break;
	case GPIO_PORTF:
		/*Set Pin Input*/
		CLR_BIT(GPIOF_MODER,2*PIN);
		CLR_BIT(GPIOF_MODER,((2*PIN)+1));
		/*Set Pin as Pull Up*/
		SET_BIT(GPIOF_PUPDR,2*PIN);
		CLR_BIT(GPIOF_PUPDR,((2*PIN)+1));
		break;
	}
break;

case INPUT_PULL_DOWN:
		switch(PORT)
		{
	case GPIO_PORTA:
		/*Set Pin Input*/
		CLR_BIT(GPIOA_MODER,2*PIN);
		CLR_BIT(GPIOA_MODER,((2*PIN)+1));
		/*Set Pin as Pull Down*/
		CLR_BIT(GPIOA_PUPDR,2*PIN);
		SET_BIT(GPIOA_PUPDR,((2*PIN)+1));
	break;
	case GPIO_PORTB:
		/*Set Pin Input*/
		CLR_BIT(GPIOB_MODER,2*PIN);
		CLR_BIT(GPIOB_MODER,((2*PIN)+1));
		/*Set Pin as Pull Down*/
		CLR_BIT(GPIOB_PUPDR,2*PIN);
	SET_BIT(GPIOB_PUPDR,((2*PIN)+1));
	break;
	case GPIO_PORTC:
		/*Set Pin Input*/
		CLR_BIT(GPIOC_MODER,2*PIN);
		CLR_BIT(GPIOC_MODER,((2*PIN)+1));
		/*Set Pin as Pull Down*/
		CLR_BIT(GPIOC_PUPDR,2*PIN);
		SET_BIT(GPIOC_PUPDR,((2*PIN)+1));
	break;
	case GPIO_PORTD:
		/*Set Pin Input*/
		CLR_BIT(GPIOD_MODER,2*PIN);
		CLR_BIT(GPIOD_MODER,((2*PIN)+1));
		/*Set Pin as Pull Down*/
		CLR_BIT(GPIOD_PUPDR,2*PIN);
		SET_BIT(GPIOD_PUPDR,((2*PIN)+1));
		break;
	case GPIO_PORTF:
		/*Set Pin Input*/
		CLR_BIT(GPIOF_MODER,2*PIN);
		CLR_BIT(GPIOF_MODER,((2*PIN)+1));
		/*Set Pin as Pull Down*/
		CLR_BIT(GPIOF_PUPDR,2*PIN);
		SET_BIT(GPIOF_PUPDR,((2*PIN)+1));
		break;
	}
break;

case INPUT_ANALOG:
		switch(PORT)
		{
		case GPIO_PORTA:
			/*Set Pin Input Analog*/
			SET_BIT(GPIOA_MODER,2*PIN);
			SET_BIT(GPIOA_MODER,((2*PIN)+1));
			break;
		case GPIO_PORTB:
			/*Set Pin Input Analog*/
			SET_BIT(GPIOB_MODER,2*PIN);
			SET_BIT(GPIOB_MODER,((2*PIN)+1));
			break;
		case GPIO_PORTC:
			/*Set Pin Input Analog*/
			SET_BIT(GPIOC_MODER,2*PIN);
			SET_BIT(GPIOC_MODER,((2*PIN)+1));
			break;
		case GPIO_PORTD:
			/*Set Pin Input Analog*/
			SET_BIT(GPIOD_MODER,2*PIN);
			SET_BIT(GPIOD_MODER,((2*PIN)+1));
			break;
		case GPIO_PORTF:
			/*Set Pin Input Analog*/
			SET_BIT(GPIOF_MODER,2*PIN);
			SET_BIT(GPIOF_MODER,((2*PIN)+1));
			break;
		}
		break;
	}
}

u8 GPIO_VoidGetPinValue(u8 PORT,u8 PIN)
{
	u8 Local_State;
	switch(PORT)
	{
	case GPIO_PORTA: Local_State = GET_BIT(GPIOA_IDR,PIN);break;
	case GPIO_PORTB: Local_State = GET_BIT(GPIOB_IDR,PIN);break;
	case GPIO_PORTC: Local_State = GET_BIT(GPIOC_IDR,PIN);break;
	case GPIO_PORTD: Local_State = GET_BIT(GPIOD_IDR,PIN);break;
	case GPIO_PORTF: Local_State = GET_BIT(GPIOF_IDR,PIN);break;
	}
	return Local_State;
}

void GPIO_VoidSetPortValue(u8 PORT,u8 Value)
{
	switch(PORT)
	{
		case GPIO_PORTA: GPIOA_ODR= Value;break;
		case GPIO_PORTB: GPIOB_ODR= Value;break;
		case GPIO_PORTC: GPIOC_ODR= Value;break;
		case GPIO_PORTD: GPIOD_ODR= Value;break;
		case GPIO_PORTF: GPIOF_ODR= Value;break;
	}
}

void GPIO_VoidSetPortDirection(u8 PORT,u8 Direction)
{

#if Direction == OUTPUT_PUSH_PULL_LOW_Speed
switch(PORT)
{
		case GPIO_PORTA:
			/*Set Port Output*/
			GPIOA_MODER = PORT_OUTPUT;
			/*Set Output as Push Pull*/
			GPIOA_OTYPER = PORT_PUSH_PULL;
			/*Set Speed Low*/
			GPIOA_OSPEEDR = PORT_SPEED_LOW;
			break;

		case GPIO_PORTB:
			/*Set Port Output*/
			GPIOB_MODER = PORT_OUTPUT;
			/*Set Output as Push Pull*/
			GPIOB_OTYPER = PORT_PUSH_PULL;
			/*Set Speed Low*/
			GPIOB_OSPEEDR = PORT_SPEED_LOW;
			break;

		case GPIO_PORTC:
			/*Set Port Output*/
			GPIOC_MODER = PORT_OUTPUT;
			/*Set Output as Push Pull*/
			GPIOC_OTYPER = PORT_PUSH_PULL;
			/*Set Speed Low*/
			GPIOC_OSPEEDR = PORT_SPEED_LOW;
			break;
}
#elif Direction == OUTPUT_PUSH_PULL_MEDIUM_Speed
switch(PORT)
{
	   case GPIO_PORTA:
			/*Set port Output*/
			GPIOA_MODER = PORT_OUTPUT;
			/*Set Output as Push Pull*/
			GPIOA_OTYPER = PORT_PUSH_PULL;
			/*Set Speed Medium*/
			GPIOA_OSPEEDR = PORT_SPEED_MEDIUM;
			break;

	   case GPIO_PORTB:
			/*Set port Output*/
			GPIOB_MODER = PORT_OUTPUT;
			/*Set Output as Push Pull*/
			GPIOB_OTYPER = PORT_PUSH_PULL;
			/*Set Speed Medium*/
			GPIOB_OSPEEDR = PORT_SPEED_MEDIUM;
			break;

	   case GPIO_PORTC:
			/*Set port Output*/
			GPIOC_MODER = PORT_OUTPUT;
			/*Set Output as Push Pull*/
			GPIOC_OTYPER = PORT_PUSH_PULL;
			/*Set Speed Medium*/
			GPIOC_OSPEEDR = PORT_SPEED_MEDIUM;
			break;
}
#elif Direction == OUTPUT_PUSH_PULL_HIGH_Speed
switch(PORT)
{
	  case GPIO_PORTA:
	   	    /*Set port Output*/
		  	GPIOA_MODER = PORT_OUTPUT;
	   	    /*Set Output as Push Pull*/
		  	GPIOA_OTYPER = PORT_PUSH_PULL;
	   	    /*Set Speed High*/
		  	GPIOA_OSPEEDR = PORT_SPEED_HIGH;
	   	    break;

	  case GPIO_PORTB:
	   	    /*Set port Output*/
		  	GPIOB_MODER = PORT_OUTPUT;
	   	    /*Set Output as Push Pull*/
		  	GPIOB_OTYPER = PORT_PUSH_PULL;
	   	    /*Set Speed High*/
		  	GPIOB_OSPEEDR = PORT_SPEED_HIGH;
	   	    break;

	  case GPIO_PORTC:
	   	    /*Set port Output*/
		  	GPIOC_MODER = PORT_OUTPUT;
	   	    /*Set Output as Push Pull*/
		  	GPIOC_OTYPER = PORT_PUSH_PULL;
	   	    /*Set Speed High*/
		  	GPIOC_OSPEEDR = PORT_SPEED_HIGH;
	   	    break;
}
#elif Direction == OUTPUT_OPEN_DRAIN_LOW_Speed
switch(PORT)
{
	   case GPIO_PORTA:
	 	/*Set port Output*/
		GPIOA_MODER = PORT_OUTPUT;
	 	/*Set Output as open drain*/
	 	GPIOA_OTYPER = PORT_OPEN_DRAIN;
	 	/*Set Speed low*/
	 	GPIOA_OSPEEDR = PORT_SPEED_LOW;
		break;

	   case GPIO_PORTB:
	 	/*Set port Output*/
		GPIOB_MODER = PORT_OUTPUT;
	 	/*Set Output as open drain*/
	 	GPIOB_OTYPER = PORT_OPEN_DRAIN;
	 	/*Set Speed low*/
	 	GPIOB_OSPEEDR = PORT_SPEED_LOW;
		break;

	   case GPIO_PORTC:
	 	/*Set port Output*/
		GPIOC_MODER = PORT_OUTPUT;
	 	/*Set Output as open drain*/
	 	GPIOC_OTYPER = PORT_OPEN_DRAIN;
	 	/*Set Speed low*/
	 	GPIOC_OSPEEDR = PORT_SPEED_LOW;
		break;
}
#elif Direction == OUTPUT_OPEN_DRAIN_MEDIUM_Speed
switch(PORT)
{
	   case GPIO_PORTA:
	 	/*Set port Output*/
		GPIOA_MODER = PORT_OUTPUT;
		/*Set Output as open drain*/
	 	GPIOA_OTYPER = PORT_OPEN_DRAIN;
	 	/*Set Speed medium*/
	 	GPIOA_OSPEEDR = PORT_SPEED_MEDIUM;
	 	break;

	 	 case GPIO_PORTB:
	 	/*Set port Output*/
		GPIOB_MODER = PORT_OUTPUT;
	 	/*Set Output as open drain*/
		GPIOB_OTYPER = PORT_OPEN_DRAIN;
	 	/*Set Speed medium*/
	 	GPIOB_OSPEEDR = PORT_SPEED_MEDIUM;
		break;

	   case GPIO_PORTC:
	   /*Set port Output*/
	   GPIOC_MODER = PORT_OUTPUT;
	   /*Set Output as open drain*/
       GPIOC_OTYPER = PORT_OPEN_DRAIN;
	   /*Set Speed medium*/
	   GPIOC_OSPEEDR = PORT_SPEED_MEDIUM;
	   break;
}
#elif Direction == OUTPUT_OPEN_DRAIN_HIGH_Speed
switch(PORT)
{
	   case GPIO_PORTA:
	 	/*Set port Output*/
		GPIOA_MODER = PORT_OUTPUT;
		/*Set Output as open drain*/
	 	GPIOA_OTYPER = PORT_OPEN_DRAIN;
	 	/*Set Speed HIGH*/
	 	GPIOA_OSPEEDR = PORT_SPEED_HIGH;
	 	break;

	    case GPIO_PORTB:
		/*Set port Output*/
		GPIOB_MODER = PORT_OUTPUT;
	 	/*Set Output as open drain*/
		GPIOB_OTYPER = PORT_OPEN_DRAIN;
	 	/*Set Speed high*/
	 	GPIOB_OSPEEDR = PORT_SPEED_HIGH;
		break;

	   case GPIO_PORTC:
	   /*Set port Output*/
	   GPIOC_MODER = PORT_OUTPUT;
	   /*Set Output as open drain*/
	   GPIOC_OTYPER = PORT_OPEN_DRAIN;
	   /*Set Speed high*/
	   GPIOC_OSPEEDR = PORT_SPEED_HIGH;
	   break;
}
#elif Direction == OUTPUT_ALTERNATIVE_PUSH_PULL
switch(PORT)
{
	 	case GPIO_PORTA:
	 		/*Set port Output Alternative*/
	 		GPIOA_MODER = PORT_ALTERNATIVE;
	 		/*Set Output as Push Pull*/
	 		GPIOA_OTYPER = PORT_PUSH_PULL;
	 		break;

	 	case GPIO_PORTB:
	 		/*Set port Output Alternative*/
	 		GPIOB_MODER = PORT_ALTERNATIVE;
	 		/*Set Output as Push Pull*/
	 		GPIOB_OTYPER = PORT_PUSH_PULL;
	 		break;

	 	case GPIO_PORTC:
	 		/*Set port Output Alternative*/
	 		GPIOC_MODER = PORT_ALTERNATIVE;
	 		/*Set Output as Push Pull*/
	 		GPIOC_OTYPER = PORT_PUSH_PULL;
	 		break;
}
#elif Direction == OUTPUT_ALTERNATIVE_OPEN_DRAIN
switch(PORT)
{
		case GPIO_PORTA:
			/*Set port Output Alternative*/
			GPIOA_MODER = PORT_ALTERNATIVE;
			/*Set Output as Push Pull*/
			GPIOA_OTYPER = PORT_OPEN_DRAIN;
			break;

		case GPIO_PORTB:
			/*Set port Output Alternative*/
			GPIOB_MODER = PORT_ALTERNATIVE;
			/*Set Output as Push Pull*/
			GPIOB_OTYPER = PORT_OPEN_DRAIN;
			break;

		case GPIO_PORTC:
			/*Set port Output Alternative*/
			GPIOC_MODER = PORT_ALTERNATIVE;
			/*Set Output as Push Pull*/
			GPIOC_OTYPER = PORT_OPEN_DRAIN;
			break;
}
#elif Direction == INPUT_FLOAT
switch(PORT)
{
		case GPIO_PORTA:
		/*Set port Input*/
		GPIOA_MODER = PORT_INPUT;
		/*Set port as Float*/
		GPIOA_PUPDR = PORT_FLOAT;
		break;

		case GPIO_PORTB:
		/*Set port Input*/
		GPIOB_MODER = PORT_INPUT;
		/*Set port as Float*/
		GPIOB_PUPDR = PORT_FLOAT;
		break;

		case GPIO_PORTC:
		/*Set port Input*/
		GPIOC_MODER = PORT_INPUT;
		/*Set port as Float*/
		GPIOC_PUPDR = PORT_FLOAT;
		break;
}
#elif Direction == INPUT_PULL_UP
switch(PORT)
{
	   case GPIO_PORTA:
		/*Set port Input*/
		GPIOA_MODER = PORT_INPUT;
		/*Set Pin as Pull Up*/
		GPIOA_PUPDR = PORT_PULL_UP;
		break;

	   case GPIO_PORTB:
		/*Set port Input*/
		GPIOB_MODER = PORT_INPUT;
		/*Set Pin as Pull Up*/
		GPIOB_PUPDR = PORT_PULL_UP;
		break;

	   case GPIO_PORTC:
		/*Set port Input*/
		GPIOC_MODER = PORT_INPUT;
		/*Set Pin as Pull Up*/
		GPIOC_PUPDR = PORT_PULL_UP;
		break;
}
#elif Direction == INPUT_PULL_DOWN
switch(PORT)
{
	 case GPIO_PORTA:
	/*Set port Input*/
	GPIOA_MODER = PORT_INPUT;
	/*Set Pin as Pull Up*/
	GPIOA_PUPDR = PORT_PULL_DOWN;
	break;

	 case GPIO_PORTB:
	/*Set port Input*/
	GPIOB_MODER = PORT_INPUT;
	/*Set Pin as Pull Up*/
	GPIOB_PUPDR = PORT_PULL_DOWN;
	break;

    case GPIO_PORTC:
	/*Set port Input*/
	GPIOC_MODER = PORT_INPUT;
	/*Set Pin as Pull Up*/
	GPIOC_PUPDR = PORT_PULL_DOWN;
	break;
}

#endif
}
