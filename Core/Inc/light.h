#ifndef _LIGHT_H_
#define _LIGHT_H_


#include <stdint.h>


#define LIGHT_Pin GPIO_PIN_4
#define LIGHT_GPIO_Port GPIOA



uint32_t Light_Get(void);



#endif
