#include <stdio.h>

int main()
{

    // Declarando Variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[100];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    float densidadePopulacional1;
    float pibCapita1;
    double superPoder1;

    // Declarando Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[100];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    float densidadePopulacional2;
    float pibCapita2;
    double superPoder2;

    // Coletando dados da Carta 1
    printf("Insira os Dados da carta 1");
    printf("\nInforme o Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Informe o Código da Carta (ex: A01): ");
    scanf(" %3s", codigo1);

    printf("Informe o Nome da Cidade (sem espaço): ");
    scanf(" %s", nomeCidade1);

    printf("Informe a População: ");
    scanf(" %lu", &populacao1);

    printf("Informe a Area: ");
    scanf(" %f", &area1);

    printf("Informe o PIB: ");
    scanf(" %f", &pib1);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos1);

    densidadePopulacional1 = (float)populacao1 / area1;
    pibCapita1 = (float)populacao1 / pib1;

    // Coletando dados da Carta 2
    printf("\nInsira os Dados da carta 2");
    printf("\nInforme o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Informe o Código da Carta (ex: A01): ");
    scanf(" %3s", codigo2);

    printf("Informe o Nome da Cidade (sem espaço): ");
    scanf("%s", nomeCidade2);

    printf("Informe a População: ");
    scanf(" %lu", &populacao2);

    printf("Informe a Area: ");
    scanf(" %f", &area2);

    printf("Informe o PIB: ");
    scanf(" %f", &pib2);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos2);

    densidadePopulacional2 = (float)populacao2 / area2;

    pibCapita2 = (float)populacao2 / pib2;

    // Exibindo Dados da Carta 1
    printf("\nEstado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("População : %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Números de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f Reais\n", pibCapita1);

    // Exibindo Dados da Carta 2
    printf("\nEstado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População : %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Números de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f Reais\n", pibCapita2);

    // Calculando Super Podereres
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibCapita1 + (1.0 / densidadePopulacional1);
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibCapita2 + (1.0 / densidadePopulacional2);

    // Comparando Cartas
    int vencedorPopulacao = populacao1 > populacao2;
    int vencedorArea = area1 > area2;
    int vencedorPib = pib1 > pib2;
    int vencedorPontos = pontosTuristicos1 > pontosTuristicos2;
    int vencedorDensidade = densidadePopulacional1 < densidadePopulacional2;
    int vencedorPIBperCapita = pibCapita1 > pibCapita2;
    int vencedorSuperPoder = superPoder1 > superPoder2;

    // Exibindo comparações das Cartas
    printf("População: Carta %d venceu\n", vencedorPopulacao ? 1 : 2, vencedorPopulacao);
    printf("Área: Carta %d venceu\n", vencedorArea ? 1 : 2, vencedorArea);
    printf("PIB: Carta %d venceu\n", vencedorPib ? 1 : 2, vencedorPib);
    printf("Pontos Turísticos: Carta %d venceu\n", vencedorPontos ? 1 : 2, vencedorPontos);
    printf("Densidade Populacional: Carta %d venceu\n", vencedorDensidade ? 1 : 2, vencedorDensidade);
    printf("PIB per Capita: Carta %d venceu\n", vencedorPIBperCapita ? 1 : 2, vencedorPIBperCapita);
    printf("Super Poder: Carta %d venceu\n", vencedorSuperPoder ? 1 : 2, vencedorSuperPoder);


    if (pib1 > pib2) {
        printf("A cidade 1 tem maior PIB.\n");
        printf("A cidade vencendora é a 1\n");
    } else {
        printf("A cidade 2 tem maior PIB.\n");
        printf("A cidade vencendora é a 2\n");
    }

    return 0;
}

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

