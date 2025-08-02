/*  Button
 Turns on and off a light emitting diode(LED) connected to digital
 pin 13, when pressing a pushbutton attached to pin 2.
 */

const int l1 =  4;  
const int l2 =  5;  
const int l3 =  6;  
const int l4 =  7;     


void setup() {
  pinMode(l1, OUTPUT);
  pinMode(l2, OUTPUT);
  pinMode(l3, OUTPUT);
  pinMode(l4, OUTPUT);
}

void loop() {
  

  for(int i=0;i<16;i++)
  {
     int b4 = i % 2;        
    int b3 = (i / 2) % 2;
    int b2 = (i / 4) % 2;
    int b1 = (i / 8) % 2; 

    digitalWrite(l1, b1);
    digitalWrite(l2, b2);
    digitalWrite(l3, b3);
    digitalWrite(l4, b4);

    delay(1000);
  }
  
}
