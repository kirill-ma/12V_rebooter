# Device that reboots my CCTV camera daily

Some of security devices are powered from 12V directly. Some of them hangs sometimes. This device perform everyday rebooting routine and utilizes a STM8 devboard I have.

![pic0](https://github.com/kirill-ma/12V_rebooter/blob/main/Pictures/0.jpg)

Relay is Normally-Closed. And it opens sometimes to break the device's powering.  

### Requirements:
- [STM8S103 breakout board](https://tenbaht.github.io/sduino/hardware/stm8blue/)
- [5V Single-Channel Relay Module](https://components101.com/switches/5v-single-channel-relay-module-pinout-features-applications-working-datasheet)
- 1n4007 diode

### Assembly:
Please see the pictures, you'll get the point:
![pic1](https://github.com/kirill-ma/12V_rebooter/blob/main/Pictures/1.jpg)
![pic2](https://github.com/kirill-ma/12V_rebooter/blob/main/Pictures/2.jpg)
![pic3](https://github.com/kirill-ma/12V_rebooter/blob/main/Pictures/3.jpg)
![pic4](https://github.com/kirill-ma/12V_rebooter/blob/main/Pictures/4.jpg)
![pic5](https://github.com/kirill-ma/12V_rebooter/blob/main/Pictures/5.jpg)
![pic6](https://github.com/kirill-ma/12V_rebooter/blob/main/Pictures/6.jpg)

**Don't forget to make the cut on the relay board!**

You can use B7000 glue and 3D-print model I provided in 3D_print/

### Code:
I used VScode + PlatformIO + Arduino framework to create it.
You can change reboot period and break time in main.c
