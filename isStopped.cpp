/*This is a dummy file to start off work on the function return	a boolean to determine whether or not your satellite is moving.	Account	for	all	types of motion 
(translational and rotational).*/  

//Declare any variables that need to be shared within this block  
float myPreviousPosition[12];
float myCurrentPosition[12];
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
