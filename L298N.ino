const int in1 = 2;
const int in2 = 3;
const int in3 = 4;
const int in4 = 5;

const int enA = 6;
const int enB = 7;


void setup()

{
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  pinMode(enA,OUTPUT);
  pinMode(enB,OUTPUT);
}
void loop()
{
  analogWrite(6,255);
  analogWrite(7,2);
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
}
