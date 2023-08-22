#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "SYSTICK_register.h"
#include "SYSTICK_config.h"
#include "SYSTICK_private.h"
#include "SYSTICK_interface.h"

void (*SYSTCK_PF)(void)= NULL;
u8 Reload;

void SYSTCK_vInit()
{
	#if CLKSOURCE == CLKSOURCE_AHB_8
	CLR_BIT(STK_CTRL,STK_CTRL_CLKSOURCE);

	#elif CLKSOURCE == CLKSOURCE_AHB_8
	SET_BIT(STK_CTRL,STK_CTRL_CLKSOURCE);
#endif
}

void SYSTCK_vEnableTimer()
{
	SET_BIT(STK_CTRL,STK_CTRL_ENABLE);
}

void SYSTCK_vDisableTimer()
{
	CLR_BIT(STK_CTRL,STK_CTRL_ENABLE);
}

void SYSTCK_vEnableIntrupt()
{
	SET_BIT(STK_CTRL,STK_CTRL_TICKINT);
}

void SYSTCK_vDisableIntrupt()
{
	CLR_BIT(STK_CTRL,STK_CTRL_TICKINT);
}

void SYSTCK_vSetReloadValue(u32 RELOADVALUE)
{
	STK_LOAD = RELOADVALUE;
}

u8 SYSTCK_u8GetTimerFalg()
{
	return (GET_BIT(STK_CTRL, STK_CTRL_COUNTFLAG));
}

void SYSTCK_vSetCallBack(void (*copy_PF)(void))
{
	SYSTCK_PF = copy_PF;
}

void  SysTick_Handler()
{
	if(SYSTCK_PF != NULL)
	{
		SYSTCK_PF();
		SYSTCK_u8GetTimerFalg();
	}

}

