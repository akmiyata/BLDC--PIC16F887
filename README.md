# Controlling a brushless DC motor
The goal of this project is to control an Brushless DC (BLDC) motor using a PIC16F887 microcontroller (though I'm verifying circuitry with a PSoC 5) and the concept of Back EMF to determine rotor position (the motor I purchased does not have Hall Effect sensors). Upon successful prototyping, I hope have created design that can be turned into a custom PCB to aid in controlling larger motors. The following materials are needed for this project (also see BOM tab of "Dirt Sifter.xls" spreadsheet):

PIC16F887 microcontroller

Brushless DC motor (not sensored, though adaptation could be made relatively easily to incorporate this is in sensored motor)

- 6 x N-type mosfet (IRLZ44NPBF)
- 3 x Gate driver IC (IR2101)
- 6 x 33k ohm resistor 
- 3 x 10k ohm resistor
- 6 x 10 ohm resistor
- 3 x IN4148 diode
- 2 x 22pF ceramic capacitor
- 3 x 2.2uF capacitor
- 3 x 10uF capacitor
- 20 MHz crystal oscillator
- 10k ohm potentiometer</ul>

This has been done many times before, though usually with an arduino; here are links to examples if you want to go that route:
- https://www.youtube.com/watch?v=dyjo_ggEtVU
- https://www.youtube.com/watch?v=F8l9Z1HGYcU&t
