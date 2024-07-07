# projeto_estudo
esse repositório foi criado com intuito de praticar e resolver exercícios em C  
# Documentação do Projeto Multiplo de 3 e 5 
## Descrição

Este projeto consiste em um programa em C que calcula a soma dos múltiplos de 3 e 5 até um limite especificado (1000 neste caso). Os números que são múltiplos de 3 ou 5 são somados e o resultado é exibido.

## Funcionamento
O programa declara uma variável _i_ para iterar de 0 até o limite especificado **(lista)**.
Para cada valor de i, verifica se ele é múltiplo de **3** ou **5**.
Se i for múltiplo de **3** ou **5**, adiciona-o à variável result.
Após a iteração, exibe a soma dos múltiplos encontrados.
## Observações
O programa utiliza o operador de módulo _(%)_ para verificar se um número é múltiplo de **3** ou **5**.
Os números que não são múltiplos de 3 ou 5 não são impressos.


# Documentação do Projeto Fibonacci
## Introdução

Este projeto apresenta um programa C simples que calcula e imprime a sequência de Fibonacci até um número especificado pelo usuário. A sequência de Fibonacci é uma série de números em que cada número é a soma dos dois números anteriores, começando por 0 e 1.

## Funcionamento do Programa

O programa principal (main) define uma função chamada fibonacci e a chama com um argumento que indica o número de termos da sequência a serem calculados. A função fibonacci utiliza um loop do-while para calcular e imprimir cada termo da sequência.

## Descrição Detalhada das Funções

1. **Função _main_**:

**Descrição:** Ponto de entrada do programa.
**Parâmetros:** Nenhum.
**Retorno:** Valor inteiro 0 indicando a execução bem-sucedida do programa.
**Ações:**
Chama a função fibonacci para calcular e imprimir a sequência de Fibonacci.
Utiliza a função system("PAUSE") para pausar a execução do programa e esperar que o usuário pressione uma tecla antes de finalizar.
2. **Função fibonacci**:

**Descrição:** Calcula e imprime a sequência de Fibonacci até um número especificado.
**Parâmetros:**
**quant:** Valor inteiro que indica o número de termos da sequência a serem calculados.
**Retorno:** Nenhum.
**Ações:**
Define variáveis locais _i_, _j_, _l_ e _x_ para armazenar valores intermediários durante o cálculo da sequência.
Utiliza um loop do-while para iterar até que o número de termos calculados _(x)_ seja menor que o valor especificado em quant.
**Dentro do loop:**
Imprime o valor atual da sequência _(l)_ na tela.
Atualiza os valores de j e l para os próximos termos da sequência.
Incrementa o contador x.
## Observações

O programa assume que o valor de quant fornecido pelo usuário seja um número inteiro positivo.
O programa não verifica se o valor de quant é maior que o limite máximo de precisão do tipo de dado int.
O programa pode ser facilmente modificado para imprimir a sequência de Fibonacci em diferentes formatos, como sem vírgula final ou com formatação de casas decimais.