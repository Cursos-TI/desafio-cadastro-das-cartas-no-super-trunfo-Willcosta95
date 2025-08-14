#include <stdio.h>

int main (){

    // Dados carta 1
    char estado1;
    char codigoCarta1[5];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoderCarta1;

    // Dados carta 2
    char estado2;
    char codigoCarta2[5];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoderCarta2;



    printf("\n");
    printf("\n");
    printf("### ESSE É O JOGO SUPER TRUNFO ###\n");
    printf("\n");
    printf("Teremos 8 estados, cada um representado por uma letra de A até H\n");
    printf("Exemplo: A - SÃO PAULO\n");
    printf("Exemplo: B - RIO DE JANEIRO\n");
    printf("Um código para representar a carta caso seja do mesmo estado\n");
    printf("Exemplo: A01 - RIO DE JANEIRO\n");
    printf("Exemplo: A02 - NITERÓI\n");
    printf("Em seguida cadastraremos outros dados como:\n");
    printf("População dessa cidade\n");
    printf("Área da cidade em km²\n");
    printf("PIB dessa cidade\n");
    printf("Números de pontos turísticos da cidade\n");
    printf("Após cadastrar os dados, o programa irá calcular:\n");
    printf("A densidade, a renda percapita e o superpoder de cada carta\n");
    printf("E por fim irá mostrar uma comparação de valores\n");
    printf("Vamos lá!!\n");
    printf("\n");
    printf("Vamos começar cadastrando as cartas!\n");
    printf("\n");

    //Entrada dos dados da carta 1

    printf("Insira os dados da carta 1\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Escolha o código da carta(Exemplo A01): ");
    scanf("%s", codigoCarta1);
    printf("Qual é o nome da Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Qual é a área (km²): ");
    scanf("%f", &area1);
    printf("Qual é o PIB (Em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Qual é o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);
    printf("\n");

    //Entrada dos dados da carta 2

    printf("Insira os dados da carta 2\n");  
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Escolha o código da carta(Exemplo B01): ");
    scanf("%s", codigoCarta2);
    printf("Qual é o nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Qual é a área (km²): ");
    scanf("%f", &area2);
    printf("Qual é o PIB (Em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Qual é o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);
    printf("\n");

    //Cálculo carta 1

    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    superPoderCarta1 = populacao1 + area1 + pib1 + pontosTuristicos1 + densidadePopulacional1;

    //Cálculo carta 2

    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoderCarta2 = populacao2 + area2 + pib2 + pontosTuristicos2 + densidadePopulacional2;


    //Imprimindo a carta 1
    printf("Essa é a carta 01:\n");

    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f\n", densidadePopulacional1);
    printf("PIB per capita: %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f", superPoderCarta1);

    printf("\n");

    //Imprimindo a carta 2

    printf("Essa é a carta 02:\n");

    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f\n", densidadePopulacional2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoderCarta2);

    printf("\n");

    // Comparações
    printf("***Comparação de Cartas***\n");
    printf("\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadePopulacional1 < densidadePopulacional2); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoderCarta1 > superPoderCarta2);

    return 0;
}
