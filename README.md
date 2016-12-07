 # Remote Controlled Arduino Hovercraft [v2.0]
====================================
The point of making this repository is to explain how we made our hovercraft using arduino, which difficulties we faced and how we solved them. We made this hovercraft as our final project for CS 207.<br/>
Hovercraft is a vehicle which can hover over all the surfaces with the help of the air cushion below it. It can run on water, land, snow, etc. As I said it hovers on the surfaces, it has a light weight chasis which keeps it floating.<br/>
Our group had a common interest in making something remote-controlled. But as rc cars are too common so we all decided to pick up something different and came up with an idea of making an arduino remote controlled hovercraft. It seemed easy at first but later on we found it challenging and interesting.<br/>
The hovercraft looks like this when it was completed: <br/>
<br/>
![alt text][pic1]
[pic1]:https://github.com/preetpancholi/Hovercraft/blob/master/img/Everything%20final.PNG "Logo Title Text 2"
Repository Contents
============
Here's where you'll find a map of all the top-level contents:

* **/src** - Here's where you will find the code which we used to control the hovercraft
* **/hardware** - I have tried my best to make it clean! Sketch for H-bridge and motors
* **/libraries** - USB Host Shield libraries that are needed to build the hovercraft.
* **/img** - This is where you can find all the images related to hovercraft.
* **/README.md** - The file you're reading now! :-D

Requirements and Materials
============

This is where you will find that what sort of libraries are required and what sort of hardware is needed:

Dependencies:
* Arduino-UNO 
* https://www.amazon.ca/Arduino-Uno-Microcontroller-SMD-Model/dp/B008GRTSV6
* Arduino USB Host Shield 
* http://www.robotshop.com/ca/en/arduino-usb-host-shield.html?gclid=CjwKEAiAg5_CBRDo4o6e4o3NtG0SJAB-IatYOHAoyhW1VlyurgXxTApgnlgyzCqal-MvRFpNHdKGIRoCqSHw_wcB
* H-Bridge 
* https://solarbotics.com/product/l293d/?gclid=CjwKEAiAg5_CBRDo4o6e4o3NtG0SJAB-IatYHCOKZk91KzJh7PA451i0HpqQ7O8ZTxV-7WjfU93FaRoCbKHw_wcB
* important libraries that need to be installed
* USB Host Shield updated library! (I have uploaded the library but it is incomplete, so download it from the link!)
* https://github.com/felis/USB_Host_Shield_2.0

Bill of Materials:
* Bunch of Jumper Wires
* 5 x 9v Eveready Gold batteries (Yes! Precisely! It should be Eveready Gold)
* 1 x Breadboard
* 1 x Controller (Any kind! You can find code for every controller in library)
* 2 x High powered motors
* 1 x Servo
* 1 x H-Bridge
* 1 x Arduino-UNO
* 1 x USB Host Shield
* 2 x Propellors
* 1 x Duct Tape
* 1 x Styrofoam (3ft x 3ft)
* 1 x Glue Gun
Build Instructions
==================

Here is where you can find specific instructions about how the hovercraft is built. Also I have included some schematics for the H bridge, USB shield and arduino: 

![alt text][pic2]

[pic2]: https://github.com/preetpancholi/Hovercraft/blob/master/img/All%20the%20material%20with%20motor%20shield.JPG  "Ignore the motor shield"
And a breadboard view is also a good idea. It gives the potential user a better idea of how to put the thing together. So we'll throw one in here as well. 

![alt text][pic3]

[pic3]: https://github.com/preetpancholi/Hovercraft/blob/master/img/H%20bridge.JPG "Look at schematic for better explanation"

![alt_text][pic4]
  
[pic4]: https://github.com/preetpancholi/Hovercraft/blob/master/img/Capture.JPG "Schematic"


