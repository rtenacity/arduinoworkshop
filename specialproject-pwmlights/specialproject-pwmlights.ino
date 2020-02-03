int d = 5;

void lightUp(int pin)
{
  for (int a = 0; a < 256; a++)
  {
    analogWrite(pin, a);
    delay(d);
  }
  delay(200);
}

void dim(int pin)
{
  for (int a = 255; a >=0; a--)
  {
    analogWrite(pin, a);
    delay(d);
  }
  delay(200);
}

void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  lightUp(3);
  lightUp(5);
  lightUp(6);
  lightUp(9);
  lightUp(10);
  dim(10);
  dim(9);
  dim(6);
  dim(5);
  dim(3);
}
