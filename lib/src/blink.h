#ifndef __BLINK_H
#define __BLINK_H

#include "main.h"


class BLINK {
public:  
      BLINK(GPIO_TypeDef* port, uint16_t pin);
      
      void toggle( GPIO_TypeDef* sPort, uint16_t sPin);

private:
      uint16_t sPin;
      GPIO_TypeDef* sPort;

};

#endif // LED_H
