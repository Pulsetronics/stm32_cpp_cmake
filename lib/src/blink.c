#include "blink.h"



void blink(GPIO_PinState state) {

     HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, state);
}