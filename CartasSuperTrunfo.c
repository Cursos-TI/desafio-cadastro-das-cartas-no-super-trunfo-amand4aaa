#include <stdio.h>

int main() {
     printf("Desafio Super Trunfo\n");
    // Declaração das variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char nome1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // Declaração das variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // Entrada de dados da Carta 1
    printf("🔹 Carta 1\n");
    
    printf("Digite o estado (letra de A a H):\n");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (ex: A01):\n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nome1);

    printf("Digite a populacao (Digite sem ponto):\n");
    scanf("%d", &populacao1);

    printf("Digite a area em km2 (Digite sem ponto):\n");
    scanf("%f", &area1);

    printf("Digite o PIB (Digite sem ponto):\n");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d", &pontos1);

    // Entrada de dados da Carta 2
    printf("\n🔹 Carta 2\n");

    printf("Digite o estado (letra de A a H):\n");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: B01):\n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nome2);

    printf("Digite a populacao (Digite sem ponto):\n");
    scanf("%d", &populacao2);

    printf("Digite a area em km2 (Digite sem ponto):\n");
    scanf("%f", &area2);

    printf("Digite o PIB (Digite sem ponto):\n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d", &pontos2);

    // Exibição da Carta 1
    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de pontos turisticos: %d\n", pontos1);

    // Exibição da Carta 2
    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontos2);

    return 0;
}
