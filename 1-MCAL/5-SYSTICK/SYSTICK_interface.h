#ifndef SYSTICK_INTERFACE_H_
#define SYSTICK_INTERFACE_H_

void SYSTCK_vInit();

void SYSTCK_vEnableTimer();

void SYSTCK_vDisableTimer();

void SYSTCK_vEnableIntrupt();

void SYSTCK_vDisableIntrupt();

void SYSTCK_vSetReloadValue(u32 RELOADVALUE);

u8 SYSTCK_u8GetTimerFalg();

void SYSTCK_vSetCallBack(void (*copy_PF)(void));



#endif /* SYSTICK_INTERFACE_H_ */
