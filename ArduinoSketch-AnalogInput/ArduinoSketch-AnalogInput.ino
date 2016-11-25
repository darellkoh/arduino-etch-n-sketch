int readPinX = A0; // pin number the knob is attached to
int readPinY = A1; // pin number the knob is attached to
int X = 0;
int Y = 0;
int newX = 0;
int newY = 0;

// runs once to kick off the program
void setup() {
 Serial.begin(9600); // This connects to the serial port
}

// runs repeatedly
void loop() {
 newX = analogRead(readPinX);
 delay(10);
 newX = analogRead(readPinX);
 delay(10);
 newY = analogRead(readPinY);
 delay(10);
 newY = analogRead(readPinY);
 delay(10);

 if(abs(newX-X) > 2 || abs(newY-Y) > 2){
   X = newX;
   Y = newY;

   String xprint = "";
   xprint += X;
   xprint += ',';
   xprint += Y;
   Serial.println(xprint); // send value over to serial port
 }
}
