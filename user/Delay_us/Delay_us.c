#include"Delay_us.h"
#include"tim.h"

void Delay_us(uint32_t us){
    __HAL_TIM_SET_COUNTER(&htim1,0);
    while(__HAL_TIM_GET_COUNTER(&htim1)<us);
}