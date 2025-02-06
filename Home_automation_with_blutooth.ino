#include "BluetoothSerial.h"

BluetoothSerial SerialBT;

#define LED1 27
#define LED2 26
#define LED3 25
#define LED4 34

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);

  Serial.begin(115200);
  SerialBT.begin("ESP32_BT_Home_Auto");
  Serial.println("The device started, now you can pair it with Bluetooth!");
}

void loop() {
  if (SerialBT.available()) {
    char incomingChar = SerialBT.read();
    Serial.print("Received: ");
    Serial.println(incomingChar);

    switch (incomingChar) {
      case '1':
        digitalWrite(LED1, HIGH);
        SerialBT.println("LED1 ON");
        break;
      case '2':
        digitalWrite(LED1, LOW);
        SerialBT.println("LED1 OFF");
        break;
      case '3':
        digitalWrite(LED2, HIGH);
        SerialBT.println("LED2 ON");
        break;
      case '4':
        digitalWrite(LED2, LOW); 
        SerialBT.println("LED2 OFF");
      case '5':
        digitalWrite(LED3, HIGH);
        SerialBT.println("LED1 ON");
        break;
      case '6':
        digitalWrite(LED3, LOW);
        SerialBT.println("LED1 OFF");
        break;
      case '7':
        digitalWrite(LED4, HIGH);
        SerialBT.println("LED1 ON");
        break;
      case '8':
        digitalWrite(LED4, LOW);
        SerialBT.println("LED2 OFF");
        break;
      default:
        SerialBT.println("Invalid Command");
        break;
    }
  }
}
