// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas - Novato
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

/*
    Super Trunfo em C
    Descrição: Jogo de cartas Super Trunfo em C

    Universidade Estácio de Sá
    Gestão da Tecnologia da Informação
    Introdução à Programação de Computadores
    Prof. Sérgio Cardoso
    Autor: Fabiano da Silva Antunes
    Data: 2025-02-26

    Desafio:
    Criar um programa em C que permita ao usuário inserir os dados de duas cartas do Super Trunfo. Para cada carta, o usuário deverá fornecer as seguintes informações:
    Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
    Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
    Nome da Cidade: O nome da cidade. Tipo: char[] (string)
    População: O número de habitantes da cidade. Tipo: int
    Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
    PIB: O Produto Interno Bruto da cidade. Tipo: float
    Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
    Após o usuário inserir os dados de cada carta, seu programa deve exibir na tela as informações cadastradas, de forma organizada e legível. Para cada carta, imprima cada informação em uma linha separada, com uma descrição clara. Por exemplo:

    Carta 1:
    Estado: A
    Código: A01
    Nome da Cidade: São Paulo
    População: 12325000
    Área: 1521.11 km²
    PIB: 699.28 bilhões de reais
    Número de Pontos Turísticos: 50

    Carta 2:
    Estado: B
    Código: B02
    Nome da Cidade: Rio de Janeiro
    População: 6748000
    Área: 1200.25 km²
    PIB: 300.50 bilhões de reais
    Número de Pontos Turísticos: 30

    Requisitos funcionais:
    - O programa deve ler corretamente os dados de duas cartas do usuário via entrada padrão (teclado).
    - O programa deve armazenar os dados lidos em variáveis apropriadas.
    - O programa deve exibir os dados de cada carta na tela, formatados de forma clara e organizada, conforme o exemplo acima.

    Requisitos não funcionais:
    - Usabilidade: O programa deve ser fácil de usar, com instruções claras para o usuário.
    - Legibilidade: O código deve ser bem indentado, com comentários explicativos e nomes de variáveis significativos, facilitando a leitura e compreensão.
    - Corretude: O programa deve funcionar corretamente, sem erros de compilação ou execução.

    Simplificações para o desafio:
    - Você só precisa implementar o cadastro e a exibição de duas cartas.
    - Neste nível, foque apenas na leitura, armazenamento e exibição das informações. Você não precisa implementar nenhuma lógica de comparação entre as cartas ou qualquer outro recurso adicional.
    - Não utilize estruturas de repetição (como for ou while) ou estruturas de decisão (como if ou else). Seu código deve ser uma sequência simples de instruções.
*/

// Tema 1 - Cadastro das cartas - Aventureiro
// Objetivo: No nível básico, você criou um sistema para cadastrar as cartas do Super Trunfo. Agora, vamos adicionar mais detalhes e complexidade ao nosso jogo! Neste nível, você implementará a lógica para calcular e exibir duas novas propriedades importantes para cada cidade: a densidade populacional e o PIB per capita.

/*
    Super Trunfo em C
    Descrição: Jogo de cartas Super Trunfo em C

    Universidade Estácio de Sá
    Gestão da Tecnologia da Informação
    Introdução à Programação de Computadores
    Prof. Sérgio Cardoso
    Autor: Fabiano da Silva Antunes
    Data: 2025-03-02

    Desafio:
    Aprimore o programa em C que você criou no nível básico. O programa continuará lendo as mesmas informações do usuário (estado, código da carta, nome da cidade, população, área, PIB e número de pontos turísticos) para duas cartas. A diferença é que, agora, seu programa também deve:
    Calcular a Densidade Populacional: Divida a população da cidade pela sua área. O resultado será a densidade populacional, que representa o número de habitantes por quilômetro quadrado. Armazene esse valor em uma variável do tipo float.
    Calcular o PIB per Capita: Divida o PIB da cidade pela sua população. O resultado será o PIB per capita, que indica a riqueza média por pessoa na cidade. Armazene esse valor em uma variável do tipo float.
    Exibir os Resultados: Além de exibir as informações lidas do usuário (como no nível básico), seu programa também deve exibir a densidade populacional e o PIB per capita calculados para cada cidade. Formate os valores de ponto flutuante com duas casas decimais.
    Exemplo de Saída:

    Carta 1:
    Estado: A
    Código: A01
    Nome da Cidade: São Paulo
    População: 12325000
    Área: 1521.11 km²
    PIB: 699.28 bilhões de reais
    Número de Pontos Turísticos: 50
    Densidade Populacional: 8102.47 hab/km²
    PIB per Capita: 56724.32 reais

    Carta 2:
    Estado: B
    Código: B02
    Nome da Cidade: Rio de Janeiro
    População: 6748000
    Área: 1200.25 km²
    PIB: 300.50 bilhões de reais
    Número de Pontos Turísticos: 30
    Densidade Populacional: 5622.24 hab/km²
    PIB per Capita: 44532.91 reais

    Requisitos funcionais
    Manter as funcionalidades do nível básico (leitura e exibição dos dados das cartas).
    Calcular e exibir corretamente a densidade populacional e o PIB per capita para cada cidade.
    Requisitos não funcionais
    •    Manter os requisitos não funcionais do nível básico (usabilidade, legibilidade, corretude).
    •    Eficiência: O programa deve realizar os cálculos de forma eficiente.

    Simplificações para o nível intermediário
    Você ainda só precisa lidar com duas cartas.
    Continue sem usar estruturas de repetição (for, while) ou estruturas de decisão (if, else).
*/

// Tema 1 - Cadastro das cartas - Mestre
// Objetivo: Prepare-se para o desafio final! Agora que você já sabe cadastrar cartas e calcular atributos importantes, é hora de colocar suas cartas para lutar! Neste nível avançado, você implementará a lógica de comparação entre duas cartas do Super Trunfo, determinando a vencedora de cada atributo e introduzindo o conceito de "Super Poder". Prepare-se para usar todo o seu conhecimento de operadores relacionais, modificadores de tipo e conversão de tipos em C!

/*
    Super Trunfo em C
    Descrição: Jogo de cartas Super Trunfo em C

    Universidade Estácio de Sá
    Gestão da Tecnologia da Informação
    Introdução à Programação de Computadores
    Prof. Sérgio Cardoso
    Autor: Fabiano da Silva Antunes
    Data: 2025-03-03

    Desafio:
    Seu programa em C deve agora permitir ao usuário inserir os dados de duas cartas, assim como nos níveis anteriores, mas com uma mudança importante: a população agora deve ser armazenada como unsigned long int para acomodar números maiores. As demais informações permanecem com os mesmos tipos. Após a leitura dos dados, seu programa deverá:
    Calcular a Densidade Populacional e o PIB per Capita: Assim como no nível intermediário, calcule e armazene esses valores.
    Calcular o Super Poder: Para cada carta, calcule o "Super Poder" somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder"). Armazene o Super Poder como float. Atenção: Preste muita atenção na conversão de tipos ao somar valores de tipos diferentes!
    Comparar as Cartas: Compare as duas cartas atributo por atributo (exceto estado, código e nome), incluindo o Super Poder. Lembre-se: para a densidade populacional, a carta com o menor valor vence; para os demais atributos (incluindo Super Poder), a carta com o maior valor vence.
    Exibir os Resultados das Comparações: Para cada atributo, imprima na tela qual carta venceu (Carta 1 ou Carta 2), exibindo o resultado da comparação (1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence).
    Exemplo de Saída (após a entrada dos dados):

    Comparação de Cartas:
    População: Carta 1 venceu (1)
    Área: Carta 1 venceu (1)
    PIB: Carta 1 venceu (1)
    Pontos Turísticos: Carta 1 venceu (1)
    Densidade Populacional: Carta 2 venceu (0)
    PIB per Capita: Carta 1 venceu (1)
    Super Poder: Carta 1 venceu (1)

    Requisitos funcionais
    Manter as funcionalidades dos níveis básico e intermediário (leitura, cálculo e exibição dos dados das cartas, incluindo densidade populacional e PIB per capita).
    Calcular corretamente o Super Poder para cada carta.
    Comparar corretamente as cartas atributo por atributo, considerando a regra específica para densidade populacional.
    Exibir os resultados das comparações de forma clara e organizada.

    Requisitos não funcionais
    Manter os requisitos não funcionais dos níveis anteriores (usabilidade, legibilidade, corretude, eficiência).
*/

#include <stdio.h>  // Necessária para as funções printf e scanf.
#include <stdlib.h> // Necessária para a constante EXIT_SUCCESS.
#include <string.h> // Necessária para as funções fgets e strcspn.

int main(void)
{
    // Declaração e inicialização das variáveis para armazenar os dados das cartas.
    char estado1 = '\0', estado2 = '\0',
         codigo1[4] = "", codigo2[4] = "",
         nomeCidade1[50] = "", nomeCidade2[50] = "";
    unsigned long int populacao1 = 0, populacao2 = 0,
                      pontosTuristicos1 = 0, pontosTuristicos2 = 0;
    float area1 = 0.0, area2 = 0.0,
          pib1 = 0.0, pib2 = 0.0,
          densidadePopulacional1 = 0.0, densidadePopulacional2 = 0.0,
          pibPerCapita1 = 0.0, pibPerCapita2 = 0.0,
          superPoder1 = 0.0, superPoder2 = 0.0;

    // Leitura dos dados da primeira carta.
    printf("Insira os dados da Carta 1:\n");
    printf("Estado (1 Letra): ");
    scanf(" %c", &estado1); // Lê um caractere representando o estado.
    printf("Código da Carta (1 Letra, Dois Números): ");
    scanf("%3s", codigo1); // Lê uma cadeia de caracteres de até 3 caracteres, representando o código da carta.
    printf("Nome da Cidade: ");
    getchar();                                      // Limpa o buffer do caractere de nova linha e retorno de carro/cursor.
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin); // Lê uma cadeia de caracteres com espaços, representando o nome da cidade.
    nomeCidade1[strcspn(nomeCidade1, "\n")] = '\0'; // Remove o caractere de nova linha e retorno de carro/cursor da cadeia de caracteres lida.
    printf("População: ");
    scanf("%lu", &populacao1); // Lê um inteiro representando a população.
    printf("Área (em km²): ");
    scanf("%f", &area1); // Lê um número de ponto flutuante representando a área.
    printf("PIB: ");
    scanf("%f", &pib1); // Lê um número de ponto flutuante representando o PIB.
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1); // Lê um inteiro representando o número de pontos turísticos.

    // Cálculo da densidade populacional e PIB per capita para a primeira cidade.
    densidadePopulacional1 = (float)populacao1 / area1; // Calcula a densidade populacional.
    pibPerCapita1 = (float)pib1 / populacao1;           // Calcula o PIB per capita.

    // Cálculo do super poder para a primeira cidade.
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidadePopulacional1);

    // Exibição dos dados da primeira carta.
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);                                // Imprime o estado.
    printf("Código: %s\n", codigo1);                                // Imprime o código da carta.
    printf("Nome da Cidade: %s\n", nomeCidade1);                    // Imprime o nome da cidade.
    printf("População: %lu\n", populacao1);                          // Imprime a população.
    printf("Área: %.2f km²\n", area1);                              // Imprime a área.
    printf("PIB: %.2f bilhões de reais\n", pib1);                   // Imprime o PIB.
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1); // Imprime o número de pontos turísticos.

    // Exibição da densidade populacional e PIB per capita para a primeira cidade.
    printf("\nDensidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Exibição do super poder para a primeira cidade.
    printf("Super Poder: %.2f\n", superPoder1);

    // Leitura dos dados da segunda carta.
    printf("\nInsira os dados da Carta 2:\n");
    printf("Estado (1 Letra): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (1 Letra, Dois Números): ");
    scanf("%3s", codigo2);
    printf("Nome da Cidade: ");
    getchar();
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = '\0';
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da densidade populacional e PIB per capita para a segunda cidade.
    densidadePopulacional2 = (float)populacao2 / area2; // Calcula a densidade populacional.
    pibPerCapita2 = (float)pib2 / populacao2;           // Calcula o PIB per capita.

    // Cálculo do super poder para a segunda cidade.
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidadePopulacional2);

    // Exibição dos dados da segunda carta.
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    // Exibição da densidade populacional e PIB per capita para a segunda cidade.
    printf("\nDensidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // Exibição do super poder para a segunda cidade.
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparação das cartas atributo por atributo.
    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu Carta 2: %d\n", (populacao1 > populacao2));
    printf("Área: Carta 1 venceu Carta 2: %d\n", (area1 > area2));
    printf("PIB: Carta 1 venceu Carta 2: %d\n", (pib1 > pib2));
    printf("Pontos Turísticos: Carta 1 venceu Carta 2: %d\n", (pontosTuristicos1 > pontosTuristicos2));
    printf("Densidade Populacional: Carta 1 venceu Carta 2: %d\n", (densidadePopulacional1 < densidadePopulacional2));
    printf("PIB per Capita: Carta 1 venceu Carta 2: %d\n", (pibPerCapita1 > pibPerCapita2));
    printf("Super Poder: Carta 1 venceu Carta 2: %d\n", (superPoder1 > superPoder2));

    return EXIT_SUCCESS; // Retorna EXIT_SUCCESS para indicar que o programa terminou com sucesso.
}
