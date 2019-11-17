/*******************************************************************************
*
 * Copyright (c) 2013 - 2016, Freescale Semiconductor, Inc.
 * Copyright 2016-2017 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
* 
*
****************************************************************************//*!
*
* @brief  Addition
* 
*******************************************************************************/
#ifndef _MLIB_ADD_F16_H_
#define _MLIB_ADD_F16_H_

#if defined(__cplusplus)
extern "C" {
#endif

/*******************************************************************************
* Includes
*******************************************************************************/
#include "mlib_types.h"

/*******************************************************************************
* Macros 
*******************************************************************************/  
#define MLIB_Add_F16_Ci(f16Add1, f16Add2)    MLIB_Add_F16_FCi(f16Add1, f16Add2) 
  
/***************************************************************************//*!
*  Addition        
*  f16Out = f16Add1 + f16Add2
*  function is not saturated
*******************************************************************************/
static inline frac16_t MLIB_Add_F16_FCi(register frac16_t f16Add1, register frac16_t f16Add2)
{
    return((frac16_t)(f16Add1 + f16Add2));
}
 
#if defined(__cplusplus)
}
#endif

#endif  /*_MLIB_ADD_F16_H_*/
