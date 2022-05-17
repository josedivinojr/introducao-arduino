# Blink LED

### Entendendo o Código

Apesar de bastante simples, é muito importante compreender o funcionamento e a estrutura básica do programa.

A estrutura sequencial, estrutura do código feito na IDE do Arduino, é composta por duas funções obrigatórias: void setup() e void loop().

A função setup() executa todos os comandos uma única vez quando alimentamos (ou reiniciamos) a placa Arduino. Geralmente, dentro dessa função, é realizada a configuração do programa.  
A função pinMode(pin, mode) configura o nosso dispositivo da maneira que desejamos que ele funcione, ou seja, entrada ou saída (INPUT ou OUTPUT). Neste caso, a porta do LED é configurado como uma saída.

``` C++
void setup() {
    
  pinMode(LED_BUILTIN, OUTPUT); // define a porta 13 como saída

}
```  


A função loop() é a segunda principal função obrigatória do programa. Ela é executada repetidamente enquanto a placa estiver sendo alimentada.  
No nosso programa, ela é a responsável por acender e desligar o LED a cada segundo.
A instrução digitalWrite(pin, value) define se esta porta estará recebendo o nível lógico 1 (5V - HIGH) ou o nível lógico 0 (0V - LOW).
A função delay(ms) faz com que o microcontrolador espere por um intervalo de 1000 milissegundos.  

``` c++
void loop() {
  
  digitalWrite(LED_BUILTIN, HIGH);   // acende o led
  delay(1000);                       // aguarda 1s
  digitalWrite(LED_BUILTIN, LOW);    // apaga o LED
  delay(1000);                       // aguarda 1s
  
}
```

### Dicas/Spoilers
- Configuramos como Saída (OUTPUT) os dispositivos/atuadores que desejamos controlar. Por exemplo, LEDs, motores, displays, etc.
- Como Entrada (INPUT), nós utilizamos sensores e dispositivos que nos fornecem dados. Por exemplo, sensor LDR, sensor de temperatura, entre outros.