//Declare any variables shared between functions here
float xPos, yPos, zPos;
float position[3];
float attitude[3];
void init(){
	//This function is called once when your code is first loaded.
    xPos = 0.5;
    yPos = 0.5;
    zPos = 0.0;
    position[0] = xPos;
    position[1] = yPos;
    position[2] = zPos;
    
    attitude[0] = 1.0;
    attitude[1] = 0.0;
    attitude[2] = 0.0;
	//IMPORTANT: make sure to set any variables that need an initial value.
	//Do not assume variables will be set to 0 automatically!
}

void loop(){
	//This function is called once per second.  Use it to control the satellite.
    api.setPositionTarget(position);
    api.setAttitudeTarget(attitude);
    
}
