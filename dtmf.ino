#define mR1 3
#define mR2 4
#define mL1 5
#define mL2 6

#define D0 22
#define D1 23
#define D2 24
#define D3 25
void forward()
{
   digitalWrite(mR1, HIGH);
   digitalWrite(mR2, LOW);
   digitalWrite(mL1, HIGH);
   digitalWrite(mL2, LOW);
}
void backward()
{
   digitalWrite(mR1, LOW);
   digitalWrite(mR2, HIGH);
   digitalWrite(mL1, LOW);
   digitalWrite(mL2, HIGH); 
}
void leftTurn()
{
   digitalWrite(mR1, HIGH);
   digitalWrite(mR2, LOW);
   digitalWrite(mL1, LOW);
   digitalWrite(mL2, LOW);
}
void leftSpin()
{
   digitalWrite(mR1, HIGH);
   digitalWrite(mR2, LOW);
   digitalWrite(mL1, LOW);
   digitalWrite(mL2, HIGH);
}
void rightTurn()
{
   digitalWrite(mR1, LOW);
   digitalWrite(mR2, LOW);
   digitalWrite(mL1, HIGH);
   digitalWrite(mL2, LOW);
}
void rightSpin()
{
   digitalWrite(mR1, LOW);
   digitalWrite(mR2, HIGH);
   digitalWrite(mL1, HIGH);
   digitalWrite(mL2, LOW);
}
void Stop()
{
   digitalWrite(mR1, LOW);
   digitalWrite(mR2, LOW);
   digitalWrite(mL1, LOW);
   digitalWrite(mL2, LOW);
}
void setup() 
{
  pinMode(D0, INPUT);
  pinMode(D1, INPUT);
  pinMode(D2, INPUT);
  pinMode(D3, INPUT);
  pinMode(mR1, OUTPUT);
  pinMode(mR2, OUTPUT);
  pinMode(mL1, OUTPUT);
  pinMode(mL2, OUTPUT);
}
void loop() 
{
  int ip1=digitalRead(D0);
  int ip2=digitalRead(D1);
  int ip3=digitalRead(D2);
  int ip4=digitalRead(D3);
 
  if(ip1==0 && ip2==1 && ip3==0 && ip4==0)
  forward();
  else if(ip1==0 && ip2==0 && ip3==1 && ip4==0)
  leftTurn();
  else if(ip1==0 && ip2==1 && ip3==1 && ip4==0)
  rightTurn();
  else if(ip1==0 && ip2==0 && ip3==0 && ip4==1)
  backward();
   else if(ip1==1 && ip2==0 && ip3==1 && ip4==0)
  Stop();
}
