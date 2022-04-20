#define trig 2
#define echo 3
#define led 4

void setup() {
  // put your setup code here, to run once:
  pinMode(trig , OUTPUT);
  pinMode(echo,INPUT);
  pinMode (led , OUTPUT);

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
  if (distance <10&&distance>0)
  digitalWrite(led , HIGH);
  else 
  digitalWrite(led , LOW);

  Serial.println(distance);
}
