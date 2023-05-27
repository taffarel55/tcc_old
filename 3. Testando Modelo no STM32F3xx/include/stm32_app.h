#ifndef __STM32_APP_H
#define __STM32_APP_H

#include "stm32f3xx_hal.h"

#ifdef __cplusplus
 extern "C" {
#endif

void delay( int n );
void setup();
void loop();

#ifdef __cplusplus
}
#endif

#endif // __STM32_APP_H