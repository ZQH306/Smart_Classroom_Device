#include "gpio.h"
#include "led.h"



// LED初始化
void LED_Init(void)
{
    // 初始化代码
    HAL_GPIO_WritePin(LED_GPIO_Port, LED0_Pin | LED1_Pin | LED2_Pin, GPIO_PIN_RESET);
}

// 打开指定LED
void LED_On(uint16_t pins)
{
    HAL_GPIO_WritePin(LED_GPIO_Port, pins, GPIO_PIN_SET);
}

// 关闭指定LED
void LED_Off(uint16_t pins)
{
    HAL_GPIO_WritePin(LED_GPIO_Port, pins, GPIO_PIN_RESET);
}

// 翻转指定LED状态
void LED_Toggle(uint16_t pins)
{
    HAL_GPIO_TogglePin(LED_GPIO_Port, pins);
}

// 打开所有LED
void LED_SetAllOn(void)
{
    HAL_GPIO_WritePin(LED_GPIO_Port, LED_ALL_PINS, GPIO_PIN_SET);
}

// 关闭所有LED
void LED_SetAllOff(void)
{
    HAL_GPIO_WritePin(LED_GPIO_Port,LED_ALL_PINS, GPIO_PIN_RESET);
}
