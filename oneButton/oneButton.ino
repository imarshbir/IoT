

const int l1 =  4;  
const int l2 =  5;  
const int l3 =  6;  
const int l4 =  7;     
const int buttonPin = 9;

void setup() {
  pinMode(l1, OUTPUT);
  pinMode(l2, OUTPUT);
  pinMode(l3, OUTPUT);
  pinMode(l4, OUTPUT);
  pinMode(buttonPin, INPUT);
}
int n=0;
void loop() {
  
  if ( digitalRead(buttonPin) == HIGH ) { 
      n=n+1 ;
      while( digitalRead(buttonPin) == HIGH ) ; 
  }  

  if (n==1 )
    digitalWrite(l1,HIGH);
  if (n==2 )
    digitalWrite(l2,HIGH);
  if (n==3) 
    digitalWrite(l3,HIGH);
  if (n==4) 
    digitalWrite(l4,HIGH);

}