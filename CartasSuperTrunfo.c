#include <stdio.h>

int main() {
    // Carta 1
    char estado1;
    char cidade1[50];
    char codigo1[4];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // Carta 2
    char estado2;
    char cidade2[50];
    char codigo2[4];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // Variáveis para cálculos
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    // Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado (letra A a H): ");
    scanf(" %c", &estado1);
    getchar();  // limpa o \n antes de ler o código
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Código (ex: A01): ");
    scanf("%s", codigo1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1);

    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (letra A a H): ");
    scanf(" %c", &estado2);
    getchar();  // limpa o \n antes de ler o código
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Código (ex: B02): ");
    scanf("%s", codigo2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Cálculos
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Exibição dos dados
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita1);

    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita2);

    return 0;
}