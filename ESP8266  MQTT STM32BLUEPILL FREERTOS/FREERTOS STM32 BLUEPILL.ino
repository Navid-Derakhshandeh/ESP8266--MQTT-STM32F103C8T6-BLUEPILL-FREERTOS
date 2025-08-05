#include <STM32FreeRTOS.h>

// Define pins
#define BUTTON1 PA0  // Controls PC13
#define BUTTON2 PB1  // Controls PC14

#define LED1 PA6
#define LED2 PC14

void LEDControlTask(void *pvParameters) {
  pinMode(BUTTON1, INPUT);
  pinMode(BUTTON2, INPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);

  while (1) {
    // Blink LED1 while BUTTON1 is pressed
    if (digitalRead(BUTTON1) == HIGH) {
      digitalWrite(LED1, !digitalRead(LED1));  // Toggle LED1
    } else {
      digitalWrite(LED1, LOW);  // Turn off LED1
    }

    // Blink LED2 while BUTTON2 is pressed
    if (digitalRead(BUTTON2) == HIGH) {
      digitalWrite(LED2, !digitalRead(LED2));  // Toggle LED2
    } else {
      digitalWrite(LED2, LOW);  // Turn off LED2
    }

    vTaskDelay(pdMS_TO_TICKS(300));  // Blink speed (adjust as needed)
  }
}

void setup() {
  xTaskCreate(LEDControlTask, "LEDControl", 128, NULL, 1, NULL);
  vTaskStartScheduler();
}

void loop() {
  // Not used
}
