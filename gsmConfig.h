
#ifndef GSMCONFIG_H
#define GSMCONFIG_H

#define _GSM_MAIN_POWER 0   //  control gsm main power
#define _GSM_SIM_DETECTOR 0 //  use this feature when the SIM card holder has the ability to detect the SIM card
#define _GSM_DEBUG 1        //  use printf debug
#define _GSM_CALL 1         //  enable call
#define _GSM_MSG 0          //  enable message
#define _GSM_GPRS 0         //  enable gprs
#define _GSM_BLUETOOTH 0    //  enable bluetooth , coming soon

#define _GSM_USART USART1
#define _GSM_KEY_GPIO GPIOD
#define _GSM_KEY_PIN GPIO_PIN_7
#if (_GSM_MAIN_POWER == 1)
#define _GSM_PWR_CTRL_GPIO GPIOD
#define _GSM_PWR_CTRL_PIN GPIO_PIN_6
#endif
#if (_GSM_SIM_DETECTOR == 1)
#define _GSM_SIM_DET_GPIO GPIOA
#define _GSM_SIM_DET_PIN GPIO_PIN_2
#endif /* GSMCONFIG_H */
#endif /*_GSMCONFIG_H_ */
