#Diário de Estudos


##2026-06-04

Hoje aprendi:

- Variável é uma caixa que guarda um valor.
- digitalRead() lê o estado de um pino.
- digitalWrite() altera o estado de um pino.
- HIGH e LOW representam estados elétricos.
- O botão do Wokwi tem 4 pinos, mas internamente eles são agrupados.
- delay() faz o programa esperar.
- Uma variável mantém seu valor até ser alterada.

## 2026-06-07

Hoje revisei conceitos vistos anteriormente.

Percebi que consigo interpretar códigos simples sem precisar executar.

Aprendi ou reforcei:

- pinMode(..., OUTPUT) configura um pino como saída.
- digitalWrite(..., HIGH) liga o LED.
- digitalWrite(..., LOW) desliga o LED.
- delay(1000) espera 1 segundo.
- Consigo prever o comportamento de um programa observando os delays.
- Consegui modificar um programa para criar um padrão de duas piscadas rápidas seguidas de uma pausa longa.

Exercício:

ON  200 ms
OFF 200 ms
ON  200 ms
OFF 1000 ms

Repetir continuamente.


## 2026-06-16

Hoje comecei a estudar C++ além do Arduino.

Aprendi:

- Funções podem receber valores como parâmetros.
- Por padrão, C++ passa argumentos por valor (cópia).
- Alterar uma cópia dentro da função não altera a variável original.
- Referências permitem trabalhar com a variável original.

## 2026-06-16

Hoje avancei nos conceitos de memória em C++.

Aprendi que uma variável possui:
- um valor armazenado;
- um endereço na memória.

Também comecei a entender ponteiros:

- um ponteiro é uma variável que guarda um endereço;
- usando o operador * posso acessar o valor armazenado naquele endereço.

Exemplo mental:

variável:
valor → 80

ponteiro:
endereço → onde está o valor

Ainda estou consolidando esse conceito antes de avançar para aplicações mais complexas.
