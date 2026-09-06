<div align="center">

# 🧮 Calculadora Flowgorithm

![Flowgorithm](https://img.shields.io/badge/Flowgorithm-Algoritmos-blue?style=for-the-badge)
![Operações](https://img.shields.io/badge/Operações-20-success?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Concluído-brightgreen?style=for-the-badge)

<br>

Projeto acadêmico desenvolvido utilizando o **Flowgorithm** para a disciplina de **Desenvolvimento de Algoritmos e Pensamento Computacional**.

</div>

---

## Objetivo

Desenvolver uma calculadora utilizando o **Flowgorithm**, aplicando conceitos fundamentais de lógica de programação.

Durante o desenvolvimento do projeto foram utilizados conceitos como:

* Variáveis e tipos de dados;
* Entrada e saída de dados;
* Operadores matemáticos;
* Estruturas condicionais;
* Estruturas de repetição;
* Cálculos matemáticos;
* Conversões de temperatura;
* Organização de algoritmos;
* Desenvolvimento de fluxogramas.

O programa possui **20 operações disponíveis**, incluindo as funções obrigatórias de **cálculo do IMC** e **cálculo de áreas de figuras geométricas**.

---

## Descrição

A **Calculadora Flowgorithm** é um programa desenvolvido por meio de fluxogramas que permite ao usuário selecionar diferentes operações matemáticas a partir de um menu interativo.

Após selecionar uma opção, o usuário informa os valores necessários e o algoritmo realiza o processamento correspondente, apresentando o resultado na tela.

O programa permanece em execução enquanto o usuário desejar continuar utilizando a calculadora.

As operações são controladas por estruturas condicionais, permitindo que o algoritmo identifique a opção selecionada e execute o cálculo correspondente.

---

## Funcionalidades

A calculadora possui **20 operações disponíveis**:

| Nº | Operação                          | Descrição                                              |
| -: | --------------------------------- | ------------------------------------------------------ |
| 01 | **Soma**                          | Soma dois valores                                      |
| 02 | **Subtração**                     | Subtrai um valor de outro                              |
| 03 | **Divisão**                       | Divide um valor por outro                              |
| 04 | **Multiplicação**                 | Multiplica dois valores                                |
| 05 | **Logaritmo Base 10**             | Calcula o logaritmo de um número na base 10            |
| 06 | **Logaritmo Natural**             | Calcula o logaritmo natural de um número               |
| 07 | **Fatorial**                      | Calcula o fatorial de um número inteiro                |
| 08 | **Módulo**                        | Calcula o resto da divisão entre dois números inteiros |
| 09 | **Potenciação**                   | Calcula uma base elevada a um expoente                 |
| 10 | **Raiz Quadrada**                 | Calcula a raiz quadrada de um número                   |
| 11 | **Porcentagem**                   | Calcula uma porcentagem de determinado valor           |
| 12 | **Média**                         | Calcula a média aritmética de dois valores             |
| 13 | **Celsius → Fahrenheit**          | Converte temperatura de Celsius para Fahrenheit        |
| 14 | **Fahrenheit → Celsius**          | Converte temperatura de Fahrenheit para Celsius        |
| 15 | **Constante PI**                  | Exibe o valor da constante π                           |
| 16 | **Constante de Euler-Mascheroni** | Exibe o valor aproximado da constante 0.5772156649     |
| 17 | **Cubo de um Número**             | Calcula o cubo de um número                            |
| 18 | **Resto da Divisão**              | Calcula o resto da divisão entre dois valores          |
| 19 | **Cálculo do IMC**                | Calcula o Índice de Massa Corporal                     |
| 20 | **Áreas Geométricas**             | Calcula áreas de diferentes figuras geométricas        |

---

## Funcionalidades Obrigatórias

### Cálculo do IMC

A calculadora possui uma operação específica para calcular o **Índice de Massa Corporal (IMC)**.

O usuário informa:

* Peso em quilogramas;
* Altura em metros.

O cálculo realizado pelo algoritmo segue a fórmula:

```text
IMC = peso / (altura × altura)
```

O programa também verifica se o peso e a altura informados são maiores que zero antes de realizar o cálculo.

---

### Área de Figuras Geométricas

A opção de áreas geométricas permite escolher entre quatro figuras:

* Quadrado;
* Retângulo;
* Triângulo;
* Círculo.

Cada figura solicita ao usuário as medidas necessárias para realizar o cálculo.

#### Quadrado

```text
Área = lado × lado
```

#### Retângulo

```text
Área = base × altura
```

#### Triângulo

```text
Área = (base × altura) / 2
```

#### Círculo

```text
Área = π × raio²
```

---

## 🧠 Conceitos Aplicados

### Variáveis

O algoritmo utiliza variáveis para armazenar:

* Opções selecionadas no menu;
* Números inteiros;
* Valores reais;
* Resultados de cálculos;
* Temperaturas;
* Valores utilizados no cálculo de áreas;
* Resposta do usuário para continuar utilizando o programa.

Entre os tipos de dados utilizados estão:

```text
Integer
Real
String
```

---

### Entrada de Dados

O usuário informa os valores necessários por meio dos blocos de entrada do Flowgorithm.

Esses dados são armazenados em variáveis e utilizados posteriormente nas operações matemáticas.

---

### Saída de Dados

Os resultados dos cálculos são apresentados ao usuário por meio dos blocos de saída.

O programa também exibe mensagens de orientação, solicitações de dados e mensagens relacionadas a situações inválidas.

---

### Estruturas Condicionais

O fluxograma utiliza estruturas condicionais para identificar a operação escolhida pelo usuário.

A estrutura principal é formada por uma sequência de decisões que verifica o valor armazenado na variável `opcao`.

Também são utilizadas condições específicas em algumas operações, como:

* Verificação de divisão por zero na operação de módulo;
* Verificação de peso e altura positivos no cálculo do IMC;
* Identificação de figuras geométricas inválidas;
* Identificação de opções inválidas no menu.

---

### Estruturas de Repetição

A calculadora utiliza uma estrutura de repetição para permitir que o programa continue em execução enquanto o usuário desejar realizar novos cálculos.

A repetição é controlada pela variável:

```text
resposta
```

O algoritmo permanece no menu enquanto a resposta for:

```text
S
```

ou:

```text
s
```

Além disso, a operação de fatorial utiliza uma estrutura de repetição para realizar as multiplicações sucessivas.

---

## Operações Matemáticas

### Logaritmos

A calculadora possui duas operações relacionadas a logaritmos:

#### Logaritmo na Base 10

Utiliza:

```text
Log10(x)
```

#### Logaritmo Natural

Utiliza:

```text
Log(x)
```

---

### Fatorial

O cálculo do fatorial é realizado por meio de uma estrutura de repetição.

O algoritmo multiplica sucessivamente os números inteiros até atingir o valor informado.

Exemplo:

```text
5! = 5 × 4 × 3 × 2 × 1 = 120
```

---

### Potenciação

A operação de potenciação utiliza a seguinte relação:

```text
base ^ expoente
```

---

### Raiz Quadrada

A raiz quadrada é calculada utilizando:

```text
Sqrt(x)
```

---

### Porcentagem

O cálculo da porcentagem é realizado utilizando:

```text
resultado = valor × porcentagem / 100
```

---

### Conversão de Temperatura

#### Celsius para Fahrenheit

```text
Fahrenheit = (Celsius × 9 / 5) + 32
```

#### Fahrenheit para Celsius

```text
Celsius = (Fahrenheit - 32) × 5 / 9
```

---

### Constante PI

A opção correspondente à constante PI atribui o seguinte valor:

```text
3.14159
```

---

### Constante de Euler-Mascheroni

A opção 16 apresenta o valor:

```text
0.5772156649
```

Esse é o valor aproximado da **constante de Euler-Mascheroni**.

---

### Cubo de um Número

A opção 17 calcula o cubo do número informado:

```text
cubo = número³
```

---

## Tratamento de Situações Inválidas

O fluxograma possui verificações para algumas situações específicas.

Entre elas:

* Tentativa de calcular módulo com divisor igual a zero;
* Peso ou altura menores ou iguais a zero no cálculo do IMC;
* Seleção de uma figura geométrica inexistente;
* Seleção de uma opção inexistente no menu.

Quando uma dessas situações ocorre, o programa apresenta uma mensagem correspondente ao usuário.

---

## ▶️ Como Executar

Para executar o projeto, é necessário possuir o **Flowgorithm** instalado no computador.

### Passos

1. Baixe ou clone este repositório.
2. Acesse a pasta do projeto.
3. Abra o arquivo `Calculadora.fprg`.
4. Execute o fluxograma utilizando o Flowgorithm.
5. Escolha uma das opções disponíveis no menu.
6. Informe os valores solicitados.
7. Visualize o resultado.
8. Informe se deseja continuar utilizando a calculadora.

---

## Exemplo de Funcionamento

```text
Selecione uma das opções abaixo:

1 - Soma
2 - Subtração
3 - Divisão
...
19 - Cálculo do IMC
20 - Área de figuras geométricas
```

Após selecionar uma operação, o programa solicita os valores necessários.

Exemplo:

```text
Opção: Soma

Insira o primeiro número:
10

Insira o segundo número:
5

O resultado da soma é:
15
```

---

## Fluxo do Programa

```text
Início
   ↓
Exibe o menu
   ↓
Usuário seleciona uma operação
   ↓
Solicita os dados necessários
   ↓
Realiza o processamento
   ↓
Exibe o resultado
   ↓
Usuário deseja continuar?
   ↓
 Sim ─────────→ Retorna ao menu
   ↓
 Não
   ↓
Fim
```

---

## 📁 Organização do Projeto

```text
📦 desenvolvimento-de-algoritmo-e-pensamento-computacional
  └── 📦 calculadora-flowgorithm
       ┣ 📜 Calculadora.fprg
       ┗ 📜 README.md
```

---

## 🎓 Estudante

**Aluno:** Luiz Antonio Xavier

---

## Status

**Concluído**

---

<div align="center">

Projeto desenvolvido como atividade prática da disciplina de **Desenvolvimento de Algoritmos e Pensamento Computacional**, utilizando o **Flowgorithm**.

</div>
