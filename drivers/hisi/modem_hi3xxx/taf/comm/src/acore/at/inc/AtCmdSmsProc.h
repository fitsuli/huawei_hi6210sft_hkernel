/******************************************************************************

                  版权所有 (C), 2001-2011, 华为技术有限公司

 ******************************************************************************
  文 件 名   : AtCmdSmsProc.h
  版 本 号   : 初稿
  作    者   : 
  生成日期   : 2013年3月13日
  最近修改   :
  功能描述   : AtCmdSmsProc.c 的头文件
  函数列表   :
  修改历史   :
  1.日    期   : 2013年3月13日
    作    者   : 
    修改内容   : 创建文件

******************************************************************************/

#ifndef __ATCMDSMSPROC_H__
#define __ATCMDSMSPROC_H__

/*****************************************************************************
  1 其他头文件包含                            
*****************************************************************************/
#include "AtCtx.h"
#include "AtParse.h"
#include "MnMsgApi.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


#pragma pack(4)

/*****************************************************************************
  2 宏定义 
*****************************************************************************/


/*****************************************************************************
  3 枚举定义 
*****************************************************************************/


/*****************************************************************************
  4 全局变量声明
*****************************************************************************/


/*****************************************************************************
  5 消息头定义
*****************************************************************************/


/*****************************************************************************
  6 消息定义
*****************************************************************************/


/*****************************************************************************
  7 STRUCT定义
*****************************************************************************/


/*****************************************************************************
  8 UNION定义
*****************************************************************************/


/*****************************************************************************
  9 OTHERS定义
*****************************************************************************/


/*****************************************************************************
  10 函数声明
*****************************************************************************/
/*****************************************************************************
 函 数 名  : AT_PrintSmsLength
 功能描述  : 打印短信内容长度(单位是字节，UCS2一个字节占用2BYTE)
 输入参数  : enMsgCoding    - 短信内容编码类型
             ulLength       - 短信内容长度，单位BYTE
             pDst           - 打印短信的目标内存指针
 输出参数  : 无
 返 回 值  : 短信内容长度，单位字节
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2012年4月16日
    作    者   : f62575
    修改内容   : 新生成函数

*****************************************************************************/
VOS_UINT16 AT_PrintSmsLength(
    MN_MSG_MSG_CODING_ENUM_U8           enMsgCoding,
    VOS_UINT32                          ulLength,
    TAF_UINT8                          *pDst
);








#if (VOS_OS_VER == VOS_WIN32)
#pragma pack()
#else
#pragma pack(0)
#endif




#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of AtCmdSmsProc.h */
