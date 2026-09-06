<div align="center">

# 🧮 Calculadora em C

![C](https://img.shields.io/badge/C-000000?style=for-the-badge\&logo=c\&logoColor=white)
![Operações](https://img.shields.io/badge/Operações-20-000000?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Concluído-000000?style=for-the-badge)
![GitHub](https://img.shields.io/badge/GitHub-000000?style=for-the-badge\&logo=github\&logoColor=white)

<br>

Projeto acadêmico desenvolvido para a disciplina de **Desenvolvimento de Algoritmos e Pensamento Computacional**.

</div>

---

## Objetivo

Desenvolver uma **calculadora em linguagem C** capaz de realizar diferentes operações matemáticas por meio de um menu interativo.

O projeto aplica conceitos fundamentais de programação, incluindo:

* Variáveis e tipos de dados;
* Entrada e saída de dados;
* Operadores matemáticos;
* Estruturas condicionais;
* Estruturas de repetição;
* Biblioteca `math.h`;
* Biblioteca `stdlib.h`;
* Tratamento básico de erros;
* Organização e controle do fluxo do programa;
* Documentação do projeto no GitHub.

---

## Descrição

A **Calculadora em C** é um programa executado no terminal que permite ao usuário selecionar diferentes operações matemáticas por meio de um menu.

Após escolher uma opção, o usuário informa os valores necessários e o programa realiza o cálculo correspondente.

A aplicação possui **20 operações**, envolvendo cálculos básicos, funções trigonométricas, funções matemáticas, cálculos estatísticos e conversões entre graus e radianos.

O programa utiliza `switch...case` para controlar as opções do menu, `if...else` para realizar verificações e `do...while` para permitir que o usuário execute novos cálculos sem precisar reiniciar o programa.

---

## Funcionalidades

A calculadora possui **20 operações disponíveis**:

| Nº | Operação              | Descrição                                                             |
| -: | --------------------- | --------------------------------------------------------------------- |
| 01 | **Adição**            | Soma dois números                                                     |
| 02 | **Subtração**         | Subtrai dois números                                                  |
| 03 | **Multiplicação**     | Multiplica dois números                                               |
| 04 | **Divisão**           | Divide dois números com verificação de divisão por zero               |
| 05 | **Potenciação**       | Calcula uma base elevada a um expoente                                |
| 06 | **Raiz Quadrada**     | Calcula a raiz quadrada de um número                                  |
| 07 | **Porcentagem**       | Calcula uma porcentagem de determinado valor                          |
| 08 | **Seno**              | Calcula o seno de um ângulo informado em graus                        |
| 09 | **Cosseno**           | Calcula o cosseno de um ângulo informado em graus                     |
| 10 | **Tangente**          | Calcula a tangente de um ângulo informado em graus                    |
| 11 | **Pi**                | Exibe o valor da constante π                                          |
| 12 | **Fatorial**          | Calcula o fatorial de um número inteiro não negativo                  |
| 13 | **Logaritmo Natural** | Calcula o logaritmo natural de um número positivo                     |
| 14 | **MMC**               | Calcula o mínimo múltiplo comum entre dois números inteiros não nulos |
| 15 | **MDC**               | Calcula o máximo divisor comum entre dois números inteiros            |
| 16 | **Moda**              | Identifica a moda entre três valores inteiros                         |
| 17 | **Média**             | Calcula a média aritmética de três números                            |
| 18 | **Mediana**           | Calcula o valor central entre três números                            |
| 19 | **Graus → Radianos**  | Converte graus para radianos                                          |
| 20 | **Radianos → Graus**  | Converte radianos para graus                                          |

Além das operações, a opção `0` permite encerrar a execução do programa.

---

## Funcionamento

O funcionamento geral do programa segue o fluxo abaixo:

```text
Início
   ↓
Exibe o menu de opções
   ↓
Usuário escolhe uma operação
   ↓
Programa solicita os valores necessários
   ↓
Realiza o cálculo
   ↓
Exibe o resultado
   ↓
Deseja realizar outro cálculo?
   ↓
 Sim ─────────→ Retorna ao menu
   ↓
 Não
   ↓
Encerra o programa
```

---

## 🛠️ Tecnologias e Bibliotecas Utilizadas

O projeto foi desenvolvido utilizando a linguagem **C**.

![C](https://img.shields.io/badge/C-000000?style=for-the-badge\&logo=c\&logoColor=white)

### `stdio.h`

Utilizada para a entrada e saída de dados no programa.

Principais funções utilizadas:

```c
printf()
scanf()
```

### `math.h`

Utilizada para disponibilizar funções e operações matemáticas.

Entre os recursos utilizados estão:

* `pow()` — potenciação;
* `sqrt()` — raiz quadrada;
* `sin()` — seno;
* `cos()` — cosseno;
* `tan()` — tangente;
* `log()` — logaritmo natural;
* `fabs()` — valor absoluto.

A constante `M_PI` também é definida no código para representar o valor de π.

### `stdlib.h`

Utilizada para disponibilizar funções auxiliares.

No programa, é utilizada a função:

```c
abs()
```

para trabalhar com valores absolutos inteiros durante o cálculo do MDC.

---

## 🧠 Conceitos de Programação Aplicados

### Variáveis e Tipos de Dados

O programa utiliza diferentes tipos de dados de acordo com a necessidade de cada operação.

Entre eles:

```c
int
char
double
```

Os valores inteiros são utilizados principalmente em operações como fatorial, MMC e MDC, enquanto `double` é utilizado para cálculos que envolvem valores decimais.

A variável do tipo `char` é utilizada para controlar se o usuário deseja continuar utilizando a calculadora.

---

### Entrada e Saída de Dados

A entrada de informações é realizada por meio de:

```c
scanf()
```

Os resultados e mensagens são apresentados utilizando:

```c
printf()
```

Essas funções permitem a interação entre o programa e o usuário pelo terminal.

---

### Estruturas Condicionais

A estrutura principal utilizada para controlar as opções do menu é:

```c
switch...case
```

Cada `case` representa uma operação disponível na calculadora.

Também são utilizadas estruturas:

```c
if...else
```

para realizar verificações e tratamentos de situações específicas, como divisão por zero, números negativos no cálculo de fatorial e valores inválidos para o cálculo de logaritmos.

---

### Estruturas de Repetição

O programa utiliza diferentes estruturas de repetição.

#### `do...while`

Utilizada para manter a calculadora em execução enquanto o usuário desejar realizar novos cálculos.

```c
do {
    // execução do programa
} while (continuar == 'Y' || continuar == 'y');
```

#### `for`

Utilizada no cálculo do fatorial para realizar as multiplicações sucessivas.

#### `while`

Utilizada nos cálculos de MMC e MDC para executar o algoritmo baseado no cálculo do resto da divisão.

---

## Operações Matemáticas

### Funções Trigonométricas

As operações de seno, cosseno e tangente recebem o ângulo em **graus**.

Antes do cálculo, o programa realiza a conversão para radianos:

```text
radianos = graus × π / 180
```

Após a conversão, são utilizadas as funções `sin()`, `cos()` e `tan()`.

---

### Fatorial

O programa calcula o fatorial de números inteiros não negativos.

Exemplo:

```text
5! = 5 × 4 × 3 × 2 × 1 = 120
```

Valores negativos são tratados como inválidos, pois o programa não realiza o cálculo do fatorial para números negativos.

---

### Logaritmo Natural

O cálculo do logaritmo é realizado utilizando:

```c
log()
```

O programa verifica se o número informado é maior que zero antes de realizar o cálculo.

---

### MMC e MDC

O programa calcula o **Mínimo Múltiplo Comum (MMC)** e o **Máximo Divisor Comum (MDC)** utilizando operações de resto da divisão.

Essas operações utilizam estruturas de repetição para realizar os cálculos necessários.

---

### Média e Mediana

A calculadora permite calcular a média aritmética de três números.

Também é possível calcular a mediana entre três valores, organizando os números para identificar o valor central.

---

### Conversão de Ângulos

A calculadora possui conversões entre graus e radianos.

#### Graus para radianos

```text
radianos = graus × π / 180
```

#### Radianos para graus

```text
graus = radianos × 180 / π
```

---

## Tratamento de Erros

O programa possui verificações para algumas situações inválidas.

Entre elas:

* Divisão por zero;
* Fatorial de números negativos;
* Logaritmo de números menores ou iguais a zero;
* Cálculo do MMC envolvendo zero;
* Cálculo do MDC quando ambos os valores são zero;
* Opções inválidas no menu.

Quando uma situação inválida é identificada, o programa apresenta uma mensagem de erro ao usuário.

---

## ▶️ Compilação e Execução

Para executar o projeto, é necessário possuir um compilador compatível com a linguagem C.

### Compilação

Utilizando o compilador **GCC**, execute o seguinte comando dentro da pasta do projeto:

```bash
gcc Calculadora.c -o Calculadora -lm
```

A opção `-lm` é necessária para realizar a ligação com a biblioteca matemática `math.h`.

### Execução no Windows

```bash
.\Calculadora.exe
```

### Execução no Linux/macOS

```bash
./Calculadora
```

---

## Exemplos de Uso

### Adição

```text
Escolha uma opcao: 1

Digite o primeiro numero: 10
Digite o segundo numero: 5

Resultado: 10.00 + 5.00 = 15.00
```

---

### Potenciação

```text
Escolha uma opcao: 5

Digite o primeiro número (Base):
2

Digite o segundo número (Expoente):
3

Resultado: 2 ^ 3 = 8.0
```

---

### Média

```text
Escolha uma opcao: 17

Digite o primeiro numero:
10

Digite o segundo numero:
20

Digite o terceiro numero:
30

Media = 20.00
```

---

### Conversão de Graus para Radianos

```text
Escolha uma opcao: 19

Digite o valor em graus:
180

180.00 graus = 3.1416 radianos
```

---

### Tratamento de Erro

Exemplo de tentativa de divisão por zero:

```text
Escolha uma opcao: 4

Digite o numerador (dividendo): 10
Digite o denominador (divisor): 0

Erro: Divisao por zero nao e permitida!
```

---

## 📁 Organização do Projeto

```text
📦Desenvolvimento-de-Algoritmo-e-Pensamento-Computacional
  └── 📦calculadora-c
       ┣ 📜 Calculadora.c
       ┗ 📜 README.md
```

---

## 🎓 Estudante

**Aluno:** Luiz Antonio Xavier

---

<div align="center">

**Projeto desenvolvido como atividade prática da disciplina de Desenvolvimento de Algoritmos e Pensamento Computacional, utilizando a linguagem C.**

</div>
