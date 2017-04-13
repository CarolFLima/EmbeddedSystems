
#include<stdint.h>
#include "ioMapping.h"


void setPin(GPIO_TypeDef * GPIO, int PIN);

void clearPin(GPIO_TypeDef * GPIO, int PIN);

void togglePin(GPIO_TypeDef * GPIO, int PIN);

void write(GPIO_TypeDef * GPIO, uint32_t value);
