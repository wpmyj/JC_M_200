/*****************************************************************************
 * Module    : IO
 * File      : io_hold.c
* Author     : Hanny
 * Function  : 进入task_hold和退出task_hold的io相关配置
 ******************************************************************************/
#ifndef CONFIG_C
#pragma location="TASK_HOLD_SEG"
void task_hold_io_sleep(void)
{
    P2DIR |= 0x7f;  //所有用到的引脚都设为输入
    P1DIR |= BIT(6);
}

#pragma location="TASK_HOLD_SEG"
void task_hold_io_reset(void)
{
    //user_io_init();
    //ledseg_init();
}

#endif


