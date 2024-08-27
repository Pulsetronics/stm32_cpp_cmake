#ifndef __SERIAL_H
#define __SERIAL_H

#include <string>
#include "main.h"
#include "usart.h"

class Serial {
public:
        Serial(UART_HandleTypeDef* huart, uint32_t baudrate);

        void Print(std::string data);
        
private:
       UART_HandleTypeDef* huart_name;
       uint32_t baud;
};

#endif