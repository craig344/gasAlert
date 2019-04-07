int  ena = 6;
int enb = 3;
int in1 = 7;
int in2 = 8;
int in3 = 12;
int in4 = 4;
int buzzer = 2;
int buzz = 0;
int sensor = A0;
int fanSpeed = 255;
int motorSpeed = 40;
int sensorThreshold = 80;


void setup() {
  // put your setup code here, to run once:
  pinMode(ena, OUTPUT);
  pinMode(enb,OUTPUT);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(sensor,INPUT);
  Serial.begin(115200);
  

  
}
void start(){
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  analogWrite(ena,fanSpeed);

  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
  analogWrite(enb,motorSpeed);
  delay(2000);
  digitalWrite(in3,LOW);
  
  
}

void loop() {
  // put your main code here, to run repeatedly:
  //Serial.println("HI");
  //Serial.println(analogRead(sensor) && !(buzz));
  if(analogRead(sensor) > sensorThreshold){
    if(!buzz){
      start();
      buzz = 1;
      Serial.println(analogRead(sensor));
    } 
  }
  if(buzz){
    digitalWrite(buzzer,HIGH);
    delay(100);
    digitalWrite(buzzer,LOW);
    delay(1000);
  }
}
