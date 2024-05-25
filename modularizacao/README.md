# Lista de estudos - Modularização
Atividades de Introdução aos Algoritmos referente a Modularização e passagem de parâmetros.

# ENUNCIADOS
# <a href="https://github.com/fabiovalim/modularizacao-exercicios/blob/main/modularizacao/exercicios/001.cpp"> 001 <a>
Escreva uma função chamada Maximo, que recebe dois números reais e retorna o maior deles. Escreva um programa para utilizar esta função, exibindo no dispositivo de saída padrão o resultado obtido pela função. Se os dois valores forem iguais, apenas exiba um deles.
# <a href="https://github.com/fabiovalim/modularizacao-exercicios/blob/main/modularizacao/exercicios/002.cpp"> 002 <a>
Escreva uma função chamada Media, que recebe dois números reais e retorna sua média. Escreva um programa para utilizar esta função.

Obs: soluções em Python devem possuir um subprograma chamado principal.
# <a href="https://github.com/fabiovalim/modularizacao-exercicios/blob/main/modularizacao/exercicios/003.cpp"> 003 <a>
Escreva uma função que recebe um número inteiro e retorna seu valor absoluto. Um bom planejamento da passagem de parâmetros é parte importante da avaliação.

Escreva um programa para utilizar esta função. O programa deve ler vários números inteiros e escrever o valor absoluto de cada um deles. Não é necessário fazer todas as leituras antes de fazer as escritas. Não é permitido usar uma função de biblioteca para calcular o valor absoluto.

Entradas:

A quantidade de números a processar;
Vários números inteiros para processar (um em cada linha).
Saídas:

O valor absoluto de cada um dos números.
# <a href="https://github.com/fabiovalim/modularizacao-exercicios/blob/main/modularizacao/exercicios/004.cpp"> 004 <a>
Faça um programa que receba um número inteiro n e imprima uma pirâmide contendo n linhas e em cada uma deve conter uma sequência numérica até o número que represente o valor da linha.

O programa deve ter um procedimento que recebe o valor de n e imprime a pirâmide.

Entradas:

Número inteiro informando a quantidade de linhas
Saídas:

n linhas contendo cada uma uma sequencia numérica correspondente ao valor da linha.
# <a href="https://github.com/fabiovalim/modularizacao-exercicios/blob/main/modularizacao/exercicios/005.cpp"> 005 <a>
Escreva um programa que tem uma função que calcula o maior elemento dentre cinco inteiros. Fazer um projeto dos parâmetros necessários para esta função é parte da avaliação.

O programa deverá ter também um módulo principal que é responsável por toda a entrada e saída de dados do programa (operações de leitura e escrita). Ele lê os elementos a serem processados e escreve todos os elementos novamente, seguidos do maior deles.

Entradas:

Cinco números inteiros.
Saídas:

Os cinco números lidos.
O maior dos cinco elementos.
# <a href="https://github.com/fabiovalim/modularizacao-exercicios/blob/main/modularizacao/exercicios/006.cpp"> 006 <a>
Acredita-se que a partir de qualquer número positivo é possível criar uma sequência de números que termina em 1 da seguinte forma:

Se o número for par, o próximo número da sequência será sua metade. Se for impar, o próximo será três vezes o número mais um.

Faça um programa que leia um número positivo, escreva essa sequência de números até o valor 1 e a quantidade de números da sequência (passada por referência para o programa principal). Os valores da sequência devem ser escritos num subprograma. A quantidade de números gerados deve ser escrita no programa principal. O planejamento do subprograma e seus parâmetros é parte importante da avaliação neste problema.

Entradas:

Um número inteiro positivo.
Saídas:

Uma sequência de números conforme as regras acima.
A quantidade de números da sequência.
# <a href="https://github.com/fabiovalim/modularizacao-exercicios/blob/main/modularizacao/exercicios/007.cpp"> 007 <a>
Você foi designado para fazer um programa que converte unidades de distância, que pode ser de metros para centímetros ou vice-versa. Para isso, seu programa deve ter duas funções, uma para converter de metros para centímetros e outra para converter o inverso.

Cada função deve receber a distância como parâmetro (número real) e retornar a distância convertida.

ATENÇÃO! As funções de conversão devem ser utilizadas na função main, onde serão lidos os valores da distância e da unidade para qual a distância deve ser convertida. Na função main, depois de utilizada a função correta deverá ser mostrada na tela a distância convertida.
OBS: Caso seja fornecida uma unidade inválida, o programa deverá exibir a palavra ERRO como resposta.

Entradas:

Distância (real);
Unidade para qual deverá ser convertida (minúsculo, singular e sem acento)
Saída:

Distância convertida, seguida da abreviação da unidade (m ou cm). O valor e a identificação da unidade devem estar separados.
# <a href="https://github.com/fabiovalim/modularizacao-exercicios/blob/main/modularizacao/exercicios/008.cpp"> 008 <a>
As rampas de acesso devem ter inclinação máxima de 8%, ou seja, rampas com inclinações acima de 8% são consideradas inadequadas. O cálculo da inclinação (dado em porcentagem) de uma rampa é dada pela seguinte equação: inclinacao = altura x 100 / base (comprimento da projeção horizontal da rampa). Crie um programa que calcule e exiba a inclinação de um acesso em um prédio formado por N rampas. Por fim, mostre quantas rampas estão adequadas (possuem inclinação menor ou igual a 8%).

Este programa deve conter um subprograma (função). O primeiro subprograma recebe dois números inteiros positivos como parâmetros e retorna um número float com o respectivo valor da inclinação.

Entradas:

número inteiro positivo que determina a quantidade de rampas
dois números inteiros positivos na mesma linha (separados por espaço), sendo o primeiro valor referente a altura (cm) e segundo valor referente a base (cm)
Saídas:

números em ponto flutuante com as inclinações das rampas
número inteiro com a quantidade de rampas com a inclinação adequada
# <a href="https://github.com/fabiovalim/modularizacao-exercicios/blob/main/modularizacao/exercicios/009.cpp"> 009 <a>
José precisava inserir um conjunto de elementos válidos em um arquivo, sendo que um elemento é considerado válido se não é múltiplo de 3. Ele se atrapalhou e inseriu todos os elementos.

Você precisa criar um programa para ler o nome do arquivo informado na entrada padrão, percorrer o arquivo e apagar os elementos múltiplos de 3, gerando o arquivo "saida.txt". Para isso, seu programa deve ter uma função para calcular se o elemento é múltiplo de 3, que tenha como parâmetro o valor lido do arquivo e retorne -1 quando o número é múltiplo de 3 e o próprio elemento caso contrário.

A entrada e saída de dados devem ser feitas na função principal. Considere que haverá pelo menos um elemento válido no arquivo.

Entradas:

entrada padrão
o nome do arquivo de onde serão obtidos os valores inteiros
arquivo texto
vários números inteiros
Saída:

O arquivo "saida.txt" com somente os valores válidos (que não são múltiplos de 3)
# <a href="https://github.com/fabiovalim/modularizacao-exercicios/blob/main/modularizacao/exercicios/010.cpp"> 010 <a>
Na matemática, um número Harshad é um número natural que é divisível pela soma dos seus dígitos. O número 6804, por exemplo, é um número Harshad pois 6+8+0+4 = 18, e 6804 é divisível por 18.

Escreva um programa que verifica se um número é número Harshad. É preciso criar dois subprogramas:

Um subprograma que recebe um número natural e retorna a soma de seus dígitos.
Um subprograma que recebe um número natural e retorna um valor lógico, indicando se ele é um número Harshad.
Para uma boa nota, é preciso um bom planejamento. Não repita código, não repita processamento, escolha nomes significativos, não use parâmetros que não entradas dos subprogramas e não misture interface e processamento (esses dois subprogramas não podem ter operações de leitura ou escrita).

Entradas:

Um número inteiro e positivo.
Saídas:

O resto da divisão do número pela soma de seus digitos.
Um texto (sim/nao), indicando se o número tem a propriedade em questão. Atenção para a ausência de acento em "nao".
# <a href="https://github.com/fabiovalim/modularizacao-exercicios/blob/main/modularizacao/exercicios/011.cpp"> 011 <a>
Escreva um subprograma que receba um número arábico inteiro e retorne o seu correspondente em número romano. A função deve ser capaz de gerar o número romano para qualquer número natural no intervalo [1,50]. Caso seja digitado um valor fora do intervalo válido, uma mensagem "NUMERO INVALIDO" deve ser mostrada e o programa deve esperar por uma nova entrada. A execução deve ser encerrada se um valor negativo for digitado. As operações de leitura e escrita de dados devem ser realizadas na função principal.

Entradas:

Número arábico a ser convertido para número romano.
Saídas:

Número romano correspondente ao valor inserido.
# <a href="https://github.com/fabiovalim/modularizacao-exercicios/blob/main/modularizacao/exercicios/012.cpp"> 012 <a>
Durante a gravidez, é inevitável que muitos casais possuem muitas dúvidas e inclusive curiosidades a respeito do bebê. Em uma clínica médica, a pergunta sobre qual a probabilidade do bebê nascer com olhos claros é bastante recorrente, porém nem sempre há alguém disponível no momento para responder. Para ajudar a clínica a esclarecer esta dúvida de maneira mais eficiente para seus clientes, faça um subprograma que calcule a probabilidade do filho nascer com olhos verdes ou azuis, com base somente na cor dos olhos dos pais, desconsiderando os avós.

Para lhe auxiliar, utilize como base a tabela abaixo. Considere como entradas válidas as cores “Marrom”, “Azul” e “Verde” para os pais, mas somente as cores “Azul” e “Verde” para o filho. Caso uma das cores seja inválida, imprima a palavra “ERRO”, tudo em maiúsculo. O subprograma deverá ter como entrada as cores do pai, da mãe e a cor desejada para o filho na mesma linha. Deverá ter como saída uma String, indicando a porcentagem de chances do filho nascer com aquela cor dos olhos.

![Captura de tela 2024-05-12 200511](https://github.com/fabiovalim/modularizacao-exercicios/assets/159162638/2b573035-f187-4582-9f41-d64aaffade7b)

Entradas:

Strings correspondentes às cores dos olhos do pai, da mãe e cor desejada do filho, respectivamente na mesma linha. A entrada de cada String deve possuir inicial maiúscula e o restante minúsculo.
Saída:

String correspondente a probabilidade do filho nascer com a cor de olhos escolhida.

# <a href="https://github.com/fabiovalim/modularizacao-exercicios/blob/main/modularizacao/exercicios/013.cpp"> 013 <a>
Faça um subprograma que retorne um tipo de arredondamento especial para um número real positivo recebido como parâmetro. Seu subprograma (do tipo função) deverá arredondar o número recebido para cima (menor número inteiro que seja maior do que o número real recebido), caso a parte inteira do parâmetro de entrada seja um número par. Caso contrário, ou seja, a parte inteira do parâmetro seja ímpar, seu subprograma deverá arredondar o número recebido para baixo (maior número inteiro que seja menor do que o número real recebido). Observação: caso considere que seja necessário, você pode utilizar as funções ceil() e floor() nos momentos que achar apropriado.

Entradas:

Um número real positivo.
Saídas:

Um número inteiro positivo.
# <a href="https://github.com/fabiovalim/modularizacao-exercicios/blob/main/modularizacao/exercicios/014.cpp"> 014 <a>
Tião está com um problema em seu computador. Ele acredita que seja algum vírus que tenha sido instalado da última vez que ele acessou o site de receitas culinárias que costuma utilizar. O vírus faz com que uma letra do teclado não funcione, aparecendo um caractere especial no lugar da letra digitada. Por exemplo, tem dia que a tecla "j" não funciona e em seu lugar aparece o caractere "@", assim ao digitar "jaula" aparece na tela "@aula".

O problema é que cada dia é uma tecla diferente que não funciona e também um caractere diferente que aparece no lugar. Tião resolveu então fazer um programa para corrigir os textos que digita. Nesse programa ele criará uma função que receba uma palavra, o caractere que está aparecendo erroneamente e a letra da tecla que está com problemas e retornará uma nova palavra corrigida. O programa deverá receber a letra da tecla que está com problema, o caractere que aparecendo no lugar da letra, a quantidade de palavras e várias palavras (uma em cada linha) e, então, exibirá as palavras corrigidas.

Obs: todas as operações de entrada e saída devem ser feitas no subprograma principal.

Entradas:

Letra da tecla que está com problemas (sempre minúscula).
Caractere que está aparecendo no lugar da letra (nunca será uma letra).
Quantidade de palavras.
Uma palavra em cada linha (sempre com todas as letras minúsculas).
Saídas:

As palavras corrigidas (uma em cada linha).
# <a href="https://github.com/fabiovalim/modularizacao-exercicios/blob/main/modularizacao/exercicios/015.cpp"> 015 <a>
Faça uma sub-rotina que receba como parâmetro um valor inteiro e positivo N indicando a quantidade de parcelas de uma soma S, e que calcula o valor de S pela fórmula:

S = 2/4 + 6/5 + 12/6 + ... + n*(n+1)/(n+3)
A sub-rotina deve ser parte de um programa cujo módulo principal deve ler o N e escrever o S. O planejamento da passagem de parâmetros faz parte da avaliação.

Entradas:

Número de parcelas da soma.
Saídas:

A soma das parcelas (ponto flutuante de precisão dupla).
# <a href="https://github.com/fabiovalim/modularizacao-exercicios/blob/main/modularizacao/exercicios/016.cpp"> 016 <a>
Desenvolva um programa que desenhe um triângulo utilizando os caracteres * e =. O programa deverá solicitar que o usuário digite um número n que deverá ser utilizado para definir a altura e a largura do triângulo. Os caracteres deverão ser alternados de maneira que todas as linhas do desenho sejam iniciadas pelo caractere *.

O programa deve ter um procedimento que recebe o valor de n e imprime a pirâmide.

Entradas:

Número inteiro que indica a altura e a largura do triângulo.
Saídas:

Um conjunto de caracteres * e = no formato de um triângulo.
# <a href="https://github.com/fabiovalim/modularizacao-exercicios/blob/main/modularizacao/exercicios/017.cpp"> 017 <a>
Na matemática, o número de Euler, denominado em homenagem ao matemático suíço Leonhard Euler, é a base dos logaritmos naturais. As variantes do nome do número incluem: número de Napier, constante de Néper, número neperiano, constante matemática, número exponencial(Wikipédia)


Com as informações acima, faça um algoritmo que calcule o número de euler utilizando a fórmula a seguir:

![Captura de tela 2024-05-12 200833](https://github.com/fabiovalim/modularizacao-exercicios/assets/159162638/d988b971-3189-4213-85f2-f56194f200e3)

Utilize uma função para calcular o fatorial.

Dica: armazene o resultado do cálculo do fatorial em uma variável de ponto flutuante.

Entradas:

int n - a precisão a qual o número de euler será calculado (ou seja, o número de termos utilizados no cálculo da série).
Saídas:

A aproximação do número de euler (double) com a precisão especificada.

# <a href="https://github.com/fabiovalim/modularizacao-exercicios/blob/main/modularizacao/exercicios/018.cpp"> 018 <a>
Daniela é enfermeira em um grande hospital, e tem os horários de trabalho muito variáveis. Para piorar, ela tem sono pesado, e uma grande dificuldade para acordar com relógios despertadores. Recentemente ela ganhou de presente um relógio digital, com alarme com vários tons, e tem esperança que isso resolva o seu problema. No entanto, ela anda muito cansada e quer aproveitar cada momento de descanso. Por isso, carrega seu relógio digital despertador para todos os lugares, e sempre que tem um tempo de descanso procura dormir, programando o alarme despertador para a hora em que tem que acordar. No entanto, com tanta ansiedade para dormir, acaba tendo dificuldades para adormecer e aproveitar o descanso.

Um problema que a tem atormentado na hora de dormir é saber quantos minutos ela teria de sono se adormecesse imediatamente e acordasse somente quando o despertador tocasse. Mas ela realmente não é muito boa com números, e pediu sua ajuda para escrever uma função que, dada a hora corrente e a hora do alarme, determine o número de minutos que ela poderia dormir.

Entrada:

A entrada contém vários casos de teste. Cada caso de teste é descrito em uma linha, contendo quatro números inteiros H1, M1, H2 e M2, com H1:M1 representando a hora e minuto atuais, e H2:M2 representando a hora e minuto para os quais o alarme despertador foi programado (0 ≤ H1 ≤ 23, 0 ≤ M1 ≤ 59, 0 ≤ H2 ≤ 23, 0 ≤ M2 ≤ 59). O final da entrada é indicado por uma linha que contém apenas quatro zeros, separados por espaços em branco.
Saídas:

Para cada caso de teste da entrada seu programa deve imprimir uma linha no bloco principal, cada uma contendo um número inteiro, indicando o número de minutos que Daniela tem para dormir.
# <a href="https://github.com/fabiovalim/modularizacao-exercicios/blob/main/modularizacao/exercicios/019.cpp"> 019 <a>
Considere um conjunto com N elementos distintos. Seja a Combinação Simples destes elementos a quantidade de subconjuntos com P elementos distintos que podemos formar. Note que, em cada subconjunto formado, a ordem não importa. Podemos calcular essa combinação simples da seguinte forma:

Combinação simples = N!/(P!*(N-P)!)

Faça um programa que receba do dispositivo de entrada padrão os valores de N e P e retorne no dispositivo de saída padrão a quantidade de combinações simples possíveis com estes valores. Seu programa deverá fazer uso de uma função (subprograma) para calcular o número fatorial de um determinado número inteiro. Dica: utilize double para cálculo e armazenamento do fatorial, para evitar estouro de memória.

Entradas:

Dois números inteiros, representando os valores de N e P. Os dois valores serão fornecidos em uma única linha e separados por espaço.
Saídas:

Um número inteiro indicando a quantidade de combinações simples possíveis.
# <a href="https://github.com/fabiovalim/modularizacao-exercicios/blob/main/modularizacao/exercicios/020.cpp"> 020 <a>
Faça um programa que leia uma fração, simplifique a fração usando um subprograma específico para isto e escreva a fração simplificada. O planejamento a respeito da passagem de parâmetros é parte importante da avaliação.

Considere que não existirão denominadores com o valor 0. Leitura e escrita deverão ser feitas na função principal.

Entradas (cada uma na sua própria linha):

O numerador (número inteiro);
o denominador (número inteiro diferente de zero).
Saídas:

O numerador da fração simplificada;
o denominador da fração simplificada.
# <a href="https://github.com/fabiovalim/modularizacao-exercicios/blob/main/modularizacao/exercicios/021.cpp"> 021 <a>
A proporção áurea, número de ouro, número áureo ou proporção de ouro é uma constante real algébrica irracional denotada pela letra grega phi (Φ), em homenagem ao escultor Phideas (Fídias), que a teria utilizado para conceber o Parthenon, e com o valor arredondado a três casas decimais de 1,618. Também é chamada de seção áurea , razão áurea, razão de ouro, média e extrema razão, divina proporção, divina seção, proporção em extrema razão, divisão de extrema razão ou áurea excelência. O número de ouro é ainda frequentemente chamado razão de Phidias [Wikipédia].

Faça um procedimento que calcula o valor aproximado de phi usando a série de raízes abaixo:

![Captura de tela 2024-05-12 201056](https://github.com/fabiovalim/modularizacao-exercicios/assets/159162638/ba19ee68-b376-4d39-ac05-5cae3d40b882)

A quantidade de termos deverá ser passada como parâmetro para o procedimento e o resultado retornado por referência para o programa principal. O resultado deverá ser impresso no programa principal. Quanto mais termos usados, mais preciso será o resultado. A quantidade de termos da fórmula é a quantidade de raízes, incluindo a última que é a raiz de 1. Use uma variável do tipo ponto flutuante de precisão dupla (double) para conseguir cálculos mais precisos.

Entradas:

A quantidade de termos (raízes) utilizados no cálculo.
Saídas:

O resultado da série de raízes (valor aproximado de phi).

# <a href="https://github.com/fabiovalim/modularizacao-exercicios/blob/main/modularizacao/exercicios/022.cpp"> 022 <a>
Faça um programa que leia um número natural e escreva o reverso desse valor. O reverso de um número é o número de trás para frente, ou seja, resultado da troca dos algarismos do início com os do fim.

Deve haver um subprograma principal que lê um número e escreve o seu reverso. Deve haver um outro subprograma que recebe um número e retorna o seu reverso.

Não é permitido o uso de vetores. Strings são vetores. A troca dos algarismos pode ser feita com uma única repetição de operações aritméticas, sem necessidade de biblioteca de operações matemáticas. Atenção ao planejamento de parâmetros.

Entradas:

Número natural que se deseja obter o reverso.
Saídas:

Reverso do valor informado pelo usuário.
