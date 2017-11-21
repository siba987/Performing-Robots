# Performing robots

## Detailed plan for your actor
### Areas of greatest risk or uncertainty
1.	Can we implement directionality of the robot?
2.	Computer vision – we have identified that we can track blobs on the computer using the openFrameworks software, and need to verify in the real world.
3.	Reliance on camera
4.	Robot sensing “steps” (using CV entirely), needs override in case detection doesn’t occur

###	Mechanical
1.	3D print ramps as landmarks (maintain stability) -hardcorde
2.	Rubber traction wheels
3.	Breadboard/ PCB board
4.	Acrylic body
5.	universal hub mounts (Polulu) for optical encoders

###	Electronics
1.	Bluetooth controller (robot + openFrameworks)
2.	Accelerometer
3.	Gyroscope
4.	IR LED lights to be detected by IR camera
5.	Adafruit motor controller with max 1.2 A 
6.	Arduino Uno

###	Software
1.	Open frameworks (Open CV, and communication)
2.	Hardcode locations in the program
3.	send signal to computer and computer generates word

###	Power
1.	+12V power supply for motor
2.	5 V supply for Arduino Uno

###	Schedule (by week #)
1.	Decide on normal/ balancing robot (check possibility of going up/balance on slope). Decide where IR lights will be positioned in design
2.	Use laser cutting/wood materials to design aesthetics of robot. 
    Test with playtesting stage, and finalise robot-environment interactions
    
###	References
1.	http://www.brokking.net/yabr_main.html)
2. "Two-wheeled self-balancing robot" paper