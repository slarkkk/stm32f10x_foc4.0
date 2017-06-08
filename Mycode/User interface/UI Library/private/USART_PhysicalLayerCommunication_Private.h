/**
  ******************************************************************************
  * @file    USART_PhysicalLayerCommunication_Private.h
  * @author  STMicroelectronics - System Lab - MC Team
  * @version 4.0.0
  * @date    28-May-2014 10:45
  * @brief   Private definition for Physical Layer Communication
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
#ifndef __USART_COM_H
#define __USART_COM_H

typedef USARTParams_t DParams_t, *pDParams_t; 

typedef struct
{
  pDParams_t pDParams_str;
}_CUSART_t, *_CUSART;

#endif /* __USART_COM_H */

/******************* (C) COPYRIGHT 2014 STMicroelectronics *****END OF FILE****/
