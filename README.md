\# Smart Walking Stick (Arduino Uno)



An assistive IoT/embedded hardware project built using an \*\*Arduino Uno\*\* to help visually impaired individuals navigate safely by detecting nearby obstacles and alerting the user through audio and/or haptic feedback.



\## Features

\- \*\*Obstacle Detection:\*\* Uses ultrasonic sensing to detect objects in the user's path in real time.

\- \*\*Proximity Alerts:\*\* Triggers a buzzer and vibration motor that alerts the user when an obstacle crosses a safe distance threshold.

\- \*\*Lightweight \& Portable:\*\* Powered by an external battery pack for standalone, handheld use.





\## Components Required

\- \*\*Microcontroller:\*\* Arduino Uno

\- \*\*Distance Sensor:\*\* HC-SR04 Ultrasonic Sensor

\- \*\*Alert Module:\*\* Piezo Buzzer and Vibration Motor

\- \*\*Power Supply:\*\* 9V Battery with DC Barrel Jack (or power bank)

\- \*\*Miscellaneous:\*\* Jumper wires, breadboard/PCB, and walking stick frame





\## Circuit Connections



| Component Pin | Arduino Uno Pin | Description |

| :--- | :--- | :--- |

| \*\*HC-SR04 VCC\*\* | `5V` | Power supply for ultrasonic sensor |

| \*\*HC-SR04 GND\*\* | `GND` | Ground |

| \*\*HC-SR04 Trig\*\* | `D9` | Trigger signal pin |

| \*\*HC-SR04 Echo\*\* | `D10` | Echo receiver pin |

| \*\*Buzzer (+)\*\* | `D11` | Audio alert output |

| \*\*Buzzer (-)\*\* | `GND` | Ground |



\## How It Works

1\. The \*\*HC-SR04 ultrasonic sensor\*\* continuously emits high-frequency sound waves and measures the time taken for the echo to bounce back.

2\. The \*\*Arduino Uno\*\* calculates the distance to the nearest object using the duration of the echo pulse.

3\. If an obstacle is detected within the predefined threshold distance  50 cm, the Arduino activates the buzzer and vibration motor to warn the user.



\## Getting Started



\### Prerequisites

\- \[Arduino IDE](https://arduino.cc) installed on your computer.

\- USB Type-A to Type-B cable to connect the Arduino Uno.



\### Installation \& Upload

1\. Clone this repository:

&#x20;  ```bash

&#x20;  git clone https://github.com

&#x20;  ```

2\. Open `smart\_walking\_stick.ino` in the \*\*Arduino IDE\*\*.

3\. Go to \*\*Tools > Board\*\* and select \*\*Arduino Uno\*\*.

4\. Go to \*\*Tools > Port\*\* and select the COM port connected to your Arduino.

5\. Click \*\*Upload\*\* (`Ctrl + U`) to flash the code onto the board.



\## Future Improvements

\- Add GPS and GSM modules to send emergency SOS locations via SMS.

\- Integrate a water/moisture sensor at the tip of the stick to detect wet floors or puddles.

\- Design a 3D-printed waterproof enclosure for the electronics.



