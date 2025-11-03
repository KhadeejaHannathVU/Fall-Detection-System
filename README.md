# Fall Detection System

## Description
The *Fall Detection System* is a sensor-based embedded project developed to detect sudden falls using an *MPU6050 accelerometer and gyroscope sensor* integrated with an *Arduino Nano* microcontroller.  
The system continuously monitors body motion and acceleration to detect any sudden impact or change in orientation that may indicate a fall. When such an event is detected, the system immediately triggers an alert through a *buzzer or LED* to notify nearby individuals.

This project provides a *low-cost, compact, and reliable safety solution* for elderly people and individuals with mobility challenges. It demonstrates how motion sensors can be used for real-time safety applications.

##  Components Used
- Arduino Nano  
- MPU6050 Accelerometer & Gyroscope Module  
- Buzzer or LED for Alert  
- Breadboard and Jumper Wires  
- Power Supply (Battery)

## Working Principle
The *MPU6050* sensor continuously measures acceleration and angular velocity.  
When the Arduino Nano detects an *abrupt change in acceleration or tilt* beyond a certain threshold, it interprets this as a possible fall event.  
The system then activates a *buzzer or LED* as a warning signal.  

This helps provide immediate awareness of accidents, reducing the delay in assistance.  
In future versions, the design can be expanded to include *IoT features* (like GSM or Wi-Fi modules) to send alerts via SMS or cloud notification.

## Features
- Real-time motion and fall detection  
- Compact and low power consumption  
- Easy to implement and cost-effective  
- Can be upgraded to IoT-based alert system  

## Future Improvements
- Integration of *GSM module* for SMS-based alerts  
- Addition of *Wi-Fi or Bluetooth* for IoT connectivity  
- Development of a *mobile app interface*  
- Calibration for improved fall detection accuracy  

## Circuit Description
- The *MPU6050* sensor connects to the Arduino Nano via *I2C communication* (SDA and SCL pins).  
- The *buzzer/LED* is connected to a digital output pin to indicate a detected fall.  
- The Arduino continuously reads sensor data, analyzes it, and triggers the output alert when the threshold is reached.  

## Team Members
- Diya Ferose T T ()  
- Khadeeja Hannath V U (https://github.com/KhadeejaHannathVU)  
- Krishnapriya S ()  
- Sana P M ()  




