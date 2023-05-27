#include "stm32_app.h"
#include "led.h"

void setup(void) {
  LED_Init();
}

void loop(void) {
  HAL_GPIO_TogglePin(LED_GPIO_PORT, LED_PIN);
  delay(100);
}