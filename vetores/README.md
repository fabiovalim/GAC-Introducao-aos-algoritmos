# Lista de estudos - Modularização
Atividades de Introdução aos Algoritmos referente a Vetores.

# ENUNCIADOS
# <a href="https://github.com/fabiovalim/GAC_Introducao_aos_algoritmos/blob/main/vetores/exercicios/001.cpp"> 001 <a>
Dadas as temperaturas que foram registradas diariamente durante uma semana, faça um programa que, usando vetores, calcule e mostre a temperatura média e em quantos dias dessa semana a temperatura esteve acima da média. Informe também a maior temperatura no período
Entradas:
double vet[7] - Vetor de temperaturas (separados por espaços)
Saída:
double media - temperatura média calculada
int total - total de dias com temperatura acima da média
double maior temperatura

# <a href="https://github.com/fabiovalim/GAC_Introducao_aos_algoritmos/blob/main/vetores/exercicios/002.cpp"> 002 <a>
Um poderoso mago está cercado por seus inimigos e precisa utilizar sua magia para causar dano em área, esse feitiço causa 1 de dano a todos os adversários e se pelo menos um inimigo for vencido o mago irá relançar a magia até que nenhum outro possa ser derrotado ou que todos já estejam derrotados. Sabe-se de antemão que ele irá enfrentar 10 inimigos.
Faça um programa que preencha um vetor com números inteiros representando a vida dos inimigos do mago, seu programa deverá então simular o lançamento do feitiço e caso algum inimigo seja derrotado (representado pela vida atingir o valor 0) o programa irá relançar a magia, ao final da execução deverá ser mostrado na saída padrão a quantidade de inimigos que foram derrotados na batalha. Por exemplo, se tiver 3 inimigos com vidas 1, 4 e 3, ao lançar a primeira magia um inimigo é derrotado e o vetor fica com 0, 3 e 2. Ao lançar novamente o feitiço, não é derrotado nenhum inimigo e termina a batalha.
Entradas:
Elementos de vetor com 10 posições representando a vida dos inimigos.
Saídas:
Quantidade de inimigos derrotados.

# <a href="https://github.com/fabiovalim/GAC_Introducao_aos_algoritmos/blob/main/vetores/exercicios/003.cpp"> 003 <a>
Crie um programa que preencha um vetor com 10 números inteiros, calcule e mostre dois vetores resultantes. O primeiro vetor resultante deve conter os números múltiplos de 2, e o segundo deve conter os números múltiplos de 3. O seu programa deverá também imprimir no dispositivo de saída padrão o maior múltiplo de 2 e o maior múltiplo de 3, associados aos vetores resultantes, respectivamente.
Assuma que todos os dados de entrada serão fornecidos em uma única linha. Assuma também que sempre haverá no mínimo um número múltiplo de 2 e um número múltiplo de 3 nos dados de entrada. E caso um número seja múltiplo de 2 e 3 simultaneamente, este número deverá aparecer em ambos os vetores resultantes.
Entradas:
Dez números inteiros representando o vetor geral.
Saídas:
Vetor resultante com os números inteiros múltiplos de 2. Na mesma ordem em que apareceram no vetor de entrada.
Maior número múltiplo de 2 do primeiro vetor resultante (Número Inteiro).
Vetor resultante com os números inteiros múltiplos de 3. Na mesma ordem em que apareceram no vetor de entrada.
Maior número múltiplo de 3 do segundo vetor resultante (Número Inteiro).

# <a href="https://github.com/fabiovalim/GAC_Introducao_aos_algoritmos/blob/main/vetores/exercicios/004.cpp"> 004 <a>
Escreva um algoritmo que leia um vetor de 10 posições do tipo caractere, que representa o gabarito de uma prova. Em seguida leia 2 vetores que representam as provas de 2 alunos. Escreva a quantidade de questões que o aluno acertou e se o aluno acertar 6 ou mais questões, escreva "APROVADO", e "REPROVADO" se o aluno acertou menos que 6 questões.
Obs.: Considere que não existirão vetores vazios
Entradas:
vetor[ 10 ] (char)
O vetor prova de cada um dos 2 alunos
Saídas:
Número (int)de acertos de cada aluno
"APROVADO" se o número de acertos for maior ou igual a 6
ou "REPROVADO" se o número de acertos for menor que 6

# <a href="https://github.com/fabiovalim/GAC_Introducao_aos_algoritmos/blob/main/vetores/exercicios/005.cpp"> 005 <a>
Faça um programa que preencha um vetor com dez números reais, calcule e mostre a quantidade de números positivos (incluindo o zero) e a soma dos números negativos desse vetor.
Obs: para soluções em Python utilize as listas padrões da linguagem ao invés de vetores.
Entrada:
Dez números reais (a serem guardados em um vetor).
Saída:
Quantidade de números positivos no vetor.
Soma dos números negativos do vetor.

# <a href="https://github.com/fabiovalim/GAC_Introducao_aos_algoritmos/blob/main/vetores/exercicios/006.cpp"> 006 <a>
Faça um programa para receber nove números inteiros positivos, armazená-los em um vetor, calcular e exibir no dispositivo de saída padrão aqueles números que são primos e suas respectivas posições no vetor. Se nenhum número primo for fornecido, nenhuma mensagem precisará ser exibida.
Entradas:
Nove números inteiros positivos a serem armazenados em um vetor.
Saídas:
Sequência de números primos e suas respectivas posições (índices no vetor). Obs.: Aqueles números que forem primos e suas respectivas posições deverão ser exibidos aos pares.

# <a href="https://github.com/fabiovalim/GAC_Introducao_aos_algoritmos/blob/main/vetores/exercicios/007.cpp"> 007 <a>
Uma empresa de ônibus está disponibilizando oito veículos para uma viagem para Aparecida do Norte no feriado de 12 de outubro. O funcionário da empresa possui em um papel uma tabela com uma linha e oito colunas, onde ele deve escrever o nome da pessoa que reservar cada ônibus. Obs: antes de colocar os nomes, a tabela tem a palavra "disponivel" em cada célula.
As pessoas reservam os ônibus informando o número dele (de 0 a 7) e seu primeiro nome. Se o número informado não estiver reservado, o nome da pessoa é escrito na tabela, caso contrário, ele fica sem reserva de ônibus.
Faça um programa que tenha um vetor para representar a tabela citada acima. O programa deverá receber da entrada padrão uma sequência de nomes e números de ônibus e preencher o vetor conforme a tabela é preenchida. O programa deverá também contabilizar o número de pedidos de reserva não atendidos. Por fim, o vetor e o número de pedidos não atendidos devem ser exibidos na saída padrão.
Entrada:
Sequência de nomes e números de ônibus (0 a 7). Obs: os dados devem ser lidos até que seja informada a palavra "fim" como nome.
Saída:
Vetor com os nomes das pessoas que reservaram os ônibus.
Quantidade de pedidos de reserva não atendidos.

# <a href="https://github.com/fabiovalim/GAC_Introducao_aos_algoritmos/blob/main/vetores/exercicios/008.cpp"> 008 <a>
Um jogador de RPG gostaria de saber se seu D6 (dado de seis lados) está viciado. Para tanto, ele jogou o dado 20 vezes e registrou os resultados obtidos em cada jogada. Faça um programa que receba os resultados das vinte jogadas e exiba no dispositivo de saída padrão a frequência com que cada um dos valores possíveis apareceu. A saída deve seguir o padrão face do dado: frequência.
Entradas:
Sequência de 20 valores inteiros no intervalo [1,6].
Saídas:
Relação da frequência de cada lado do dado.

# <a href="https://github.com/fabiovalim/GAC_Introducao_aos_algoritmos/blob/main/vetores/exercicios/009.cpp"> 009 <a>
Faça um programa que receba o nome de dez clientes de um restaurante e armazene-os em um vetor. Em um segundo vetor, armazene a quantidade de refeições feitas por cada um dos dez clientes. Sabe-se que, a cada dez refeições, a refeição seguinte é grátis e sabe-se também que os clientes pagam cada refeição logo após consumirem.
Faça então um programa que mostre o nome de todos os clientes, com a quantidade de refeições que eles efetivamente pagaram.
Entrada:
Dez nomes de clientes.
Dez quantidades de refeições dos clientes.
Saída:
Sequência com o nome de cada cliente e a quantidade de refeições que eles precisarão pagar.

# <a href="https://github.com/fabiovalim/GAC_Introducao_aos_algoritmos/blob/main/vetores/exercicios/010.cpp"> 010 <a>
Faça um programa que crie um vetor de 5 posições, depois disso devem ser lidos 5 números inteiros não negativos. Se for colocado como entrada um número inteiro negativo, ele deve ser ignorado, o próximo número irá assumir sua posição, e o vetor com 5 posições deve ficar completo.
O programa deve substituir todos os números do vetor por -1, porém os elementos devem ser substituídos do menor para o maior. A cada substituição, deve ser mostrado como o vetor está.

# <a href="https://github.com/fabiovalim/GAC_Introducao_aos_algoritmos/blob/main/vetores/exercicios/011.cpp"> 011 <a>
Faça um programa que leia um vetor com quinze posições para números inteiros. Depois da leitura, divida todos os seus elementos pelo maior valor do vetor (divisão inteira). Escreva todos os valores do vetor após o calculo.
Entradas:
Quinze números inteiros.
Saídas:
Os quinze valores armazenados no vetor, em ordem.

# <a href="https://github.com/fabiovalim/GAC_Introducao_aos_algoritmos/blob/main/vetores/exercicios/012.cpp"> 012 <a>
Faça um programa que leia 2 vetores A e B, de 10 posições cada. Faça um terceiro vetor C com a média do primeiro valor do vetor A com o último valor do vetor B, colocado na primeira posição do vetor C, o segundo valor do vetor A com o penúltimo valor do vetor B, colocando na segunda posição do vetor C, assim sucessivamente. Em seguida descubra o maior valor e o segundo maior valor dos vetores A e B.
Entradas:
float VetA[ 10 ], VetB[ 10 ]. - Vetores que devem ser preenchidos.
Saídas:
Vetor C, com a média dos dos vetores, como no exemplo. (float).
Maior e segundo maior elemento do vetor A. (float).
Maior e segundo maior elemento do vetor B. (float).

# <a href="https://github.com/fabiovalim/GAC_Introducao_aos_algoritmos/blob/main/vetores/exercicios/013.cpp"> 013 <a>
Desenvolva um programa que receba do dispositivo de entrada padrão um vetor de 16números reais e um número inteiro N. Seu programa deverá exibir no dispositivo de saída padrão o somatório dos N primeiros números do vetor de entrada. Assuma que o valor de N sempre será menor ou igual a quantidade total de elementos presentes no vetor.
Entradas:
Um vetor de 16 números reais. Os elementos do vetor serão fornecidos em uma única linha, separados por espaço.
Um número inteiro N.
Saídas:
Um número real que representa o somatório dos N primeiros números do vetor de entrada. A saída deve ser apresentada com duas casas decimais.

# <a href="https://github.com/fabiovalim/GAC_Introducao_aos_algoritmos/blob/main/vetores/exercicios/014.cpp"> 014 <a>
A cada final de semestre letivo a UFLA solicita a cada aluno uma avaliação das disciplinas cursadas. Essa avaliação é feita atribuindo-se notas (valores inteiros) uma escala de 1 a 5, com o seguinte significado: 5 = MUITO BOM, 4 = BOM, 3 = REGULAR, 2 = RUIM, 1 = PÉSSIMO. Escreva um programa que leia um vetor de respostas de avaliação de 9 disciplinas e imprima a frequência relativa de cada resposta conforme ilustrado nos exemplos a seguir. A saída deve seguir o padrão "nota: frequência relativa".
Entradas:
A nota dada para cada uma das 9 disciplinas (valores inteiros no intervalo [1,5]). Assuma que todos os valores são fornecidos em uma única linha.
Saídas:
Relação da frequência relativa de cada nota (da maior nota para a menor).

# <a href="https://github.com/fabiovalim/GAC_Introducao_aos_algoritmos/blob/main/vetores/exercicios/015.cpp"> 015 <a>
Faça um programa que leia um vetor com 7 inteiros. O programa deverá ainda ler um número inteiro N e verificar se existe dentro do vetor três números cujas somas sejam iguais a N. Você foi informado que caso exista mais de uma alternativa, para dar preferência àquela que use valores iniciais do vetor (e imprimir apenas essa).
Obs: Caso não existam três números que satisfaçam a soma, deverá ser impresso apenas -1.
Entradas:
Elementos do vetor.
Número inteiro N.
Saídas:
Os três números utilizados ou -1 caso a soma não seja possível.

# <a href="https://github.com/fabiovalim/GAC_Introducao_aos_algoritmos/blob/main/vetores/exercicios/016.cpp"> 016 <a>
Na matemática a união de dois conjuntos A e B é representada por A ∪ B e é formada por todos os elementos pertencentes a A ou B. Por exemplo, seja A = {1, 2, 3} e B = {4, 5}, então a união destes dois conjuntos será A ∪ B = {1, 2, 3, 4, 5}, porém caso um elemento esteja em ambos os conjuntos ele não irá aparecer duas vezes no conjunto união, por exemplo, seja A = {1, 2, 3} e B = {1, 2, 4}, assim a união será A ∪ B = {1, 2, 3, 4}.
Utilizando os conceitos de conjunto faça um programa que leia dois vetores A e B, cada um com 5 elementos, e determine a união.
Entradas:
Elementos do vetor A.
Elementos do vetor B.
Saídas:
Vetor C representado a união dos vetores A e B.

# <a href="https://github.com/fabiovalim/GAC_Introducao_aos_algoritmos/blob/main/vetores/exercicios/017.cpp"> 017 <a>
Na matemática a interseção de dois conjuntos A e B é representada por A ∩ B e é formada por todos os elementos pertencentes a A e B ao mesmo tempo. Por exemplo, seja A = {1, 2, 3} e B = {1, 4, 5}, então a interseção destes dois conjuntos será A ∩ B = {1}. Um outro exemplo é dado por A = {1, 2, 3, 4} e B = {1, 2, 4, 5, 3}, com interseção dada por A ∩ B = {1, 2, 3, 4}. Caso A e B sejam dadas por A = {1, 2, 3, 4} e B = { 5, 6, 7}, então a interseção seja dada por A ∩ B = { }.
Utilizando os conceitos de conjunto faça um programa que leia dois vetores A e B, cada um com 5 elementos, e determine a interseção desses vetores.
Entradas:
Elementos do vetor A.
Elementos do vetor B.
Saídas:
Vetor C representado a interseção dos vetores A e B. Caso a interseção seja vazia, imprima VAZIO.

# <a href="https://github.com/fabiovalim/GAC_Introducao_aos_algoritmos/blob/main/vetores/exercicios/018.cpp"> 018 <a>
Na matemática a diferença do conjunto B para o conjunto A é representada por A - B e é formada por todos os elementos pertencentes a A que não pertencem a B. Por exemplo, seja A = {1, 2, 3} e B = {1, 4, 5}, então a diferença de B para A será A - B = {2,3}. Um outro exemplo é dado por A = {1, 2, 3, 4} e B = {1, 2, 4, 5, 3}, com interseção dada por A - B = { }. Caso A e B sejam dadas por A = {1, 2, 3, 4} e B = { 5, 6, 7}, então a diferença será dada por A - B = { 1, 2, 3, 4}.
Utilizando os conceitos de conjunto faça um programa que leia dois vetores A e B, cada um com 5 elementos, e determine a diferença A - B desses vetores.
Entradas:
Elementos do vetor A.
Elementos do vetor B.
Saídas:
Vetor C representado a diferença A - B. Caso a diferença seja vazia, imprima VAZIO.

# <a href="https://github.com/fabiovalim/GAC_Introducao_aos_algoritmos/blob/main/vetores/exercicios/019.cpp"> 019 <a>
Faça um programa que leia um vetor de 10 números inteiros, encontre e escreva o maior e o menor elemento e suas respectivas posições. No caso do maior ou menor elemento aparecerem mais de uma vez no vetor, informe a primeira ocorrência
Entradas:
cada elemento do vetor
Saídas:
o maior valor do vetor
o índice do maior valor do vetor
o menor valor do vetor
o índice do menor valor do vetor
É obrigatório que a leitura de todos os elementos do vetor seja feita antes do processamento dos elementos do vetor.

# <a href="https://github.com/fabiovalim/GAC_Introducao_aos_algoritmos/blob/main/vetores/exercicios/020.cpp"> 020 <a>
Dados dois vetores x e y, ambos com 5 elementos, determinar o produto escalar desses vetores.
Para calcular o produto escalar utilize a seguinte fórmula:
![alt text](<Captura de tela 2024-05-26 130433.png>)
Entrada:
A primeira linha será os 5 valores de cada posição do primeiro vetor. A segunda linha será os 5 valores de cada posição do segundo vetor.
Exemplo de entrada:
2.2 3.5 1 2.8 1.6
1.2 6.5 3 2 1.65
Saída:
A saída dever ser composta de apenas uma linha contendo o valor do produto escalar.
Exemplo de saída:
36.63