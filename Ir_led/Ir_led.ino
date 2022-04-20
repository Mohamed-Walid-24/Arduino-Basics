int led = 7;
int ir  = 12;
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
pinMode(ir,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int reading =digitalRead(ir);
  if(reading==1)
  {
    digitalWrite(led,HIGH);
    Serial.println("black");
  }
  if(reading==0)
{
    digitalWrite(led,LOW);
    Serial.println("white");
}
}
