#ifndef __STM32_LED_H
#define __STM32_LED_H

#include "stm32_app.h"

#define LED_PIN                                GPIO_PIN_5
#define LED_GPIO_PORT                          GPIOA
#define LED_GPIO_CLK_ENABLE()                  __HAL_RCC_GPIOA_CLK_ENABLE()

void LED_Init();

#endif // __STM32_LED_H