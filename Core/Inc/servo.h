#ifndef _SERVO_H_
#define _SERVO_H_


#include <stdint.h>


#define SERVO_Pin GPIO_PIN_0
#define SERVO_GPIO_Port GPIOB



void Servo_Init(void);
void Servo_Set_Angle(uint16_t angle);



#endif
