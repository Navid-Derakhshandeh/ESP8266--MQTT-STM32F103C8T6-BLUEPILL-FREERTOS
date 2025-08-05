# ESP8266  MQTT STM32F103C8T6 BLUEPILL FREERTOS

In this repository, I have uploaded code demonstrating communication between an STM32F103C8T6 microcontroller and an ESP8266 development module. The ESP8266 connects to an MQTT broker and listens to a topic—for example, receiving sensor values. When the sensor value exceeds 50, the ESP8266 sets GPIO5 (pin D1) to HIGH. When the STM32 Blue Pill's PA0 port is set to HIGH, the LED connected to port PA6 (red LED) begins blinking every 3 seconds. If the sensor value drops below 50, the ESP8266 sets GPIO4 to HIGH, and the LED connected to the STM32 Blue Pill's PC14 port starts blinking (green LED).

The Blue Pill controls these tasks using FreeRTOS, which schedules and manages them accordingly. The system functions as a warning mechanism.

![IMG_20250805_175612](https://github.com/user-attachments/assets/956198f0-a1a4-4089-a545-e7100102ed63)

![IMG_20250805_175558](https://github.com/user-attachments/assets/51e4760d-746e-4cbc-b334-012069b6a861)
