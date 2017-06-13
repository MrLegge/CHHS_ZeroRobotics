//This is a dummy file to start off work on the function that monitors the distance between two objects.
//Declare any variables that need to be shared within this block  
float myPosition[12];
float otherPosition[12];
int count; 
void init(){
	//set all values in array to zero
	for(int i=0;i<12;i++){
		myPosition[i]=0.0f;
		otherPosition[i]=0.0f;
	}
	count = 0;
	//IMPORTANT: make sure to set any variables that need an initial value.
	//Do not assume variables will be set to 0 automatically!
}

void loop(){
	//This function is called once per second.  Use it to control the satellite.
	if (count <= 11)
	{
		DEBUG(("myPosition %d",myPosition[count]));
		DEBUG(("otherPosition %d",otherPosition[count]));
	}
	count++;
}
