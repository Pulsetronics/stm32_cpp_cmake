#include "blink.h"


// Constructor: Initialize the LED with a GPIO port and pin
BLINK::BLINK(GPIO_TypeDef* port, uint16_t pin) : sPort(port), sPin(pin) {
    // Configure the GPIO pin as output
    GPIO_InitTypeDef GPIO_InitStruct = {0};
    GPIO_InitStruct.Pin = sPin;
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    HAL_GPIO_Init(sPort, &GPIO_InitStruct);
}

// Method to toggle the LED
void BLINK::toggle(GPIO_TypeDef* port, uint16_t pin) {
    HAL_GPIO_TogglePin(port, pin);
}

