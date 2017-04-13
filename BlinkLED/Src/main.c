
#include"ourHal.h"

/*
  Based on the clock frequency = 72MHz
*/
void delay1s(){
	for(int i=0 ; i <720000 ; i ++);
}

int main(void)
{
  while (1)
  {
	int PIN = 13;
	uint32_t value1 = 0xFFFF;
	uint32_t value2 = 0x0000;

  	// Teste 1
	/*
	setPin( (GPIO_TypeDef *) GPIOC_BASE , PIN);
	delay1s();
	clearPin( (GPIO_TypeDef *) GPIOC_BASE , PIN);
	delay1s();
	setPin( (GPIO_TypeDef *) GPIOC_BASE , PIN);
	delay1s();
	clearPin( (GPIO_TypeDef *) GPIOC_BASE , PIN); 
	*/
	
	// Teste 2
	/*
	write( (GPIO_TypeDef *) GPIOC_BASE , value1);
	delay1s();
	write( (GPIO_TypeDef *) GPIOC_BASE , value2);
	delay1s(); 
	*/

	// Teste 3
	togglePin((GPIO_TypeDef *) GPIOC_BASE, PIN);
	delay1s();

  }


}



