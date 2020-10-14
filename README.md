# NeoPixel-HAL-stm32f103c8t6
NeoPixel on stm32f103c8t6 (Blue Pill) use HAL library

To drive data at 5V, it configure PWM output A0 (TIM2_CH1) with mode Open Drain, so you need to add an external pull-up to 5V, something like 2k2.
