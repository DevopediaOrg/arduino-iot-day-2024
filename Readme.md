<img src="http://www.devopedia.org/images/logo/logo-name-reg-h.png" width="400" align="right">

**Organized by Devopedia Foundation**<br>**23 March @ Bangalore**<br><br><br>

## Overview

Arduino Day 2024 is an event celebrated worldwide. Official dates are 21-23 March. See https://days.arduino.cc/about. Arduino as an embedded platform started in 2005. The first Arduino Day was organized on 29th March 2014. Since then the event has been held every year. It's an event where people meet to share their Arduino projects, learn new stuff and exchange ideas. Beginners get inspired to take up more challenging projects. Experts get a chance to tell their stories!

Devopedia's event is not limited to Arduino boards. Some demos will use Raspberry Pi, MSP430 LaunchPad, NodeMcu, etc. This event is not just for IoT experts. Even beginners are given a platform to demo simple projects and learn from others. Almost all demos will feature open source components. Devopedia will share sufficient details of each demo so that visitors can go back and try them out on their own. Remote participants will share their demos as pre-recorded videos, which we'll play at the venue.


## Demos

This repository shares sufficient details of each demo so that others can try them out on their own. Following are the projects to be demonstrated:

| Demo Title | About the Demo | Demo Presenters |
| --- | --- | --- |
| [Desktop 4G private network using open source software and bladeRF SDR](4G-Private-Network) | I used open-source software stacks for 4G network and low-cost Software Defined Radio. A private 5G network is setup. This can attach commercial off-the-shelf 4G mobiles carrying test SIM. This demonstrates a fully 3GPP compliant network and one is able to share internet connectivity with mobile using 4G link. All components of a commercial network are there. This type of setup is very useful for R&D, academicians and student community who can try out various experiments and design and use their own algorithms and modules. | **Nitin Jain**<br>I am a wireless and signal processing engineer. Fully hands on even after working in industry for more than 25 years. I am a big open-source fan. I have acquired interest in using general purpose SDR's and using those trying to build wireless systems at home. My areas of interest are wireless, DSP systems and SDR's. I am associated with IOS-MCN (Using Open source 5G network), a project based in IISc, Bangalore. |
| [5G network-in-a-box using open source software](5G-NIB) | Network in a Box (NIB) is a comprehensive product that supports a ready to deploy 5G network solution for R&D purpose in LAB environment.<p>This product is integrated into a single unit with all the hardware and software required to support 5G standalone (SA), 5G non-standalone (NSA).<p>The NIB includes a 5G Core, gNodeB and other network components in compliance with 3GPP standards to provide comprehensive support for voice, video , text and packet data services.<p>Hardwares Used<br>1) Intel i9 Processor with AVX 512 support<br>2) USRP B210 SDR<br>3) 5G Handset<br>4) Test Sim<p>Softwares Used<br>1) Openairinterface 5G<br>2) Open5GS | **Subhra Prakash Giri**<br>18+ Years of working experience. Working as Co-founder of Tejocell Wireless Pvt Ltd. Currently pursuing PhD at Amrita School of Engineering Bangalore.<br><br>**Ravuri Venkata Ramana**<br>30+ Years of working experience. Working as Founder of Tejocell Wireless Pvt Ltd. |
| [AirCraft3D drone-based aerial mapping](Aerial-Mapping) | Drones for site mapping and surveying. We aim to build 3D maps and models of mining sites, military base, urban areas, sea shores etc. providing valuable data for planning and monitoring operations.<br><br>Hardware: Drone with Analog camera with VTX RC links<br>Software: 3D modelling using Metashape | **Nikhita Inamdar**<br>Student of Reva University, B.Tech in AIML. Passion for technology in deep learning, quantum computing, UAV, Augmented reality and video games.<br><br>**Likhit M M**<br>At the age of 9, I was fascinated by computers, their working and just how much we could make a difference in this world using the various technologies it opens up to. Hence my interests include a deep involvement in the digital world along with Rollerblading along with multiple sports. I am currently doing my bachelors in technology at the esteemed Reva University. My specialization is in Artificial Intelligence and Machine Learning.<br><br>**Deepthi Devaraj**<br>I'm a 3rd year AIML student at REVA University. My hobbies are painting, sketching and I'm a voracious reader. I absolutely love spending time on learning new skills and improving myself in every aspect.So far I've worked on web application projects mainly focusing on frontend, I have participated in SIH hackathon 2023 and Google Solutions Challenge 2024 organised by GDSC.<br><br>**Jamuna KC**<br>studying AIML engineering at Reva University, I am really interested in ML domain and it's vast application to enhance the human resource efficiency. I've done numerous projects related to ML, and also have completed my internship as data analyst. Apart from making interesting projects my hobbies include playing guitar, sketching and teaching. |
| [Animal intrusion detection](Animal-Intrusion-Detection) | Hardware - PIR Sensor, Ultrasonic sensor, Arduino Uno, Web camera<br>Software - SMTP protocol | We are students of Christ (Deemed to be University) in 3rd year B.Tech IT.<br><br>**Parekh Hetvi Vimal**<br>Hobbies - painting, sketching. Interests - image processing, website development.<br><br>**Sonali Subhasmita Das**<br>Hobbies - dancing, reading. Interests - data analysis, Android development, web development.<br><br>**Dikshita Sen**<br>Hobbies - dancing, painting, baking. Interests - cloud computing, AWS, networking. |
| [Playing any Carnatic raga using only white keys of keyboard](Configurable-Music-Keyboard) | Video: https://www.youtube.com/watch?v=toerxPBxZXk<br><br>A music keyboard has 12 keys per octave; 7 white keys and 5 black keys. Every Carnatic music Raga uses just seven out these twelve keys. There are exceptions, of course, where a raga can use more than seven. But here we are concerned with those which use only seven. For example, the raga Shankarabharana uses all seven white keys while the raga Kalyani uses six white keys and one black key. It is difficult for a beginner to remember which keys are to be used for which Raga. It takes a long time before one can become proficient with the keys to be used for every raga. It becomes a much bigger problem if the Shruti is to be changed according to the vocalist.<p>The basic keyboard has a certain default assignment of notes to each key. What I do is to re-assign those notes depending on the Raga.<p>When a key is pressed on the keyboard, a set of data is sent out through the MIDI interface. The data contains info about which key and what velocity with which it was struck, etc. I use Arduino to receive this data and change the note depending on the selected raga and send it back to the keyboard. This data then passes on the music generating section of the keyboard. So, instead of hearing the default note of the key, you hear the modified note.<p>The Raga selection is conveyed to the Arduino through serial port commands.<p>I use an android phone to connect to the Arduino. It serves the dual purpose of powering the Arduino as well as communicating with the Serial port.<p>I also have a Bluetooth interface for wireless communication but then the Arduino has to be powered separately. | **K. P. Sundararajan**<br>Hobbyist  & Tinkerer |
| [EnviroSense](EnviroSense) | A comprehensive IoT sensing project that provides an alternative for Lora-Wan technology and with ESP Now protocol that's compatible with all mainstream Espressif made boards. Our project sends humidity and temperature using the protocol and the values are shown locally using and especially LCD resistive touch display. The use of ESP now allows establishment of Mesh network which isn't possible with LoRa. This can be used for various sensing applications. | **G Charukesh, Jai Vishnu D K, Gautham Seetharaman, Kashish Pawar, G Saumya**<br>Arduino Development, Drawing, Designing, Reading, Software development, Website development, Video editing |
| [Forest management system](Forest-Management-System) | With the increasing threat to global forests due to climate change, deforestation, and human-wildlife conflicts, there's a critical need for advanced monitoring systems to safeguard these vital ecosystems. The Forest Monitoring System aims to address this need by integrating IoT technology to efficiently monitor various parameters crucial for forest management and protection.<br><br>Hardware:<br>1. ESP32<br>2. IR motion sensors<br>3. Buzzer<br>4. Water level sensor<br>5. MQ2<br><br>Software:-<br>1. Blynk<br>2. Arduino IDE<br><br>Upon implementation, the Forest Monitoring System successfully demonstrated its ability to accurately measure and record rainfall, water levels, and animal proximity while effectively detecting forest fire breakout events. | Third year students of B.Tech CSE at Christ (Deemed to be University).<br><br>**Aryaman Kant**<br>Apart from the tech, I am a sports enthusiast. Currently working on many projects in the domain of DSA and artificial intelligence.<br><br>**Avichal Baweja**<br>My hobbies are listening to music and playing cricket. My field of interest is in AI/ML.<br><br>**Avinash Bhalla**<br>Hobbies: collecting notes and coins. Interests: making apps (e-commerce ), full stack web developer.<br><br>**Kushagra Singhal**<br>Hobbies: star gazing, trekking. Interests: web dev, app dev and DevOps. |
| [Garage door monitoring system](Garage-Door-Monitoring) | The project utilizes three main hardware components: ESP8266, PIR sensor, and a motor. The system is designed to automatically open the door in response to detected motion using the PIR sensor. Additionally, control over the door is facilitated through the Blynk dashboard, where users can manually open and close the door according to their requirements. This setup allows for both automated and manual operation of the door, providing flexibility and convenience for users. | **Pari Agarwal, Shibadri Mukherjee, Rashi Dubey, Nibin Varughese Alex**<br><br>We are students of Christ (Deemed to be University), pursuing B.Tech CSE in our pre-final year. We have done this project as a part of our coursework. Our project domain is automated garage door system. Our interest lies in the field of artificial intelligence and automation. |
| [Ambient light sensing and LCD display](LDR-LCD-2x16) | Using a Light Dependent Resistor (LDR) we sense the ambient lighting level. This is displayed on an LCD in terms of voltage and resistance. This demo is with TI MSP430F5529 LaunchPad but it can be with Arduino Uno as well. See the code for which pins of the Arduino Uno to use. Some concepts learned in this demo:<br>- Analog input<br>- Voltage divider concept<br>- To simplify interfacing to the LCD, we use the LiquidCrystal library: https://github.com/arduino-libraries/LiquidCrystal | **Hardhik Kumar Sivam**<br>Completed 10th CBSE |
| [Ambient temperature sensing and 7-segment LED display](LM35-7Segx3) | Using LM35 sensor we read the ambient temperature. We display this on three 7-segment LEDs. To reduce the number of wires from controller board to LEDs, we use a shift register. We light up one LED at a time, thus minimizing current draw. We use only one resistor on the common cathode terminal. We show this demo with TI MSP430F5529 LaunchPad but we're including the wiring connections for Arduino Uno as well. | **Siddharth Aarthi**<br>Completed 10th CBSE |
| [Power optimization and automation in industries](Power-Optimization-Automation-Industries) | Video: https://www.youtube.com/watch?v=rmyLAtAcKKw<br><br>Developing an AI-powered energy management system for industrial commercial facilities to optimize energy consumption using AGI-Enhanced Time and Weather-Based Lighting and HVAC Control Systems in Industries. By weather API's data it understands the weather conditions and turn on or off selected lights automatically.<br><br>Tools required: Arduino Uno, Python, LED lights, weather API and required connecting cables. | Students at Reva University.<br><br>**Mohammed Haroon**<br>I am pursuing my bachelor's in Artificial Intelligence and Machine Learning and my interests are in machine learning , computer vision, team building and entrepreneurship<br><br>**Supriya M**<br>Studying AI&ML with strong communication skills and profound knowledge in the backend.<br><br>**Leon S B**<br>I am pursuing my bachelor's in Artificial Intelligence and Machine Learning and my interests are in Artificial intelligence , python machine learning , computer vision<br><br>**Taj Unnisa**<br>I am Pursuing my Bachelor's degree in Electronics and communication engineering. My fields of interests are Digital communication, IoT, Verilog and Digital electronics. |
| [Robot Vacuum Cleaner](Robot-Vacuum-Cleaner) | Introducing our IoT-enabled vacuum cleaner, designed to effortlessly maintain cleanliness in your home or office space. Equipped with advanced obstacle avoidance technology, this intelligent device navigates seamlessly around furniture, walls, and other obstacles, ensuring efficient cleaning without any manual intervention.<br><br>Powered by sophisticated sensors and algorithms, the vacuum cleaner detects obstacles in its path and adjusts its trajectory in real-time to avoid collisions, preventing any potential damage to furniture or itself. Whether it's manoeuvring around chairs, tables, or tight corners, this smart vacuum ensures thorough cleaning without getting stuck or causing disruptions.<br><br>In addition to its obstacle avoidance capabilities, our IoT vacuum cleaner is highly effective at removing dust, dirt, and debris from various surfaces. Equipped with powerful suction mechanisms and adjustable cleaning modes, it efficiently eliminates allergens, pet hair, and other particles, leaving your floors spotless and hygienic.<br><br>Through seamless integration with your smartphone or tablet via a dedicated mobile app, you can conveniently schedule cleaning sessions, monitor the vacuum's progress in real-time, and customize cleaning preferences from anywhere, at any time. This level of control and accessibility empowers you to maintain a clean environment effortlessly, even when you're away from home.<br><br>With its combination of intelligent obstacle avoidance technology and powerful cleaning performance, our IoT vacuum cleaner offers a convenient solution for busy individuals and families, ensuring hassle-free maintenance of your living or working spaces. Say goodbye to tedious cleaning tasks and hello to a smarter, more efficient cleaning experience with our innovative IoT vacuum cleaner. | **Shreenidhi S R, Disha M, Vaishali Y, Sukruth M S**<br>We are from Reva University, 4th semester CSIT. |
| [FM receiver on Raspberry Pi using GNU Radio](SDR-WBFM-RX-RPI) | GNU Radio is an open source platform for signal processing. It can be used to implement software-defined radio (SDR) projects. In this project, we take an SDR approach to building an FM receiver on Raspberry Pi. GNU Radio is a wonderful learning platform for students of signal processing. We can change the parameters of different parts of the receiver and study how these affect the quality of the audio.<p>For this project, any 64-bit Raspberry Pi version can be used. Any display or speaker can be used. We used the following:<br>- Raspberry Pi 5 with 8 GB RAM and 8 GB SD card: https://devopedia.org/raspberry-pi<br>- Power supply adapter for Raspberry Pi<br>- OS: (a) PiSDR used in this demo: https://github.com/luigifcruz/pisdr-image (b) Dragon OS is an alternative: https://cemaxecuter.com/<br>- BalenaEtcher to load the OS image on the Raspberry Pi: https://www.balena.io/etcher/<br>- GNU Radio Companion, v3.10.9.0-rc1 (comes pre-installed with PiSDR)<br>- NooElec (an RTL-SDR cousin) with antenna: https://www.amazon.in/NooElec-USB-Stick-RTL2832U-R820T/dp/B009U7WZCA<br>- HDMI video capture device to interface to Nexus Android tablet: https://www.amazon.in/gp/product/B0BK1KG825/<br>- Asus Google Nexus 7 tablet for display: https://www.gsmarena.com/asus_google_nexus_7-4850.php<br>- Tribit Bluetooth speaker (since audio on the Nexus tablet is weak for the demo)<br>- USB Camera Android app on Nexus tablet: https://play.google.com/store/apps/details?id=com.shenyaocn.android.usbcamera&hl=en&gl=US<br>- Necessary connectors, cables and adapters | **Arvind Padmanabhan**<br>Founder Trustee at Devopedia Foundation. Worked in telecom domain. Self-published a book in 2013. Passionate about writing, training, mentoring and sharing knowledge. |
| [Smart bin](Smart-Bin) | Smart bins are a network of interconnected intelligent waste-bins, each under the surveillance of a Cloud Server. These advanced bins incorporate real-time garbage-level monitoring functionalities. These bins utilize sensors to track fill levels. This innovative system optimizes waste collection by ensuring timely disposal and promotes hygiene & convenienceÂ forÂ users, further linking it to a database to get a clear view about the statistics of waste collection thereby enhancing route optimization.<br><br>Technologies and tools used: Sensors, Microcontrollers (Raspberry Pi), Communication Modules (Wi-Fi), Power Management (Battery Technology)<br><br>Frameworks: IoT Frameworks, Cloud Services, Data Visualization | **Anusha N**<br>I like to work in silence and love reading books. Technical aspect wise I'm interested in creating a personalized mental health support model to help people.<br><br>**Karunya G**<br>I'm into dance and trekking. I'm working on urban gardening and I'm into edge technology.<br><br>**Esha Jenifer**<br>I'm interested in singing and videography. I want to create machine learning projects to automate time-taking tasks.<br><br>**Panchami H P**<br>I'm interested in gardening and music. I prefer back-end related coding.	 |
| [Smart fan](Smart-Fan) | With summer around the corner, we run the fan at full speed at night as the temperature is high. As the night progresses, the ambient temperature drops but the fan is still running at full speed. This wastes energy and also makes us uncomfortable. This project aims at controlling the speed of the fan linearly with the temperature.<br><br>Components used in this project: Arduino, DC Fan, LCD Display, Temperature Sensor<br>Software: Arduino IDE<br><br>In the future, this can be implemented as a smart regulator for AC fans, which is currently depicted with a small DC fan. | **Niyathi N K**<br>A budding programmer, getting into grade 11. Interested in software and embedded programming. |
| [AI speech recognition with TensorFlow Lite](SpeechRecognition-SparkfunEdge) | Using the following hardware, we will showcase a speech detector on a microcontroller:<br>- Linux computer<br>- SparkFun Edge board contains a Apollo3 Blue microcontroller<br>- USB-to-Serial adapter based on the CH340C and USB-C<p>The AI model on the board is trained to recognize the words "yes" and "no". It communicates its results by lighting colored LEDs. | **Meenakshi S**<br>Meenakshi is a principal cloud tech professional at Sumeru software solutions, with abiding interest in AI. A couple of applications she has worked on 1) Devopedia's Named Entity Recognizer and 2) Re-engineering Deformable Convolution Model in TensorFlow (presented at Google). |
| [Ultrasonic radar system using Arduino](Ultrasonic-Radar-System) | Arduino Uno, sonar sensor, servo motor, jumper wires and a breadboard are used specifically in this project as hardware components. | **Bhadriraju Krishna Kaustubh, Gagana Shree S, B Adithya, Malavika G**<br>All the four demo presenters are interested in the field of IoT. We have done a remote project in the first semester of the college. After that we didn't have the opportunity to explore IoT. |
| Moisture sensor based water pump for plant watering | We use a soil moisture sensor to monitor the moisture level in the soil. If the moisture level falls below a certain value, the water pump is triggered automatically to irrigate the soil. | **Nihar Vishwas, Mahira Karan** |
| Voice controlled robot car | I use speech recognition to control a toy robot car. | **Shaurya Max Havinhal** |
| Automatic sanitizer dispenser | I built this to dispense sanitizer when someone places their hands at the tap. | **Sumer Viraj Mirthinti** |


## Archived

The following will not be presented live at the venue. Instead, see their pre-recorded videos.

| Demo Title | About the Demo | Demo Presenters |
| --- | --- | --- |
| [Disaster management system](Disaster-Management-System) | Video: https://youtu.be/wqAr_TXyGec<br><br>The IoT-based Disaster Management System aims to detect and monitor various environmental parameters using different sensors, providing real-time data visualization and alerting mechanisms through a Node-RED dashboard. This system incorporates four types of sensors: rainfall sensor, water level sensor, temperature sensor, and smoke sensor, each serving a specific purpose in disaster detection and prevention.<br><br>Hardware Used:<br>1. Rainfall Sensor<br>2. Water Level Sensor<br>3. Temperature Sensor<br>4. Smoke Sensor<br><br>Software Used:<br>1. Node-RED<br>2. Dashboard for visualization<br>3. Email node for notification.<br><br>Description:<br>1. Rainfall Sensor: The four rainfall sensors are strategically placed to detect raindrops. These sensors measure the intensity of rainfall in different areas and provide data to the IoT device.<br>2. Water Level Sensor: Installed in dams or reservoirs, the water level sensor continuously monitors water levels. It ensures early detection of potential flooding situations or water level abnormalities, allowing timely preventive actions.<br>3. Temperature Sensor: Designed to detect temperature variations, this sensor helps identify fire incidents or abnormal temperature increases in critical areas. Rapid temperature changes can indicate fire outbreaks, enabling swift response measures.<br>4. Smoke Sensor: Placed in industrial settings or areas prone to fires, the smoke sensor detects excessive smoke emissions. Upon detection, it triggers alerts to prevent potential fire hazards or industrial accidents.<br><br>Node-RED Implementation:<br>1. Utilizing Node-RED, the IoT device collects data from all sensors.<br>2. Node-RED dashboard nodes are configured to visualize real-time sensor data, providing stakeholders with a comprehensive overview of environmental conditions.<br>3. Threshold values are set for the smoke sensor. If these values are exceeded, Node-RED triggers an email notification using the email node, alerting designated personnel about potential fire hazards.<br><br>Possible Applications:<br>1. Disaster Management: Early detection of rainfall, water level changes, temperature anomalies, and smoke emissions helps in disaster preparedness and mitigation strategies.<br>2. Industrial Safety: Monitoring smoke emissions in industrial environments aids in preventing fire accidents and ensuring workplace safety.<br>3. Environmental Monitoring: Continuous monitoring of rainfall and water levels contributes to environmental conservation efforts, especially in flood-prone areas.<br>4. Urban Planning: Data collected from these sensors can inform urban planning decisions related to drainage systems, infrastructure development, and disaster resilience. | **Lida Anna Joshy**<br>I am currently enrolled as a third-year student pursuing a Bachelor of Technology in Computer Science( honours in AIML) and Engineering at Christ Deemed to be University. My primary interest lies in the development of visually appealing and user-friendly websites. Also, I am keen on exploring the application of machine learning techniques to address complex challenges.<br><br>**Nikita Tanni**<br>I am currently studying in B.Tech in Computer Science Engineering honours in AIML. I am interested in the world of technology and engineering, driven by a passion for innovation and problem-solving. My primary focus is to develop innovate things and make world better and digital.<br><br>**Anagha Mohan**<br>I am currently enrolled as a third-year student pursuing a Bachelor of Technology in Computer Science and Engineering at Christ Deemed to be University. My interest lies on the user-friendly websites and software testing. I am looking forward to learn more practical experiences.<br><br>**Agepati Jahnavi**<br>I am currently enrolled as a full time student in Christ deemed to be University. I am from Computer Science background pursuing honours in Data Analytics completing my 3rd year of BTech. I am a student who is enthusiastic about learning various aspects in developing technology, where I can apply my skills for the constant growth of the organization. Apart from my studies I have interest in arts and dance. |
