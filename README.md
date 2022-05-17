# BLDC--PIC16F887
Controlling brushless DC motor with PIC16F887
The goal of this project is to control an Brushless DC (BLDC) motor using a PIC16F887 microcontroller using Back EMF to determine rotor position (the motor I purchased does not have sensors, such as Hall Effect sensors). #U pon successful prototyping, I hope to create a custom PCB to aid in conntrolling larger motors (e.g. 40V motor from electric chainsaw). The following material are needed for this project (also see BOM tab of "xxxxxxxxxxxxxxxxxxxxxxx" spreadsheet):

PIC16F887 microcontroller

Brushless DC motor (not sensored, though adaptation could be made relatively easily to incorporate this is in sensored motor)

## 6 x N-type mosfet 

## 3 x Gate driver IC 

6 x 33k ohm resistor

3 x 10k ohm resistor

6 x 10 ohm resistor

3 x IN4148 diode

3 x 10uF capacitor

3 x 2.2uF capacitor

20 MHz crystal oscillator

2 x 22pF ceramic capacitor

10k ohm potentiometer


This has been done many times before, just not necessarily my way; additional examples:
https://simple-circuit.com/pic16f887-sensorless-brushless-motor-control/
