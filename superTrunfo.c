#include <stdio.h>
#include <string.h>

int main() {
    // Carta 1
    char estado1[3];
    char codigo1[4];
    char nome1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTurismo1;


    // Carta 2
    char estado2[3];
    char codigo2[4];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTurismo2;


    // Dados da carta 1
    printf("Digite o estado (sigla) da carta 1: \n");
    scanf("%2s", estado1);
    while(getchar() != '\n');
    printf("Digite o codigo (3 digitos) da carta 1: \n");
    scanf("%3s", codigo1);
    while(getchar() != '\n');
    printf("Digite o nome da cidade da carta 1: \n");
    fgets(nome1, sizeof(nome1), stdin);
    nome1[strcspn(nome1, "\n")] = '\0';
    printf("Digite a populacao da carta 1: \n");
    scanf("%d", &populacao1);
    printf("Digite a area da carta 1: \n");
    scanf("%f", &area1);
    printf("Digite o PIB da carta 1: \n");
    scanf("%f", &pib1);
    printf("Digite os pontos turisticos da carta 1: \n");
    scanf("%d", &pontosTurismo1);
    while(getchar() != '\n');

    // Dados da carta 2
    printf("\nDigite o estado (sigla) da carta 2: \n");
    scanf("%2s", estado2);
    while(getchar() != '\n');
    printf("Digite o codigo (3 digitos) da carta 2: \n");
    scanf("%3s", codigo2);
    while(getchar() != '\n');
    printf("Digite o nome da cidade da carta 2: \n");
    fgets(nome2, sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = '\0';
    printf("Digite a populacao da carta 2: \n");
    scanf("%d", &populacao2);
    printf("Digite a area da carta 2: \n");
    scanf("%f", &area2);
    printf("Digite o PIB da carta 2: \n");
    scanf("%f", &pib2);
    printf("Digite os pontos turisticos da carta 2: \n");
    scanf("%d", &pontosTurismo2);
    while(getchar() != '\n');

    // Exibe as cartas
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turisticos: %d\n", pontosTurismo1);

    float densidadePopulacional1 = (float)populacao1 / area1;
    float pibPerCapita1 = pib1 * 1e9 / populacao1; // PIB em reais por habitante

    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turisticos: %d\n", pontosTurismo2);

    float densidadePopulacional2 = (float)populacao2 / area2;
    float pibPerCapita2 = pib2 * 1e9 / populacao2; // PIB em reais por habitante

    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // Comparações
    printf("\n--- Comparações ---\n");
    if (populacao1 > populacao2) {
        printf("A carta 1 tem uma população maior que a carta 2.\n");
    } else if (populacao1 < populacao2) {
        printf("A carta 2 tem uma população maior que a carta 1.\n");
    } else {
        printf("As duas cartas têm a mesma população.\n");
    }

    if (area1 > area2) {
        printf("A carta 1 tem uma área maior que a carta 2.\n");
    } else if (area1 < area2) {
        printf("A carta 2 tem uma área maior que a carta 1.\n");
    } else {
        printf("As duas cartas têm a mesma área.\n");
    }

    if (pib1 > pib2) {
        printf("A carta 1 tem um PIB maior que a carta 2.\n");
    } else if (pib1 < pib2) {
        printf("A carta 2 tem um PIB maior que a carta 1.\n");
    } else {
        printf("As duas cartas têm o mesmo PIB.\n");
    }

    if (pib1 > pib2) {
        printf("A carta 1 tem um PIB per capita maior que a carta 2.\n");
    } else if (pib1 < pib2) {
        printf("A carta 2 tem um PIB per capita maior que a carta 1.\n");
    } else {
        printf("As duas cartas têm o mesmo PIB per capita.\n");
    }

    if (pontosTurismo1 > pontosTurismo2) {
        printf("A carta 1 tem mais pontos turísticos que a carta 2.\n");
    } else if (pontosTurismo1 < pontosTurismo2) {
        printf("A carta 2 tem mais pontos turísticos que a carta 1.\n");
    } else {
        printf("As duas cartas têm o mesmo número de pontos turísticos.\n");
    }

    if (densidadePopulacional1 > densidadePopulacional2) {
        printf("A carta 1 tem uma densidade populacional maior que a carta 2.\n");
    } else if (densidadePopulacional1 < densidadePopulacional2) {
        printf("A carta 2 tem uma densidade populacional maior que a carta 1.\n");
    } else {
        printf("As duas cartas têm a mesma densidade populacional.\n");
    }

    if (pibPerCapita1 > pibPerCapita2) {
        printf("A carta 1 tem um PIB per capita maior que a carta 2.\n");
    } else if (pibPerCapita1 < pibPerCapita2) {
        printf("A carta 2 tem um PIB per capita maior que a carta 1.\n");
    } else {
        printf("As duas cartas têm o mesmo PIB per capita.\n");
    }

    // Verifica atributos totais
    if (area1 + pontosTurismo1 + densidadePopulacional1 + pibPerCapita1 >
        area2 + pontosTurismo2 + densidadePopulacional2 + pibPerCapita2) {
        printf("A carta 1 é mais forte que a carta 2.\n");
    } else if (area1 + pontosTurismo1 + densidadePopulacional1 + pibPerCapita1 <
               area2 + pontosTurismo2 + densidadePopulacional2 + pibPerCapita2) {
        printf("A carta 2 é mais forte que a carta 1.\n");
    } else {
        printf("As duas cartas são igualmente fortes.\n");
    }


    return 0;
}