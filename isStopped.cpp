/*This is a dummy file to start off work on the function return	a boolean to determine whether or not your satellite is moving.	Account	for	all	types of motion 
(translational and rotational).*/  

//Declare any variables that need to be shared within this block  
float myPreviousPosition[12];
float myCurrentPosition[12];
Boolean isStopped(){
	//This function is called once per second.  Use it to control the satellite.
	if (thisPosition aproxEqualTo nextPosition){  // need to sample one reading against the next to compare and be sure that you are not significantly moving
		DEBUG(("myPosition %f",myPosition[1])); //not correct will need to check x y z plus rotation
		DEBUG(("targetPosition %f",myCurrentPosition[1]));  //not correct will need to check x y z plus rotation
	}
	
}
