void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int interval = 200;
  digitalWrite(2, HIGH);
  delay(interval);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  delay(interval);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  delay(interval);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  delay(interval);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay(interval);
  digitalWrite(6, LOW);
  delay(interval);
}
