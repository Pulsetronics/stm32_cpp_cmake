#include "serial.h"


Serial::Serial(UART_HandleTypeDef* huart, uint32_t baudrate) :
               huart_name(huart), baud(baudrate) {
        huart->Init.BaudRate = baud;
        HAL_UART_Init(huart_name);      
}

void Serial::Print(std::string data) {
    HAL_UART_Transmit(huart_name, (uint8_t*)(data.c_str()), static_cast<uint32_t>(data.length()), 100);
}