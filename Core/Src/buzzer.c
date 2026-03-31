#include "buzzer.h"
#include "main.h"  // 包含HAL_Delay的定义

// 蜂鸣器初始化
void Buzzer_Init(void)
{
    HAL_GPIO_WritePin(BUZZER_GPIO_Port, BUZZER_Pin, GPIO_PIN_RESET);
}

// 打开蜂鸣器
void Buzzer_On(void)
{
    HAL_GPIO_WritePin(BUZZER_GPIO_Port, BUZZER_Pin, GPIO_PIN_SET);
}

// 关闭蜂鸣器
void Buzzer_Off(void)
{
    HAL_GPIO_WritePin(BUZZER_GPIO_Port, BUZZER_Pin, GPIO_PIN_RESET);
}

// 翻转蜂鸣器状态
void Buzzer_Toggle(void)
{
    HAL_GPIO_TogglePin(BUZZER_GPIO_Port, BUZZER_Pin);
}

// 蜂鸣器响一声
void Buzzer_Beep(uint32_t delay_ms)
{
    Buzzer_On();
    HAL_Delay(delay_ms);
    Buzzer_Off();
}
