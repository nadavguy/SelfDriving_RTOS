/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
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
#include "stm32h7xx_hal.h"

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
#define TIM3_CH1___Motor_Speed_Pin GPIO_PIN_6
#define TIM3_CH1___Motor_Speed_GPIO_Port GPIOA
#define TIM3_CH2___Motor_Speed_Pin GPIO_PIN_7
#define TIM3_CH2___Motor_Speed_GPIO_Port GPIOA
#define LD1_Pin GPIO_PIN_0
#define LD1_GPIO_Port GPIOB
#define TIM3_CH4___Motor_Speed_Pin GPIO_PIN_1
#define TIM3_CH4___Motor_Speed_GPIO_Port GPIOB
#define SPI3_MOSI___LCD_Pin GPIO_PIN_2
#define SPI3_MOSI___LCD_GPIO_Port GPIOB
#define RBMotor___In1_Pin GPIO_PIN_15
#define RBMotor___In1_GPIO_Port GPIOF
#define TIM1_CH1___LCD_Brightness_Pin GPIO_PIN_9
#define TIM1_CH1___LCD_Brightness_GPIO_Port GPIOE
#define TIM1_CH2___LIDAR_motor_ctrl_Pin GPIO_PIN_11
#define TIM1_CH2___LIDAR_motor_ctrl_GPIO_Port GPIOE
#define LD3_Pin GPIO_PIN_14
#define LD3_GPIO_Port GPIOB
#define USART1_RX___BLE_Pin GPIO_PIN_15
#define USART1_RX___BLE_GPIO_Port GPIOB
#define STLINK_RX_Pin GPIO_PIN_8
#define STLINK_RX_GPIO_Port GPIOD
#define STLINK_TX_Pin GPIO_PIN_9
#define STLINK_TX_GPIO_Port GPIOD
#define USB_OTG_FS_PWR_EN_Pin GPIO_PIN_10
#define USB_OTG_FS_PWR_EN_GPIO_Port GPIOD
#define GPIO___LCD_CS_Pin GPIO_PIN_6
#define GPIO___LCD_CS_GPIO_Port GPIOG
#define GPIO___LCD_DC_Pin GPIO_PIN_8
#define GPIO___LCD_DC_GPIO_Port GPIOG
#define TIM3_CH3___Motor_Speed_Pin GPIO_PIN_8
#define TIM3_CH3___Motor_Speed_GPIO_Port GPIOC
#define RBMotor___In2_Pin GPIO_PIN_10
#define RBMotor___In2_GPIO_Port GPIOA
#define SPI3_SCK___LCD_Pin GPIO_PIN_10
#define SPI3_SCK___LCD_GPIO_Port GPIOC
#define EXTI0___Motor1_Pin GPIO_PIN_0
#define EXTI0___Motor1_GPIO_Port GPIOD
#define EXTI0___Motor1_EXTI_IRQn EXTI0_IRQn
#define EXTI1___Motor1_Pin GPIO_PIN_1
#define EXTI1___Motor1_GPIO_Port GPIOD
#define EXTI1___Motor1_EXTI_IRQn EXTI1_IRQn
#define GPIO_SD_CS_Pin GPIO_PIN_4
#define GPIO_SD_CS_GPIO_Port GPIOD
#define USART1_TX___BLE_Pin GPIO_PIN_6
#define USART1_TX___BLE_GPIO_Port GPIOB
#define I2C1_SDA___ChassisMPU_Pin GPIO_PIN_7
#define I2C1_SDA___ChassisMPU_GPIO_Port GPIOB
#define I2C1_SCL___ChassisMPU_Pin GPIO_PIN_8
#define I2C1_SCL___ChassisMPU_GPIO_Port GPIOB
#define LD2_Pin GPIO_PIN_1
#define LD2_GPIO_Port GPIOE
/* USER CODE BEGIN Private defines */
extern uint32_t message;
extern volatile int message_received;
extern volatile int service_created;
extern volatile unsigned int received_data;
extern struct rpmsg_endpoint rp_endpoint;
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
