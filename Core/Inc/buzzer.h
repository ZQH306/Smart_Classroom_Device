#ifndef __BUZZER_H
#define __BUZZER_H

#include <stdint.h>

// 蜂鸣器引脚定义
#define BUZZER_Pin GPIO_PIN_7
#define BUZZER_GPIO_Port GPIOC

// 函数声明
void Buzzer_Init(void);
void Buzzer_On(void);
void Buzzer_Off(void);
void Buzzer_Toggle(void);
void Buzzer_Beep(uint32_t delay_ms);

#endif 
