//This is a dummy file to start off work on the function that accepts a reasonable range as having "achieved" the target attitude.
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
		DEBUG(("myPosition %d",myPosition[count]));
		DEBUG(("targetPosition %d",targetPosition[count]));
	}
	count++;
}
