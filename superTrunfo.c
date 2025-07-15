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

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turisticos: %d\n", pontosTurismo2);

    return 0;
}