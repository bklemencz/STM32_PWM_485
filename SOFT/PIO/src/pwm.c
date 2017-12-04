
#include "pwm.h"

PWM_Channel_t PWM_Channel[8];

void PWM_Struct_Init()
{
  for (int i=0;i<4;i++)
  {
    PWM_Channel[i].TimerNr = 1;
  }
  for (int i=4;i<8;i++)
  {
    PWM_Channel[i].TimerNr = 3;
  }
  PWM_Channel[0].Channel = TIM_CHANNEL_1;
  PWM_Channel[4].Channel = TIM_CHANNEL_1;
  PWM_Channel[1].Channel = TIM_CHANNEL_2;
  PWM_Channel[5].Channel = TIM_CHANNEL_2;
  PWM_Channel[2].Channel = TIM_CHANNEL_3;
  PWM_Channel[6].Channel = TIM_CHANNEL_3;
  PWM_Channel[3].Channel = TIM_CHANNEL_4;
  PWM_Channel[7].Channel = TIM_CHANNEL_4;
}

void StartPWM ()
{
  HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_1);
  HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_2);
  HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_3);
  HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_4);
  HAL_TIM_PWM_Start(&htim3, TIM_CHANNEL_1);
  HAL_TIM_PWM_Start(&htim3, TIM_CHANNEL_2);
  HAL_TIM_PWM_Start(&htim3, TIM_CHANNEL_3);
  HAL_TIM_PWM_Start(&htim3, TIM_CHANNEL_4);
}

void StopPWM()
{
  HAL_TIM_PWM_Stop(&htim1, TIM_CHANNEL_1);
  HAL_TIM_PWM_Stop(&htim1, TIM_CHANNEL_2);
  HAL_TIM_PWM_Stop(&htim1, TIM_CHANNEL_3);
  HAL_TIM_PWM_Stop(&htim1, TIM_CHANNEL_4);
  HAL_TIM_PWM_Stop(&htim3, TIM_CHANNEL_1);
  HAL_TIM_PWM_Stop(&htim3, TIM_CHANNEL_2);
  HAL_TIM_PWM_Stop(&htim3, TIM_CHANNEL_3);
  HAL_TIM_PWM_Stop(&htim3, TIM_CHANNEL_4);
}
