#include "ourHal.h"


/*
 Sets the specified pin to one
*/
void setPin(GPIO_TypeDef * GPIO, int PIN)
{
	GPIO->ODR |= (0x01 << PIN);
}

/*
 Sets the specified pin to zero
*/
void clearPin(GPIO_TypeDef * GPIO, int PIN)
{
	GPIO->ODR &= !(0x01 << PIN);
}

/*
 Switches the value of the specified pin
*/
void togglePin(GPIO_TypeDef * GPIO, int PIN)
{
	if((GPIO->ODR & (0x0001 << PIN)) == 0x0000){
		setPin(GPIO, PIN);
	} else {
		clearPin(GPIO, PIN);
	}
	// You can also toggle a pin using a XOR:
	//GPIO->ODR ^= (0x01 << PIN); 
}

/*
 Writes a value on the specified port
*/
void write(GPIO_TypeDef * GPIO, uint32_t value)
{
	GPIO->ODR = value;
}
