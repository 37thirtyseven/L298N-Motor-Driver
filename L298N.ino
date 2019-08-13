const int IN1 = 2;
const int IN2 = 3;
const int IN3 = 4;
const int IN4 = 5;
const int ENA = 6; //first motor
const int ENB = 7; //second motor

void setup()

{
  
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  pinMode(ENA,OUTPUT);
  pinMode(ENB,OUTPUT);
  
}

void loop()

{
  
  //first motor
  
  analogWrite(ENA,255); // you can change first motors velocity by giving value between 1-255
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  
  //second motor
  
  analogWrite(ENB,255); // you can change second motors velocity by giving value between 1-255
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);

}

