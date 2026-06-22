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



## 2026-06-22

Hoje continuei estudando ponteiros em C++.

Percebi que minha maior dificuldade não era apenas entender ponteiros, mas separar os conceitos:

- valor da variável;
- endereço da variável;
- cópia de uma variável;
- acesso à variável original através de endereço.

Reforcei que:

- Uma variável possui um valor armazenado e um endereço na memória.
- O operador & obtém o endereço de uma variável.
- Um ponteiro é uma variável que armazena um endereço de memória.
- O operador * pode acessar o valor armazenado naquele endereço.

Exemplo mental:

int numero = 10;

int* p = &numero;

Nesse caso:

- numero guarda o valor 10;
- p guarda o endereço de numero;
- *p acessa o valor que está naquele endereço.

Também revisei passagem de parâmetros em funções:

Passagem por valor:

void alterar(int x)

A função recebe uma cópia do valor. Alterar x não altera a variável original.

Passagem usando endereço:

void alterar(int* x)

A função recebe o endereço da variável e pode alterar o valor original usando *x.

Aprendi que o nome da variável do ponteiro não define seu comportamento. Um ponteiro chamado sensor ou p funciona da mesma forma; o que importa é o tipo e como ele é utilizado.

Minha principal dificuldade foi visualizar o fluxo:

chamada da função → parâmetro recebido → acesso à memória → alteração do valor.

Continuarei praticando para consolidar esse conceito.
