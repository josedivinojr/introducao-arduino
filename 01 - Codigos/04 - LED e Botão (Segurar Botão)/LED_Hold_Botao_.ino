// Declaração das Variáveis
int led = 7;
int botao = 6;
bool estado_botao = false; //true ligado e false para desligado


/* Vamos usar a função INPUT_PULLUP na programação.
Com essa função vamos estar utilizando o resistor interno do Arduino.

No modo pull-up a placa vai estar mandando o sinal lógico HIGH (1);
E irá mandar LOW (0) somente enquanto pressionado.
Dessa forma iremos ligar e desligar o LED.

*/

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(botao, INPUT_PULLUP);
  
}

void loop()
{

  if(digitalRead(botao) == LOW)
    digitalWrite(led, HIGH);
  
  if(digitalRead(botao) == HIGH)
     digitalWrite(led, LOW);
  
  
  delay(100);
    
  
  
}
