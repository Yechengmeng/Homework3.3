#include"Stepper_motor.h"
#include"Delay_us.h"
#include"tim.h"

void stepper_motor_setDirection(uint8_t direction){
    if(direction==0){
        HAL_GPIO_WritePin(DIR_GPIO_Port,DIR_Pin,GPIO_PIN_RESET);
    }
    else{
        HAL_GPIO_WritePin(DIR_GPIO_Port,DIR_Pin,GPIO_PIN_SET);
    }
}

void stepper_motor_generatePulse(uint32_t delay_time_us){
    HAL_GPIO_WritePin(PUL_GPIO_Port,PUL_Pin,GPIO_PIN_SET);
    Delay_us(delay_time_us);
    HAL_GPIO_WritePin(PUL_GPIO_Port,PUL_Pin,GPIO_PIN_RESET);
    Delay_us(delay_time_us);
}