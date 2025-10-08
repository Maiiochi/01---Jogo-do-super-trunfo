#include <stdio.h>

int main() {
    // --- CARTA 1 ---
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1; 
    float area1, pib1;
    int pontosTuristicos1;
    float pibcapita1, densidade1, superPoder1;

    printf("\nCADASTRO DA CARTA 1\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a Area (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em milhoes de reais): ");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    densidade1 = (float)populacao1 / area1;
    pibcapita1 = (pib1 * 1000000.0f) / populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibcapita1 + (1.0f / densidade1);

    // --- CARTA 2 ---
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2; 
    float area2, pib2;
    int pontosTuristicos2;
    float pibcapita2, densidade2, superPoder2;

    printf("\nCADASTRO DA CARTA 2\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a Area (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em milhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = (float)populacao2 / area2;
    pibcapita2 = (pib2 * 1000000.0f) / populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibcapita2 + (1.0f / densidade2);

    // --- EXIBIÇÃO DAS CARTAS ---
    printf("\n----CARTA 1----\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f milhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibcapita1);

    printf("\n----CARTA 2----\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f milhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibcapita2);

    // --- COMPARAÇÃO DE UM ÚNICO ATRIBUTO ---
    printf("\n=== COMPARACAO DE CARTAS ===\n");
    printf("Atributo escolhido: PIB per Capita\n\n");
    printf("Carta 1 - %s (Estado %c): %.2f\n", nomeCidade1, estado1, pibcapita1);
    printf("Carta 2 - %s (Estado %c): %.2f\n\n", nomeCidade2, estado2, pibcapita2);

    if (pibcapita1 > pibcapita2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (pibcapita2 > pibcapita1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
