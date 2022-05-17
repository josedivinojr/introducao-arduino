int pot = A0;
int led = 3;
int leitura = 0;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(pot, INPUT);
}

void loop()
{
  
  leitura = analogRead(pot);
  leitura = map(leitura, 0, 1023, 0, 254);
  
  analogWrite(led, leitura);
  
}