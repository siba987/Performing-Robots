## Performing-Robots

The link to a performance that I think exemplifies performing robots: http://www.nyuad-artscenter.org/en_US/events/2016/huang-yi-and-kuka/
Titled "HUANG YI & KUKA", it is a dance featuring Taiwanese choreographer Huang Yi, and shows the evolving relationship between humans and robots. It is an autonomous performance, but leaves the audience enthralled.

------------- PROGRESS ON GROUP PROJECT CONCEPT------------------------------------------


10/31/2017
I am working with Mei for our end-of-semester project. Our concept is the intersection of nature and technology. 
-Concept:
our idea is to have the robot, or actor, inhabit the nature which is a constatntly changing environment with
changing dimensions of connected wires which encapsulates the nature engulfing the city. 
The interaction between the actor and the software art is envisioned by the actoir's movement influencing the movement across the plane, 
and also in the movement of the robot in some way affecting the different dimensions of the software environment (i.e. mesh paterns).

-Size and Mechanical structure
We have a computer image of fixed dimensions and we think we can get a similar image with pixels mapped to the computer-based image and when the robot-cum-actor moves in the real world, there will  be a computer simulation (?) imitating and following the movements.

-Electrical and electronics
We will be needing accelerometers to record the acceleration of the robot, and possibly motion sesnors to detect chnages which will actuate the patterns. For communication, we think we can use two Arduinos with Bluetooth enabled.

------------------------------------------------------PLAN FOR THE COMING WEEKS---------------------------------------
Thursday November 16 
-> finish contruction of balancing robot, test that computer tracking is working.
-> prepare small ramps for the landmarks

## Tuesday Nov 21st
* Laser cut chassis for prototyping of balancing robot
* make circuit on breadboard for testing
# *Note*: need accelerometer, gyroscope

## Thursday Nov 23
### Control from MATLAB
*	Assemble the parts of the circuit (2 H-bridges| motor shield), accelerometer, gyroscope, 2x DC motors_
*	Laser cut chassis (make wider?)
*	Write and test code in Arduino/Matlab:
  o	Find out if Matlab code can be saved to Arduino for balancing
  o	Implement motion along x-, y-directions by modifying model

## Tuesday Nov 28
### Implementation
*	Test that all devices are communicating with each other properly
*	Buttons on Bluetooth controller to send messages to the robot
*	Power- check whether 6V battery enough for both DC motors
### The environment
*	Write and test code in Arduino:
* decide on word generation (i.e. when robot passes over ramp)

## Thursday Dec 5
* test power duration, control of robot moving
* make sure smooth running
