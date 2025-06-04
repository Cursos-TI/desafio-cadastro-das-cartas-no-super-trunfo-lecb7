#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
// Carta 1
char codigo1[4];
int populacao1;
float area1;
float pib1;
int pontos1;

// Carta 2
char codigo2[4];
int populacao2;
float area2;
float pib2;
int pontos2;

// Cadastro da Carta 1
printf("Cadastro da Carta 1:\n");
printf("Código (ex: A01): ");
scanf("%s", codigo1);
printf("População: ");
scanf("%d", &populacao1);
printf("Área (km²): ");
scanf("%f", &area1);
printf("PIB (em bilhões): ");
scanf("%f", &pib1);
printf("Número de pontos turísticos: ");
scanf("%d", &pontos1);

// Cadastro da Carta 2
printf("\nCadastro da Carta 2:\n");
printf("Código (ex: B02): ");
scanf("%s", codigo2);
printf("População: ");
scanf("%d", &populacao2);
printf("Área (km²): ");
scanf("%f", &area2);
printf("PIB (em bilhões): ");
scanf("%f", &pib2);
printf("Número de pontos turísticos: ");
scanf("%d", &pontos2);

// Exibição dos dados
printf("\n--- Dados da Carta 1 ---\n");
printf("Código: %s\n", codigo1);
printf("População: %d\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f bilhões\n", pib1);
printf("Pontos turísticos: %d\n", pontos1);

printf("\n--- Dados da Carta 2 ---\n");
printf("Código: %s\n", codigo2);
printf("População: %d\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f bilhões\n", pib2);
printf("Pontos turísticos: %d\n", pontos2);

return 0;
}
