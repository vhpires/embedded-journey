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


## 2026-06-23

Continuei estudando ponteiros e funções.

Consegui entender melhor a diferença entre:

- passagem por valor;
- passagem por endereço.

Aprendi que:

Passagem por valor envia uma cópia do dado.

Passagem por endereço envia o endereço da variável, permitindo alterar o valor original.

Exemplo mental:

void mudar(int x)

Recebe uma cópia.

void mudar(int* x)

Recebe um endereço.

Também reforcei o entendimento de:

- &
- *
- ponteiros
- alteração da variável original através de endereço.

Ainda preciso praticar para ganhar velocidade e confiança, mas consigo explicar o fluxo completo do código.


## 2026-07-01

Hoje realizei minha primeira sessão de estudos contínua em bastante tempo, com aproximadamente 1 hora de duração.

Iniciei revisando os conceitos de ponteiros estudados anteriormente e percebi que consigo explicar, com minhas próprias palavras, a diferença entre passagem por valor e passagem por endereço.

Reforcei os seguintes conceitos:

- `&` obtém o endereço de uma variável.
- Um ponteiro armazena um endereço de memória.
- `*` acessa o valor armazenado no endereço guardado pelo ponteiro.
- Funções que recebem `int` alteram apenas uma cópia da variável.
- Funções que recebem `int*` podem alterar a variável original.

Em seguida iniciei o estudo de arrays.

Aprendi que:

- Um array é um conjunto de elementos do mesmo tipo armazenados em posições consecutivas na memória.
- Os índices de um array começam em 0.
- Cada índice representa uma posição específica dentro do array.
- É possível acessar e modificar qualquer elemento utilizando seu índice.

Também compreendi a lógica dos laços `for`.

Antes de aprender apenas a sintaxe, procurei entender o problema que o `for` resolve.

Percebi que ele é utilizado para percorrer todas as posições de um array sem repetir código manualmente.

Durante os exercícios consegui interpretar programas completos sem executá-los, explicando linha por linha o comportamento do código.

Também consegui compreender a combinação entre `for` e `if`, utilizando o laço para percorrer um array e a condição para decidir quais elementos deveriam ser processados ou exibidos.

Ao final da sessão tentei resolver, por conta própria, um problema para encontrar o maior valor de um array. Ainda não lembrei da sintaxe correta, mas consegui raciocinar sobre a lógica do algoritmo, o que mostrou que estou começando a pensar primeiro na solução e depois na implementação.

Percebi também uma característica importante da minha forma de estudar: aprendo melhor quando compreendo primeiro o problema e construo a lógica passo a passo, deixando a sintaxe vir como consequência desse entendimento.


## 2026-07-05

Hoje percebi uma mudança importante na forma como enxergo programação.

Até então, eu acreditava que criar um programa começava pela sintaxe da linguagem. Durante os exercícios, percebi que o processo correto é o contrário: primeiro penso no problema, depois no algoritmo e somente por último na sintaxe do C++.

Também descobri que o curso básico de Python que fiz anteriormente deixou uma base de lógica muito maior do que eu imaginava. O que eu havia perdido com o tempo foi principalmente a sintaxe e a prática, não a capacidade de raciocinar sobre algoritmos.

Durante os exercícios trabalhei com diferentes tipos de variáveis utilizadas na resolução de problemas:

- Variável acumuladora (`soma`), utilizada para acumular valores.
- Variável verificadora (`maior`), utilizada para guardar o maior valor encontrado até o momento.
- Variável contadora (`contador`), utilizada para contar quantas vezes uma condição é satisfeita.

Também compreendi que um único `for` normalmente é suficiente para percorrer um array e que, durante esse percurso, diferentes tarefas podem acontecer simultaneamente. O `for` tem apenas a responsabilidade de percorrer os elementos; as decisões são tomadas pelo `if`, somente quando o problema exige uma condição.

Percebi que a estrutura mental para resolver problemas passou a seguir uma sequência mais organizada:

1. Entender o problema.
2. Identificar quais informações precisam ser armazenadas.
3. Definir o papel de cada variável.
4. Percorrer os dados.
5. Aplicar as condições necessárias.
6. Somente depois escrever o código em C++.

Essa foi uma das sessões mais importantes até agora, porque senti que comecei a pensar em algoritmos antes de pensar na linguagem. Tenho a impressão de que, daqui para frente, escrever o código será cada vez mais uma tradução da lógica que já construí mentalmente.
