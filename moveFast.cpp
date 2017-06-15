/*This is a dummy file to start off work on the function that should use setVelocityTarget and/or setForces	along with setPositonTarget to create a	function that gets you to a	target position	as fast as possible, every time.*/  

//Declare any variables that need to be shared within this block  
float myPosition[12];
float targetPosition[12];
int count; 
void init(){
	//set all values in array to zero
	for(int i=0;i<12;i++){
		myPosition[i]=0.0f;
		targetPosition[i]=0.0f;
	}
	count = 0;
}

void loop(){
	//This function is called once per second.  Use it to control the satellite.
	if (count <= 11){
		DEBUG(("myPosition %f",myPosition[count]));
		DEBUG(("targetPosition %f",targetPosition[count]));
	}
	count++;
}
