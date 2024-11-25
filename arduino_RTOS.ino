#include <Arduino_FreeRTOS.h>

const int LED1_PIN = 8;
const int LED2_PIN = 9;

void TaskBlinkLED1(void *pvParameters);
void TaskBlinkLED2(void *pvParameters);

void setup() {
  pinMode(LED1_PIN, OUTPUT);
  pinMode(LED2_PIN, OUTPUT);

  xTaskCreate(
    TaskBlinkLED1,      
    "Blink LED1",       
    128,                
    NULL,               
    1,                  
    NULL               
  );

  xTaskCreate(
    TaskBlinkLED2,
    "Blink LED2",
    128,
    NULL,
    1,
    NULL
  );
}

void loop() {

}


void TaskBlinkLED1(void *pvParameters) {
  (void) pvParameters; 
  for (;;) {
    digitalWrite(LED1_PIN, HIGH); 
    vTaskDelay(500 / portTICK_PERIOD_MS); 
    digitalWrite(LED1_PIN, LOW); 
    vTaskDelay(500 / portTICK_PERIOD_MS);
  }
}


void TaskBlinkLED2(void *pvParameters) {
  (void) pvParameters; 
  for (;;) {
    digitalWrite(LED2_PIN, HIGH); 
    vTaskDelay(300 / portTICK_PERIOD_MS); 
    digitalWrite(LED2_PIN, LOW); 
    vTaskDelay(300 / portTICK_PERIOD_MS);
  }
}
