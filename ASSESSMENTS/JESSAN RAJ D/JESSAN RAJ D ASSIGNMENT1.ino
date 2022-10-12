
int sensor=6;
int val=0;
void setup()
{
  pinMode(6,INPUT);
  pinMode(10, OUTPUT);
  
  pinMode(3,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  val=digitalRead(sensor);
  if(val==HIGH)
  {
    analogWrite(10, random(255));
   
    tone(3,50);
    delay(200);
  }    
  else
  {
    noTone(3);
    delay(1000);
  }
}