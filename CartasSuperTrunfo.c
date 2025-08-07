#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo\n");

    // Declaração das variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char nome1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float pib_per_capita1;
    float super_poder1;

    // Declaração das variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char nome2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float pib_per_capita2;
    float super_poder2;

    // Entrada de dados da Carta 1
    printf("\n🔹 Carta 1\n");
    printf("Digite o estado (ex: A a H):\n");
    scanf(" %c", &estado1);
    printf("Digite o codigo da carta (ex: A01):\n");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade:\n");
    scanf("%s", nome1);
    printf("Digite a populacao (sem ponto):\n");
    scanf("%lu", &populacao1);
    printf("Digite a area em km2:\n");
    scanf("%f", &area1);
    printf("Digite o PIB:\n");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d", &pontos1);

    // Entrada de dados da Carta 2
    printf("\n🔹 Carta 2\n");
    printf("Digite o estado (ex: A a H):\n");
    scanf(" %c", &estado2);
    printf("Digite o codigo da carta (ex: B01):\n");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade:\n");
    scanf("%s", nome2);
    printf("Digite a populacao (sem ponto):\n");
    scanf("%lu", &populacao2);
    printf("Digite a area em km2:\n");
    scanf("%f", &area2);
    printf("Digite o PIB:\n");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d", &pontos2);

    // Cálculos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pib_per_capita1 = pib1 / populacao1;
    pib_per_capita2 = pib2 / populacao2;
    super_poder1 = populacao1 + area1 + pib1 + pontos1 + pib_per_capita1 + (1.0 / densidade1);
    super_poder2 = populacao2 + area2 + pib2 + pontos2 + pib_per_capita2 + (1.0 / densidade2);

    // Impressão dos dados
    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de pontos turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Comparacoes
    printf("\n--- COMPARACAO DE CARTAS ---\n");
    printf("Populacao: Carta 1 venceu? (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu? (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu? (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu? (%d)\n", pontos1 > pontos2);
    printf("Densidade Populacional: Carta 1 venceu? (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu? (%d)\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: Carta 1 venceu? (%d)\n", super_poder1 > super_poder2);

    return 0;
}

