/**
  ******************************************************************************
  * @file    Power stage parameters.h
  * @author  STMCWB ver.4.0.0.14274
  * @version 4.0.0
  * @date    2014-19-11 21:12:48
  * @project two motor hall.stmc
  * @path    C:\Documents and Settings\Administrator\桌面\MCU
  * @brief   This file contains motor parameters needed by STM32 PMSM MC FW  
  *                 library v4.0.0
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT 2014 STMicroelectronics</center></h2>
  *
  * Licensed under MCD-ST Liberty SW License Agreement V2, (the "License");
  * You may not use this file except in compliance with the License.
  * You may obtain a copy of the License at:
  *
  *        http://www.st.com/software_license_agreement_liberty_v2
  *
  * Unless required by applicable law or agreed to in writing, software 
  * distributed under the License is distributed on an "AS IS" BASIS, 
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *
  ******************************************************************************
  */
  
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __POWER_STAGE_PARAMETERS_H
#define __POWER_STAGE_PARAMETERS_H

/************* PWM Driving signals section **************/
#define PHASE_UH_POLARITY             H_ACTIVE_HIGH 
#define PHASE_VH_POLARITY             H_ACTIVE_HIGH 
#define PHASE_WH_POLARITY             H_ACTIVE_HIGH 

#define HW_COMPLEMENTED_LOW_SIDE      DISABLE 

#define PHASE_UL_POLARITY             L_ACTIVE_HIGH 
#define PHASE_VL_POLARITY             L_ACTIVE_HIGH 
#define PHASE_WL_POLARITY             L_ACTIVE_HIGH 

#define HW_DEAD_TIME_NS              100 /*!< Dead-time inserted 
                                                         by HW if low side signals 
                                                         are not used */
/********** Inrush current limiter signal section *******/
#define INRUSH_CURR_LIMITER_POLARITY  DOUT_ACTIVE_HIGH 

/******* Dissipative brake driving signal section *******/
#define DISSIPATIVE_BRAKE_POLARITY    DOUT_ACTIVE_HIGH 

/*********** Bus voltage sensing section ****************/
#define VBUS_PARTITIONING_FACTOR      0.0046 /*!< It expresses how 
                                                       much the Vbus is attenuated  
                                                       before being converted into 
                                                       digital value */
#define NOMINAL_BUS_VOLTAGE_V         22 
/******** Current reading parameters section ******/
/*** Topology ***/
#define THREE_SHUNT             //当通过三相分流电阻进行完成电流采样时（默认情况），要取消注释
//#define SINGLE_SHUNT          当通过单相分流电阻进行完成电流采样时，要取消注释
//#define ICS_SENSORS           当使用隔离电流传感器完成电流采样时，要取消注释 


#define RSHUNT                        0.020 

/*  ICSs gains in case of isolated current sensors,
        amplification gain for shunts based sensing */
#define AMPLIFICATION_GAIN            9.36 

/*** Noise parameters ***/
#define TNOISE_NS                     2550 
#define TRISE_NS                      2550 
   
/*********** Over-current protection section ************/   
#define OVERCURR_FEEDBACK_POLARITY       EMSTOP_ACTIVE_LOW 
#define OVERCURR_PROTECTION_HW_DISABLING  DOUT_ACTIVE_HIGH 
   
/************ Temperature sensing section ***************/
/* V[V]=V0+dV/dT[V/Celsius]*(T-T0)[Celsius]*/
#define V0_V                          0.290 /*!< in Volts */
#define T0_C                          25.0 /*!< in Celsius degrees */
#define dV_dT                         0.025 /*!< V/Celsius degrees */
#define T_MAX                         70 /*!< Sensor measured 
                                                       temperature at maximum 
                                                       power stage working 
                                                       temperature, Celsius degrees */
#endif /*__POWER_STAGE_PARAMETERS_H*/
/******************* (C) COPYRIGHT 2014 STMicroelectronics *****END OF FILE****/
