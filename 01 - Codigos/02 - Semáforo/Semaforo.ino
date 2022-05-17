int VERMELHO = 7;	  // declarando a variável VERMELHO com o valor 7
int AMARELO = 6;	  // declarando a variável AMARELO  com o valor 7
int VERDE = 5;		  // declarando a variável VERDE    com o valor 7

void setup()
{
  pinMode(VERMELHO, OUTPUT); // define a porta 7 como saída
  pinMode(AMARELO, OUTPUT);  // define a porta 6 como saída
  pinMode(VERDE, OUTPUT);    // define a porta 5 como saída


  // Desligando todos os LEDs
  digitalWrite(VERMELHO, LOW);
  digitalWrite(AMARELO, LOW);
  digitalWrite(VERDE, LOW);
}

void loop()
{ 
  // Sinal Verde
  digitalWrite(VERMELHO, LOW);
  digitalWrite(AMARELO, LOW);
  digitalWrite(VERDE, HIGH);
  delay(3000);
  
  // Sinal Amarelo
  digitalWrite(VERMELHO, LOW);
  digitalWrite(AMARELO, HIGH);
  digitalWrite(VERDE, LOW);
  delay(2000);

  // Sinal Vermelho
  digitalWrite(VERMELHO, HIGH);
  digitalWrite(AMARELO, LOW);
  delay(4000);
  
}