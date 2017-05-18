//Autogenerated file
//MCU name: STM32L021G4
//MCU  xml: STM32L021G4Ux.xml
//GPIO remap/alternate function xml: GPIO-STM32L021_gpio_v1_0_Modes.xml

/*
const stm32_port_pin_type variant_pin_list[] = {
  { GPIOA, GPIO_PIN_0 },
  { GPIOA, GPIO_PIN_1 },
  { GPIOA, GPIO_PIN_2 },
  { GPIOA, GPIO_PIN_3 },
  { GPIOA, GPIO_PIN_4 },
  { GPIOA, GPIO_PIN_5 },
  { GPIOA, GPIO_PIN_6 },
  { GPIOA, GPIO_PIN_7 },
  { GPIOA, GPIO_PIN_8 },
  { GPIOA, GPIO_PIN_9 },
  { GPIOA, GPIO_PIN_10},
  { GPIOA, GPIO_PIN_13},
  { GPIOA, GPIO_PIN_14},
  { GPIOA, GPIO_PIN_15},
  { GPIOB, GPIO_PIN_0 },
  { GPIOB, GPIO_PIN_1 },
  { GPIOB, GPIO_PIN_3 },
  { GPIOB, GPIO_PIN_4 },
  { GPIOB, GPIO_PIN_5 },
  { GPIOB, GPIO_PIN_6 },
  { GPIOB, GPIO_PIN_7 },
  { GPIOB, GPIO_PIN_9 },
  { GPIOC, GPIO_PIN_14},
  { GPIOC, GPIO_PIN_15},
};
*/

/*
enum {
   PA0 ,
   PA1 ,
   PA2 ,
   PA3 ,
   PA4 ,
   PA5 ,
   PA6 ,
   PA7 ,
   PA8 ,
   PA9 ,
   PA10,
   PA13,
   PA14,
   PA15,
   PB0 ,
   PB1 ,
   PB3 ,
   PB4 ,
   PB5 ,
   PB6 ,
   PB7 ,
   PB9 ,
   PC14,
   PC15,
NUM_PINS,
};
*/

// --------------------ADC--------------------

// --------------------I2C--------------------

const stm32_af_pin_list_type chip_af_i2c_scl [] = {
//I2C1
    { I2C1  , GPIOA, GPIO_PIN_4  , GPIO_AF3_I2C1  }, 
    { I2C1  , GPIOA, GPIO_PIN_9  , GPIO_AF1_I2C1  }, 
    { I2C1  , GPIOB, GPIO_PIN_6  , GPIO_AF1_I2C1  }, 
}; 

const stm32_af_pin_list_type chip_af_i2c_sda [] = {
//I2C1
    { I2C1  , GPIOA, GPIO_PIN_10 , GPIO_AF1_I2C1  }, 
    { I2C1  , GPIOA, GPIO_PIN_13 , GPIO_AF3_I2C1  }, 
    { I2C1  , GPIOB, GPIO_PIN_7  , GPIO_AF1_I2C1  }, 
}; 

// --------------------SPI--------------------

const stm32_af_pin_list_type chip_af_spi_miso [] = {
//SPI1
    { SPI1  , GPIOA, GPIO_PIN_6  , GPIO_AF0_SPI1  }, 
    { SPI1  , GPIOA, GPIO_PIN_14 , GPIO_AF5_SPI1  }, 
    { SPI1  , GPIOB, GPIO_PIN_0  , GPIO_AF1_SPI1  }, 
    { SPI1  , GPIOB, GPIO_PIN_4  , GPIO_AF0_SPI1  }, 
}; 

const stm32_af_pin_list_type chip_af_spi_mosi [] = {
//SPI1
    { SPI1  , GPIOA, GPIO_PIN_7  , GPIO_AF0_SPI1  }, 
    { SPI1  , GPIOB, GPIO_PIN_1  , GPIO_AF1_SPI1  }, 
    { SPI1  , GPIOB, GPIO_PIN_5  , GPIO_AF0_SPI1  }, 
}; 

const stm32_af_pin_list_type chip_af_spi_nss [] = {
//SPI1
    { SPI1  , GPIOA, GPIO_PIN_4  , GPIO_AF0_SPI1  }, 
    { SPI1  , GPIOA, GPIO_PIN_15 , GPIO_AF0_SPI1  }, 
}; 

const stm32_af_pin_list_type chip_af_spi_sck [] = {
//SPI1
    { SPI1  , GPIOA, GPIO_PIN_5  , GPIO_AF0_SPI1  }, 
    { SPI1  , GPIOA, GPIO_PIN_13 , GPIO_AF5_SPI1  }, 
    { SPI1  , GPIOB, GPIO_PIN_3  , GPIO_AF0_SPI1  }, 
}; 

// --------------------TIM--------------------

// --------------------TIM2--------------------

// --------------------USART--------------------

const stm32_af_pin_list_type chip_af_usart_rx [] = {
//USART2
    { USART2, GPIOA, GPIO_PIN_0  , GPIO_AF0_USART2}, 
    { USART2, GPIOA, GPIO_PIN_3  , GPIO_AF4_USART2}, 
    { USART2, GPIOA, GPIO_PIN_10 , GPIO_AF4_USART2}, 
    { USART2, GPIOA, GPIO_PIN_15 , GPIO_AF4_USART2}, 
    { USART2, GPIOB, GPIO_PIN_7  , GPIO_AF0_USART2}, 
}; 

const stm32_af_pin_list_type chip_af_usart_tx [] = {
//USART2
    { USART2, GPIOA, GPIO_PIN_2  , GPIO_AF4_USART2}, 
    { USART2, GPIOA, GPIO_PIN_9  , GPIO_AF4_USART2}, 
    { USART2, GPIOA, GPIO_PIN_14 , GPIO_AF4_USART2}, 
    { USART2, GPIOB, GPIO_PIN_6  , GPIO_AF0_USART2}, 
}; 

const stm32_chip_adc1_channel_type chip_adc1_channel[] = {
    { GPIOA, GPIO_PIN_0  , ADC_CHANNEL_0  }, 
    { GPIOA, GPIO_PIN_1  , ADC_CHANNEL_1  }, 
    { GPIOA, GPIO_PIN_2  , ADC_CHANNEL_2  }, 
    { GPIOA, GPIO_PIN_3  , ADC_CHANNEL_3  }, 
    { GPIOA, GPIO_PIN_4  , ADC_CHANNEL_4  }, 
    { GPIOA, GPIO_PIN_5  , ADC_CHANNEL_5  }, 
    { GPIOA, GPIO_PIN_6  , ADC_CHANNEL_6  }, 
    { GPIOA, GPIO_PIN_7  , ADC_CHANNEL_7  }, 
    { GPIOB, GPIO_PIN_0  , ADC_CHANNEL_8  }, 
    { GPIOB, GPIO_PIN_1  , ADC_CHANNEL_9  }, 
};

const stm32_clock_freq_list_type chip_clock_freq_list[] = {
    {I2C1  , HAL_RCC_GetPCLK1Freq },  
    {USART2, HAL_RCC_GetPCLK1Freq },  

    {SPI1  , HAL_RCC_GetPCLK2Freq },  
};

