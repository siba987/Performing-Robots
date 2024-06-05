# Performing-Robots

The link to a performance that I think exemplifies performing robots: http://www.nyuad-artscenter.org/en_US/events/2016/huang-yi-and-kuka/
Titled "HUANG YI & KUKA", it is a dance featuring Taiwanese choreographer Huang Yi, and shows the evolving relationship between humans and robots. It is an autonomous performance, but leaves the audience enthralled.

## PROGRESS ON GROUP PROJECT CONCEPT

Mei and I are collaborating on the end-of-semester project. Our concept is the intersection of nature and technology.

### Concept:
our idea is to have the robot, or actor, inhabit the nature which is a constatntly changing environment with
changing dimensions of connected wires which encapsulates the nature engulfing the city. 
The interaction between the actor and the software art is envisioned by the actoir's movement influencing the movement across the plane, 
and also in the movement of the robot in some way affecting the different dimensions of the software environment (i.e. mesh paterns).

### Size and Mechanical structure
We have a computer image of fixed dimensions and we think we can get a similar image with pixels mapped to the computer-based image and when the robot-cum-actor moves in the real world, there will  be a computer simulation (?) imitating and following the movements.

### Electrical and electronics
We will be needing accelerometers to record the acceleration of the robot, and possibly motion sesnors to detect chnages which will actuate the patterns. For communication, we think we can use two Arduinos with Bluetooth enabled.

## PLAN FOR THE COMING WEEKS
### Thursday November 16 
-> finish contruction of balancing robot, test that computer tracking is working.
-> prepare small ramps for the landmarks

### Tuesday Nov 21st
* Laser cut chassis for prototyping of balancing robot
* make circuit on breadboard for testing
*Note*: need accelerometer SN-ADXL 335-CV, gyroscope SN-ENC03R

### Sunday Dec 3
* Control from MATLAB (link:https://www.mathworks.com/help/control/examples/control-of-an-inverted-pendulum-on-a-cart.html?prodcode=RC&language=en)
*	Assemble the parts of the circuit: motor shield, 2x DC motors, PCB board
*	Laser cut chassis (make wider)
*	Write and test code in Arduino/Matlab:
  o	Find out if Matlab code can be saved to Arduino for line following
 
### Tuesday Dec 5
#### Implementation
*	Test that all devices are communicating with each other properly
*	Buttons on Bluetooth controller to send messages to the robot
*	Power- check whether 6V battery enough for both DC motors

## Final Documentation
### Concept: What personality did you want to portray in your actor? How did you use technology to accomplish this?
I wanted to portray a curious character, eager to learn about his/her surroundings. The concept was inspired by Google Street View. We wanted to simulate the first person view (FPV) with the robot.
I used Bluetooth LE technology to control the motions (back and forth, left right) to correlate the scenery with the movement of the robot.

### Discuss the materials and construction techniques. Why did you chose these? Knowing what you know now, would you have chosen different materials or techniques?
For this project, I chose an acrylic base and casing for my robot. at first i cut acrylic brackets to enclose the DC motors but it did not secure the wheels tightly so I swapped it to metal brackets. If I had to do it differently, I would have stuck with acrylic casing
### What did you have to learn in order to complete your project? How did you learn this?
Initially I had considered two ideas before I settled down on my idea to manually control the robot's movement. The initial idea did not fit in with the overarching theme of navigation, and so the idea was to use computer vision (software art) to track the movement and orientation of the robot. 


### Overview, describing the general operation

 **1. Electronic and electrical part of your project**
* For the electronics, i used the Arduino Uno with motorshield. Used two DC motors for motion, and separate battery packs for the motors and the Arduino. Toward the initial idea of making a line-following robot, I printed a PCB board using Fritzing but due to complications with the staging and implementation of this idea, I changed the idea to my current one.


 **2. Software part of your project**
* In my Arduino code, I implemented some basic controller functionalities which will allow me to move the robot to the desired location. Since I wanted to add character to the robot, this was the best way to go about it.
* Link to the program code: https://github.com/siba987/Performing-Robots/blob/master/Controller_v1


 **3. Mechanical part of your project**
The mechanical part of the project was simple enough-- I placed all my components on an acrylic base and used switches for the batteries to simplify the usability. The finished product can be see in the extra link to the photograph.

### What were the 3 most difficult parts of your project?
1. Deciding on a project idea (balancing -> line-following -> modification of line-following)
2. The wheels slipping on the acrylic base - changed to metal brackets based on Michael's advice.
3. Synchronizing the robot's movements with the visual projections 

### Knowing what you know now, what would you have done differently?
I would have planned the aesthetics in more details, to increase the complexity of the robot. I would also have added some extra effects to the robot such as blinking LED lights to indicate where it is moving, or which would blink when it has reached its destination(s). 

Schematic (follow link here: https://github.com/siba987/Performing-Robots/blob/master/FinalProject/schematic.PNG)

Extra photographs (link: https://github.com/siba987/Performing-Robots/blob/master/FinalProject/Finished%20piece.jpg)





