#ifndef _LED_H_
#define _LED_H_


#include <stdint.h>




#define LED0_Pin GPIO_PIN_1
#define LED0_GPIO_Port GPIOC
#define LED1_Pin GPIO_PIN_2
#define LED1_GPIO_Port GPIOC
#define LED2_Pin GPIO_PIN_3
#define LED2_GPIO_Port GPIOC

#define LED_GPIO_Port GPIOC
#define LED_ALL_PINS (LED0_Pin | LED1_Pin | LED2_Pin)



void LED_Init(void);
void LED_On(uint16_t pins);
void LED_Off(uint16_t pins);
void LED_Toggle(uint16_t pins);
void LED_SetAllOn(void);
void LED_SetAllOff(void);


#endif
