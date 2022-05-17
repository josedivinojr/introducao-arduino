/*
  Curso de Arduino | DATRON - UFU 2021

  Blink LED

  Neste programa iremos piscar um LED.

  A placa Arduino UNO tem um LED embutido que é atrelado à Porta Digital 13.
  Para controlar este LED em qualquer placa Arduino, podemos utilizar a keyword "LED_BUILTIN".
  
*/


/* 
    A função setup() executa o código uma única vez.
    Sempre que reiniciamos ou alimentamos a placa pela primeira vez essa função é executada uma única vez.
*/
void setup() {
    
  pinMode(LED_BUILTIN, OUTPUT); // definimos a porta digital 13 (LED_BUILTIN) como saída.

}

/* 
    A função loop() é executada repetidamente enquanto a placa estiver alimentada.
*/
void loop() {
  
  digitalWrite(LED_BUILTIN, HIGH);   // acende o LED (HIGH nível de tensão alto)
  delay(1000);                       // aguarda por 1 segundo (1000us)
  digitalWrite(LED_BUILTIN, LOW);    // desliga o LED (Nível de tensão baixo LOW)
  delay(1000);                       // aguarda mais 1 segundo (1000us)

  // Após executar a última instrução, voltaremos ao início da função loop(); 
  
}
