 // 
const int ldr = A0;
int lsensor;


void setup() 
{
  Serial.begin(9600);
  //pinMode(ledpin, OUTPUT);
  pinMode(ldr,INPUT);
  
}

void loop() 
{
  int lsensor = analogRead(ldr); // reads   analog data from light sensor
  Serial.print(lsensor);
  Serial.println();
  delay(500);
}
