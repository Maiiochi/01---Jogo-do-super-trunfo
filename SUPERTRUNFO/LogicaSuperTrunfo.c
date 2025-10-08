#include <stdio.h>

int main() {
    // --- CARTA 1 ---
    char estado1 = 'A';
    char codigo1[] = "A01";
    char nomeCidade1[] = "São_Paulo";
    int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 699000.00; // em milhões
    int pontosTuristicos1 = 25;

    float densidade1 = populacao1 / area1;
    float pibcapita1 = (pib1 * 1000000.0f) / populacao1;

    // --- CARTA 2 ---
    char estado2 = 'B';
    char codigo2[] = "B02";
    char nomeCidade2[] = "Rio_de_Janeiro";
    int populacao2 = 6710000;
    float area2 = 1182.30;
    float pib2 = 364000.00; // em milhões
    int pontosTuristicos2 = 30;

    float densidade2 = populacao2 / area2;
    float pibcapita2 = (pib2 * 1000000.0f) / populacao2;

    int opcao1, opcao2;
    float valor1_carta1, valor1_carta2;
    float valor2_carta1, valor2_carta2;
    float soma1, soma2;

    printf("=== SUPER TRUNFO - NIVEL MESTRE ===\n\n");
    printf("Comparacao entre:\n");
    printf("Carta 1: %s (Estado %c)\n", nomeCidade1, estado1);
    printf("Carta 2: %s (Estado %c)\n\n", nomeCidade2, estado2);

    // --- MENU 1: Escolha do primeiro atributo ---
    printf("Escolha o PRIMEIRO atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("Opcao: ");
    scanf("%d", &opcao1);

    // --- MENU 2: Escolha do segundo atributo (dinâmico) ---
    printf("\nEscolha o SEGUNDO atributo para comparar (diferente do primeiro):\n");
    for (int i = 1; i <= 6; i++) {
        if (i == opcao1) continue; // não mostra o mesmo atributo
        switch (i) {
            case 1: printf("1 - Populacao\n"); break;
            case 2: printf("2 - Area\n"); break;
            case 3: printf("3 - PIB\n"); break;
            case 4: printf("4 - Pontos Turisticos\n"); break;
            case 5: printf("5 - Densidade Populacional\n"); break;
            case 6: printf("6 - PIB per Capita\n"); break;
        }
    }
    printf("Opcao: ");
    scanf("%d", &opcao2);

    if (opcao2 == opcao1) {
        printf("\nErro: os dois atributos devem ser diferentes!\n");
        return 0;
    }

    // --- FUNÇÃO AUXILIAR DE COMPARAÇÃO ---
    // Escolha do primeiro atributo
    switch (opcao1) {
        case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; break;
        case 2: valor1_carta1 = area1; valor1_carta2 = area2; break;
        case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; break;
        case 4: valor1_carta1 = pontosTuristicos1; valor1_carta2 = pontosTuristicos2; break;
        case 5: valor1_carta1 = densidade1; valor1_carta2 = densidade2; break;
        case 6: valor1_carta1 = pibcapita1; valor1_carta2 = pibcapita2; break;
        default: printf("Opcao invalida!\n"); return 0;
    }

    // Escolha do segundo atributo
    switch (opcao2) {
        case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; break;
        case 2: valor2_carta1 = area1; valor2_carta2 = area2; break;
        case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; break;
        case 4: valor2_carta1 = pontosTuristicos1; valor2_carta2 = pontosTuristicos2; break;
        case 5: valor2_carta1 = densidade1; valor2_carta2 = densidade2; break;
        case 6: valor2_carta1 = pibcapita1; valor2_carta2 = pibcapita2; break;
        default: printf("Opcao invalida!\n"); return 0;
    }

    // --- COMPARAÇÕES INDIVIDUAIS ---
    printf("\n=== RESULTADOS DAS COMPARACOES ===\n");

    // Regra especial: Densidade Populacional -> menor vence
    int vitoria1_attr1 = (opcao1 == 5) ? (valor1_carta1 < valor1_carta2) : (valor1_carta1 > valor1_carta2);
    int vitoria1_attr2 = (opcao2 == 5) ? (valor2_carta1 < valor2_carta2) : (valor2_carta1 > valor2_carta2);

    printf("Atributo 1 -> ");
    printf(vitoria1_attr1 ? "Carta 1 venceu\n" : (valor1_carta1 == valor1_carta2 ? "Empate\n" : "Carta 2 venceu\n"));

    printf("Atributo 2 -> ");
    printf(vitoria1_attr2 ? "Carta 1 venceu\n" : (valor2_carta1 == valor2_carta2 ? "Empate\n" : "Carta 2 venceu\n"));

    // --- SOMA DOS ATRIBUTOS ---
    soma1 = valor1_carta1 + valor2_carta1;
    soma2 = valor1_carta2 + valor2_carta2;

    printf("\nSoma dos dois atributos:\n");
    printf("Carta 1 (%s): %.2f\n", nomeCidade1, soma1);
    printf("Carta 2 (%s): %.2f\n", nomeCidade2, soma2);

    // --- RESULTADO FINAL ---
    printf("\n=== RESULTADO FINAL ===\n");
    if (soma1 > soma2) {
        printf("Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (soma2 > soma1) {
        printf("Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}
