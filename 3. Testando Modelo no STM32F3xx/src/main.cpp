#include "led.h"
#include "stm32_app.h"
#include "EloquentTinyML.h"
#include "sine_model.h"
#include <stdio.h>

#define NUMBER_OF_INPUTS 1
#define NUMBER_OF_OUTPUTS 1
#define TENSOR_ARENA_SIZE 3168

Eloquent::TinyML::TfLite<
    NUMBER_OF_INPUTS,
    NUMBER_OF_OUTPUTS,
    TENSOR_ARENA_SIZE> ml;

UART_HandleTypeDef huart1;

void setup(void) {
  // LED_Init();
  LED_GPIO_CLK_ENABLE();
  GPIO_InitTypeDef GPIO_InitStruct;
  GPIO_InitStruct.Pin = LED_PIN;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  GPIO_InitStruct.Speed = GPIO_SPEED_HIGH;
  HAL_GPIO_Init(LED_GPIO_PORT, &GPIO_InitStruct);

  ml.begin(sine_model);
}

void loop(void) {
  HAL_GPIO_TogglePin(LED_GPIO_PORT, LED_PIN);
  //printf("Hello, world!\n");
  
  for (int i = 0; i < 3.14; i=i+0.001) {
    float x = 3.14 * i / 100.0;
    float input[1] = { x };
    float predicted = ml.predict(input);
  }
  
  delay(100);
}