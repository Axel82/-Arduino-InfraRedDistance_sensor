#include <SharpIR.h>

/* Model :
  GP2Y0A02YK0F --> 20150
  GP2Y0A21YK0F --> 1080
  GP2Y0A710K0F --> 100500
  GP2YA41SK0F --> 430
*/

#define IRSharpPin A0
#define IRSharpModel 1080

SharpIR mySensor = SharpIR(IRSharpPin, IRSharpModel); //Create the distance IR sensor
int actualDistance; //Actual distance in cm

void setup() {
  
  Serial.begin(9600); //Start the serial port
  while(!Serial){;}

  //Small break 250 ms
  delay(250);
}

void loop() {
  actualDistance = mySensor.distance();  //Get actual distance

  //Print the actual distance
  Serial.print("Mean distance: ");
  Serial.print(actualDistance);
  Serial.println(" cm");

  //Small break 1000ms
  delay(1000);
}
