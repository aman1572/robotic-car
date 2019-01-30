void setup() {
  for (int i = 2; i <= 5; i++)
  {
    pinMode(i, OUTPUT);
  }
  for (int j = 6; j <= 9; j++)
  {
    pinMode(j, INPUT);
  }
}
void clearpin() {
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
}
void forward() {
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  while (digitalRead(6) == HIGH);
}

void reverse() {
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  while (digitalRead(7) == HIGH);
}
void left() {
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  while (digitalRead(8) == HIGH);
}
void right() {
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  while (digitalRead(9) == HIGH);
}


void loop() {
  clearpin();
  if (digitalRead(6) == HIGH)
  {
    forward();
  }
  if (digitalRead(7) == HIGH)
  {
    reverse();
  }
  if (digitalRead(8) == HIGH)
  {
    left();
  }
  if (digitalRead(9) == HIGH)
  {
    right();
  }
}
