int trig = 2;
int echo = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(trig , OUTPUT);
  pinMode(echo,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  
  int Time = pulseIn(echo,HIGH);
  int distance = Time*0.034/2;
  
  Serial.println(distance);
}
