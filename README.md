# esphome-usb-grow-lights
Work in progress to develop a new custom PCB to drive usb powered grow lights.

Project logs posted at https://hackaday.io/project/186050-iot-the-usb-grow-lights.

led_timer_demo.ino simple Arduino sketch to test circuit operation.

basic config.yaml ESPhome is configuration file for control the lights via home assistant and binary sensors for the button states.

Rev1 of the PCB has been tested.  Changes made and Rev2 is being fabricated.

The 5V LED bulb drew 900mA at 5V.  Testing a stock control board shows the PWM frequency was 60 Hz with max duty cycle of 15%.  This limits the current from the power supply and doesn't drive the LEDs too hard to prolong lifespan.

TODO:

- Build Rev2 PCBs for testing.

- Order bigger fuses.  500mA was causing trips.
