# HOME_AUTOMATION_WITH_BLUTOOTH
COMPANY : CODETECH IT SOLUTIONS

NAME : SACHIN M

INTERN ID : CT08LTG

DOMAIN : EMBEDDED SYSTEMS

DURATION : 4 WEEKS

MENTORS : NEELA SANTOSH KUMAR

Description :

This program enables the control of four LEDs connected to an ESP32 board via Bluetooth using the BluetoothSerial library. The ESP32 is configured to communicate over Bluetooth, allowing a user to control the LEDs remotely from a Bluetooth-enabled device, such as a smartphone or computer. The LEDs are connected to pins 27, 26, 25, and 34 of the ESP32, and these pins are set as output in the setup() function. The Bluetooth serial connection is initialized with the name "ESP32_BT_Home_Auto," and the device prompts the user that it is ready for pairing through a message on the serial monitor. In the main loop, the program listens for incoming Bluetooth commands, and depending on the received character, it turns the corresponding LED on or off. Each command is associated with a specific character ('1' to '8'): for example, '1' turns LED1 on, '2' turns LED1 off, '3' turns LED2 on, and so on. After executing each command, the program sends a feedback message to the Bluetooth device, confirming the action (e.g., "LED1 ON" or "LED2 OFF"). If an invalid command is received, the program responds with "Invalid Command." This project serves as a simple demonstration of remote control using Bluetooth, suitable for basic home automation or IoT applications.

OUTPUT :![Image](https://github.com/user-attachments/assets/f8f4824f-0622-4e67-92ba-f50250160495)

