<h1 align="center">🚙 4x4 WiFi Controlled Robot Car (Arduino R4 WiFi + Blynk)</h1>

<p align="center">
A powerful 4-wheel drive robotic car controlled over WiFi using the Blynk IoT platform with independent motor speed control.
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Board-Arduino%20R4%20WiFi-blue">
  <img src="https://img.shields.io/badge/Drive-4x4%20Robot-green">
  <img src="https://img.shields.io/badge/Control-Blynk-orange">
  <img src="https://img.shields.io/badge/Type-Robotics-red">
</p>

---

<h2>📌 Project Overview</h2>

<p>
This project demonstrates a <b>4x4 WiFi-controlled robotic car</b> built using the 
<b>Arduino R4 WiFi</b> and dual <b>L298N motor drivers</b>.
</p>

<p>
The robot can be controlled remotely using the <b>Blynk mobile application</b>, allowing
real-time movement and speed control over the internet.
</p>

---

<h2>⚙️ Features</h2>

<ul>
<li>4-Wheel Drive System</li>
<li>WiFi Based Remote Control</li>
<li>Independent Motor Speed Control (PWM)</li>
<li>Blynk IoT Integration</li>
<li>Real-time Movement Control</li>
<li>High Torque Robot Platform</li>
</ul>

---

<h2>🧰 Hardware Components</h2>

<ul>
<li>Arduino R4 WiFi</li>
<li>2 × L298N Motor Drivers</li>
<li>4 × BO Motors</li>
<li>Robot Chassis / Mounting Plate</li>
<li>12V Battery</li>
<li>Jumper Wires</li>
</ul>

---

<h2>🔌 Hardware Wiring Guide</h2>

<h3>1️⃣ Mount Components</h3>
<ul>
<li>Fix Arduino, motor drivers, and battery on mounting plate.</li>
<li>Attach all four BO motors securely.</li>
</ul>

<h3>2️⃣ Connect Motors to Motor Drivers</h3>
<ul>
<li>Connect each motor output to L298N motor driver terminals.</li>
<li>Remove enable jumper pins from L298N.</li>
<li>Use jumper wires to connect enable pins to PWM pins on Arduino.</li>
<li>PWM pins are used for motor speed control.</li>
</ul>

<h3>3️⃣ Control Pins Connection</h3>
<ul>
<li>Remaining 4 control pins from each L298N connect to Arduino digital pins.</li>
<li>Repeat wiring for all four motors.</li>
</ul>

<h3>4️⃣ Power Connections</h3>

<ul>
<li>Use a <b>12V battery</b> for power supply.</li>
<li>Connect battery positive to:
  <ul>
    <li>12V input of both L298N drivers</li>
    <li>Arduino power jack</li>
  </ul>
</li>
<li>Connect all grounds together (Common Ground).</li>
</ul>

<p><b>⚠️ Important:</b> Always maintain common ground between Arduino and motor drivers.</p>

---

<h2>📱 Software & IoT Setup</h2>

<h3>1️⃣ Upload Code</h3>
<ul>
<li>Open Arduino IDE</li>
<li>Load project sketch</li>
<li>Select Arduino R4 WiFi board</li>
<li>Upload code</li>
</ul>

<h3>2️⃣ Configure Blynk</h3>

<ul>
<li>Create new project in Blynk App</li>
<li>Add joystick/button controls</li>
<li>Create Virtual Pin <b>V0</b></li>
<li>Copy Blynk Auth Token</li>
</ul>

<h3>3️⃣ Update Credentials in Code</h3>

<pre>
char auth[] = "BLYNK_AUTH_TOKEN";
char ssid[] = "WIFI_NAME";
char pass[] = "WIFI_PASSWORD";
</pre>

Upload again after editing credentials.

---

<h2>🚀 How It Works</h2>

<p align="center">
Blynk App → WiFi → Arduino R4 WiFi → L298N Drivers → Motors → Robot Movement
</p>

<ul>
<li>User sends command from mobile app.</li>
<li>Arduino receives command over WiFi.</li>
<li>PWM signals control motor direction and speed.</li>
<li>Robot moves accordingly.</li>
</ul>

---

<h2>📁 Project Structure</h2>

<pre>
4x4-Wifi-Robot-Car/
│
├── 4x4 Car Speed Control.ino
└── README.md
</pre>

---

<h2>✨ Applications</h2>

<ul>
<li>Robotics Learning Platform</li>
<li>WiFi Surveillance Robot Base</li>
<li>Autonomous Vehicle Prototype</li>
<li>Research & Educational Robotics</li>
</ul>

---

<h2>🔮 Future Improvements</h2>

<ul>
<li>Camera streaming module</li>
<li>Obstacle avoidance sensors</li>
<li>Autonomous navigation</li>
<li>Voice control integration</li>
<li>AI-based path planning</li>
</ul>

---

<h2>⭐ Support</h2>

<p>If you like this project, please give it a ⭐ on GitHub!</p>
