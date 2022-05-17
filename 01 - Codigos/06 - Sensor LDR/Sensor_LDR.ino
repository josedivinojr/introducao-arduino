int pinLDR = A0;
int valorLDR = 0;

int ledVerde = 2;
int ledAzul = 3;


void setup(){
  Serial.begin(9600);
  
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAzul, OUTPUT);
  pinMode(pinLDR, INPUT);
}

void loop(){
  
  valorLDR = analogRead(pinLDR);
  
  if((valorLDR > 0) & (valorLDR < 500)){
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledAzul, HIGH);
    Serial.print(valorLDR);
    Serial.println(" | Muito escuro | Luzes acesas");
  }

  else if((valorLDR > 500) & (valorLDR < 945)){
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledAzul, LOW);
    Serial.print(valorLDR);
    Serial.println(" | Claro | Apenas uma luz acesa");
  }

  else if((valorLDR > 945) & (valorLDR < 1024)){
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAzul, LOW);
    Serial.print(valorLDR);
    Serial.println(" | Muito claro | Luzes apagadas");
  }

  
}