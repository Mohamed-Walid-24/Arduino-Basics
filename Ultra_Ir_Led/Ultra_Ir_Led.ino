int trig = 2;
int echo = 3;
int led = 23;
int ir = 8;
void setup() {
  // put your setup code here, to run once:
  pinMode(trig , OUTPUT);
  pinMode(echo,INPUT);
  pinMode(led,OUTPUT);
  pinMode(ir,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  int reading=digitalRead(ir);
  int Time = pulseIn(echo,HIGH);
  int distance = Time*0.034/2;
  if(distance<11&&reading==1&&distance>0)
  {
  Serial.println("black");
  digitalWrite(led,HIGH);
  }
  else if(distance>11&&reading==0)
  {
  Serial.println("white");
  digitalWrite(led,HIGH);  
  }
  else
  digitalWrite(led,LOW);
  Serial.println(distance);
}
