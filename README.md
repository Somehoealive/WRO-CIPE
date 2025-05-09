WRO robot  :D
Helo pls dont juge its my first time making somthing in Github.

newest programm WRO4 :_D
.

The newest programm is WRO3-silmad-07.0425 , WRO3-sõit_ja_silmad-07.04.25 and colorsens__sketch_apr27a_28_04_25 .
Each programm has its explanations behind each line.
Newest picktures of the robot are under Photos-WRO-auto.zip (PS- new photos may be uploded with a new name)
to the robot we have added two ultrasoniksensors, a powerbank(not in the photos), infrared sensor(colorsensor), exstantion blocs, we changed the 12V DC motor to a Motor with gearbox 3-6VDC 250mA 140rpm max 78mNm 48:1 , and in the front a ESP32 Camera module(for color seeing).


.

Our robot is 3D printed with open source design in Thingiverse. The robot uses Arduino UNO to control everything.
A servo motor is used to control the front wheels in turning, we have picked it because its cheap and efficient to change for a new one if it breaks.
Also the servos small size fits between the front part of the robots frame so it could turn the wheels.
For wheels in the back we use a 12V DC motor , because of its small size and speed.
We connected it so that it would use a 9v battery for Arduino UNO and servo motor, and a batterybank for the 12V DC motor.

The programme for the back wheels is with the name of "Sõit" and it informs the motor through motor controller to set a certain speed of 100 for 2 seconds.
The programme to turn the servo is called "Servo" and it sets it moment to turn one way and then another(first right then left).
The combination of them with the button to start the programme is under the name WRO2
WRO 1 was the programme for the trial round we had in Estonia but so i could find it easily i just named it WRO1.
In WRO2 the motors don't start until the pressing of the button (connected to Arduino UNO) and then the servo turns right for 20 milliseconds and after that drives forward then stops,
following that it turns back its front wheels in 20 milliseconds and then drive forward and stop motion.
The reason why we done ride and turn during the same time is because if the robot rides the servo isn't strong enough to turn during the same time.

Pictures of the robots original design are all the photos in .jpg format at the end and the 3D model for printing is under "AUTO". 
The latest version of the robot is Pictures ... and its a modified version off the original print where we had to solve the problem of it holding itself together and wheels not falling off with screws. And 
