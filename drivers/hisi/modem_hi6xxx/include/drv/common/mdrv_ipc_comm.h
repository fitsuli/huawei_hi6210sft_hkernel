#ifndef __MDRV_IPC_COMMON_H__
#define __MDRV_IPC_COMMON_H__
#ifdef __cplusplus
extern "C"
{
#endif

#include "mdrv_public.h"
#include "mdrv_ipc_enum.h"

/*****************************************************************************
 *  函 数 名  : mdrv_ipc_sem_create
 *  功能描述  :  创建IPC信号量。
 *  输入参数  :
 *
 *  输出参数  : 无
 *  返 回 值  :  0	       操作成功。
 *                           其他	操作失败。
 *
 ******************************************************************************/
int mdrv_ipc_sem_create (unsigned int u32SignalNum);

/*****************************************************************************
 *  函 数 名  : mdrv_ipc_sem_delete
 *  功能描述  :  删除创建的IPC信号量。
 *  输入参数  :
 *
 *  输出参数  : 无
 *  返 回 值  :  0	       操作成功。
 *                           其他	操作失败。
 *
 ******************************************************************************/
int mdrv_ipc_sem_delete(unsigned int u32SignalNum);


/*****************************************************************************
 *  函 数 名  : mdrv_ipc_int_enable
 *  功能描述  :  使能某号中断。
 *  输入参数  :
 *
 *  输出参数  : 无
 *  返 回 值  :  0	       操作成功。
 *                           其他	操作失败。
 *
 ******************************************************************************/
int mdrv_ipc_int_enable (IPC_INT_LEV_E ulLvl);

/*****************************************************************************
 *  函 数 名  : mdrv_ipc_int_enable
 *  功能描述  :  去使能某号中断。
 *  输入参数  :
 *
 *  输出参数  : 无
 *  返 回 值  :  0	       操作成功。
 *                           其他	操作失败。
 *
 ******************************************************************************/
int mdrv_ipc_int_disable (IPC_INT_LEV_E ulLvl);

/*****************************************************************************
 *  函 数 名  : mdrv_ipc_int_connect
 *  功能描述  :  往某号中断挂接服务程序。
 *  输入参数  :
 *
 *  输出参数  : 无
 *  返 回 值  :  0	       操作成功。
 *                           其他	操作失败。
 *
 ******************************************************************************/
int mdrv_ipc_int_connect (IPC_INT_LEV_E ulLvl,VOIDFUNCPTR routine, unsigned int parameter);

/*****************************************************************************
 *  函 数 名  : mdrv_ipc_int_disconnect
 *  功能描述  :  删除某号中断挂接的服务程序。
 *  输入参数  :
 *
 *  输出参数  : 无
 *  返 回 值  :  0	       操作成功。
 *                           其他	操作失败。
 *
 ******************************************************************************/
int mdrv_ipc_int_disconnect (IPC_INT_LEV_E ulLvl,VOIDFUNCPTR routine, unsigned int parameter);

/*****************************************************************************
 *  函 数 名  : mdrv_ipc_int_send
 *  功能描述  :  往目标核发送中断。
 *  输入参数  :
 *
 *  输出参数  : 无
 *  返 回 值  :  0	       操作成功。
 *                           其他	操作失败。
 *
 ******************************************************************************/
int mdrv_ipc_int_send(IPC_INT_CORE_E enDstCore, IPC_INT_LEV_E ulLvl);

/*****************************************************************************
 *  函 数 名  : mdrv_ipc_sem_take
 *  功能描述  :  带睡眠功能的获取某个信号量。
 *  输入参数  :
 *
 *  输出参数  : 无
 *  返 回 值  :  0	       操作成功。
 *                           其他	操作失败。
 *
 ******************************************************************************/
int mdrv_ipc_sem_take (unsigned int u32SignalNum,int s32timeout);

/*****************************************************************************
 *  函 数 名  : mdrv_ipc_sem_give
 *  功能描述  :  释放take到的信号量。
 *  输入参数  :
 *
 *  输出参数  : 无
 *  返 回 值  :  0	       操作成功。
 *                           其他	操作失败。
 *
 ******************************************************************************/
int mdrv_ipc_sem_give(unsigned int u32SignalNum);

/*****************************************************************************
 *  函 数 名  : mdrv_ipc_spin_lock
 *  功能描述  :  循环等待获取某号 ipc 信号量。
 *  输入参数  :
 *
 *  输出参数  : 无
 *  返 回 值  : void
 *
 ******************************************************************************/
void mdrv_ipc_spin_lock(unsigned int u32SignalNum);

/*****************************************************************************
 *  函 数 名  : mdrv_ipc_spin_trylock
 *  功能描述  :  尝试获取某号 ipc 信号量，不等待
 *  输入参数  :
 *
 *  输出参数  : 无
 *  返 回 值  :  0	       操作成功。
 *                           其他	操作失败。
 *
 ******************************************************************************/
int mdrv_ipc_spin_trylock(unsigned int u32SignalNum);


/*****************************************************************************
 *  函 数 名  : mdrv_ipc_spin_unlock
 *  功能描述  :  释放循环等待获取到的信号量。
 *  输入参数  :
 *
 *  输出参数  : 无
 *  返 回 值  : void
 *
 ******************************************************************************/
void mdrv_ipc_spin_unlock(unsigned int u32SignalNum);


#ifdef __cplusplus
}
#endif
#endif
