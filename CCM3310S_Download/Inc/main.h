/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"
#include "stm32f1xx_ll_spi.h"
#include "stm32f1xx_ll_tim.h"
#include "stm32f1xx_ll_usart.h"
#include "stm32f1xx_ll_rcc.h"
#include "stm32f1xx_ll_bus.h"
#include "stm32f1xx_ll_system.h"
#include "stm32f1xx_ll_exti.h"
#include "stm32f1xx_ll_cortex.h"
#include "stm32f1xx_ll_utils.h"
#include "stm32f1xx_ll_pwr.h"
#include "stm32f1xx_ll_dma.h"
#include "stm32f1xx.h"
#include "stm32f1xx_ll_gpio.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define Addr4_Pin LL_GPIO_PIN_2
#define Addr4_GPIO_Port GPIOE
#define Addr3_Pin LL_GPIO_PIN_3
#define Addr3_GPIO_Port GPIOE
#define Addr2_Pin LL_GPIO_PIN_4
#define Addr2_GPIO_Port GPIOE
#define Addr1_Pin LL_GPIO_PIN_5
#define Addr1_GPIO_Port GPIOE
#define EN_V12_Pin LL_GPIO_PIN_12
#define EN_V12_GPIO_Port GPIOE
#define RESET_3310_Pin LL_GPIO_PIN_13
#define RESET_3310_GPIO_Port GPIOE
#define RESET_MCU_Pin LL_GPIO_PIN_14
#define RESET_MCU_GPIO_Port GPIOE
#define SRAM_CE_Pin LL_GPIO_PIN_12
#define SRAM_CE_GPIO_Port GPIOB
#define MAX485_Pin LL_GPIO_PIN_9
#define MAX485_GPIO_Port GPIOC
#define TX_485_Pin LL_GPIO_PIN_9
#define TX_485_GPIO_Port GPIOA
#define RX_485_Pin LL_GPIO_PIN_10
#define RX_485_GPIO_Port GPIOA
#define CCM_TX_Pin LL_GPIO_PIN_10
#define CCM_TX_GPIO_Port GPIOC
#define CCM_RX_Pin LL_GPIO_PIN_11
#define CCM_RX_GPIO_Port GPIOC
#define Debug_TX_Pin LL_GPIO_PIN_12
#define Debug_TX_GPIO_Port GPIOC
#define RED_LED_Pin LL_GPIO_PIN_0
#define RED_LED_GPIO_Port GPIOD
#define Debug_Rx_Pin LL_GPIO_PIN_2
#define Debug_Rx_GPIO_Port GPIOD
#define LED_S_Pin LL_GPIO_PIN_3
#define LED_S_GPIO_Port GPIOD
#define LED_detect_Pin LL_GPIO_PIN_4
#define LED_detect_GPIO_Port GPIOD
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
