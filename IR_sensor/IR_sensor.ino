int ir = 5;
int reading;
void setup() {
  // put your setup code here, to run once:
  pinMode(ir,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  reading=digitalRead(ir);
  //Serial.println(reading);
  if(reading==1) Serial.println("Black");
  if(reading==0) Serial.println("White");
}
