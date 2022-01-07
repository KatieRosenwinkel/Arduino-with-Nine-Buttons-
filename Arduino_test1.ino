int button1 =0;
int button2 =0;
int button3 =0;
int button4 =0;
int button5 =0;
int button6 =0;
int button7 =0;
int button8 =0;
int button9 =0;
int timer = 200;
int q;

void setup()
{
  Serial.begin(9600);
  pinMode(12, INPUT);
  pinMode(11, INPUT);
  pinMode(10, INPUT);
  pinMode(9, INPUT);
  pinMode(8, INPUT);
  pinMode(7, INPUT);
  pinMode(6, INPUT);
  pinMode(5, INPUT);
  pinMode(4, INPUT);
}

void loop()
{
  button1 = digitalRead(12);
  button2 = digitalRead(11);
  button3 = digitalRead(10);
  button4 = digitalRead(9);
  button5 = digitalRead(8);
  button6 = digitalRead(7);
  button7 = digitalRead(6);
  button8 = digitalRead(5);
  button9 = digitalRead(4);

 if(button1 == HIGH)
 {
  Serial.println(" 'button 1'");
 }
 else if(button2 == HIGH)
 {
  Serial.println(" 'button 2'");
 }
  else if(button3 == HIGH)
 {
  Serial.println(" 'button 3'");
 }
  else if(button4 == HIGH)
 {
  Serial.println(" 'button 4'");
 }
  else if(button5 == HIGH)
 {
  Serial.println(" 'button 5'");
 }
  else if(button6 == HIGH)
 {
  Serial.println(" 'button 6'");
 }
  else if(button7 == HIGH)
 {
  Serial.println(" 'button 7'");
 }
  else if(button8 == HIGH)
 {
  Serial.println(" 'button 8'");
 }
  else if(button9 == HIGH)
 {
  Serial.println(" 'button 9'");
 }
 else
 {
  q = 1;
 }
 delay(timer);
}
