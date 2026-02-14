int rPin = 9;
int gPin = 10;
int bPin = 11;

void setup() {
  pinMode(rPin, OUTPUT);
  pinMode(gPin, OUTPUT);
  pinMode(bPin, OUTPUT);

  randomSeed(analogRead(A0)); // rastgelelik için
}

void loop() {
  int r = random(0, 256);
  int g = random(0, 256);
  int b = random(0, 256);

  analogWrite(rPin, r);
  analogWrite(gPin, g);
  analogWrite(bPin, b);

  delay(100); // hız (küçült → daha hızlı disko)
}
