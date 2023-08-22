#ifndef SYSTICK_REGISTER_H_
#define SYSTICK_REGISTER_H_

#define STK_CTRL			*((volatile u32*)0xE000E010)
#define STK_CTRL_ENABLE 	0
#define STK_CTRL_TICKINT 	1
#define STK_CTRL_CLKSOURCE 	2
#define STK_CTRL_COUNTFLAG 	16

#define STK_LOAD	*((volatile u32*)0xE000E014)
#define STK_VAL		*((volatile u32*)0xE000E018)
#define STK_CALIB	*((volatile u32*)0xE000E01C)

#endif /* SYSTICK_REGISTER_H_ */
