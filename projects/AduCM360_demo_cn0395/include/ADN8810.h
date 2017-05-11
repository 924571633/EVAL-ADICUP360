/******************************************************************************
*   @file     ADN8810.h
*   @brief    Header file for ADN8810
*   @version  V0.1
*   @author   ADI
*
*******************************************************************************
* Copyright 2017(c) Analog Devices, Inc.
*
* All rights reserved.
*
* Redistribution and use in source and binary forms, with or without modification,
* are permitted provided that the following conditions are met:
*  - Redistributions of source code must retain the above copyright
*    notice, this list of conditions and the following disclaimer.
*  - Redistributions in binary form must reproduce the above copyright
*    notice, this list of conditions and the following disclaimer in
*    the documentation and/or other materials provided with the
*    distribution.
*  - Neither the name of Analog Devices, Inc. nor the names of its
*    contributors may be used to endorse or promote products derived
*    from this software without specific prior written permission.
*  - The use of this software may or may not infringe the patent rights
*    of one or more patent holders.  This license does not release you
*    from the requirement that you obtain separate licenses from these
*    patent holders to use this software.
*  - Use of the software either in source or binary form, must be run
*    on or directly connected to an Analog Devices Inc. component.
*
* THIS SOFTWARE IS PROVIDED BY ANALOG DEVICES "AS IS" AND ANY EXPRESS OR IMPLIED
* WARRANTIES, INCLUDING, BUT NOT LIMITED TO, NON-INFRINGEMENT, MERCHANTABILITY
* AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
* IN NO EVENT SHALL ANALOG DEVICES BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
* SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
* INTELLECTUAL PROPERTY RIGHTS, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
* LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
* ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
* (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
* SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*
*******************************************************************************/

#ifndef ADN8810_H_
#define ADN8810_H_

#include <CN0395.h>

/*****************************************************************************/
/********************************  Definitions *******************************/
/*****************************************************************************/


// Comands

#define ADN8810_ADR                 0x07     /* Hard wired device address */
#define ADN8810_CURRENT_1LSB        0.0122   /* 12.2uA is 1 LSB resolution */

#define ADN8810_FULL_SCALE_OUT      4095
#define ADN8810_HALF_SCALE_OUT      2048
#define ADN8810_QUARTER_SCALE_OUT   1024


typedef enum{
   ADN8810_DISABLE,
   ADN8810_ENABLE
}enADN8810Status;


/******************************************************************************/
/* Functions Prototypes                                                       */
/******************************************************************************/

void ADN8810_Init(void);
int ADN8810_SetOutput(float fDesiredOutputCurrent, sMeasurementVariables *sMeasVar);
void ADN8810_Reset(void);
void ADN8810_MasterPower(enADN8810Status status);
uint32_t ADN8810_FactoryCalibration(void);
uint16_t ADN8810_CurrentToDataInputCalc(float fCurrent);

#endif // ADN8810_H_
