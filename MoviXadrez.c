#include <stdio.h>

#define CASAS_TORRE 5
#define CASAS_RAINHA 8
#define CASAS_BISPO 5
#define MOV_VERTICAL_CAVALO 2
#define MOV_HORIZONTAL_CAVALO 1
 
void mover_torre_recursivo(int casas_restantes, int casa_atual) {
    
    if (casas_restantes <= 0) {
        return;
    }

    
    printf("Casa %d: Direita\n", casa_atual);

    
    mover_torre_recursivo(casas_restantes - 1, casa_atual + 1);
}

void mover_rainha_recursivo(int casas_restantes) {
    
    if (casas_restantes == 0) {
        return;
    }

    
    printf("Casa %d: Esquerda\n", CASAS_RAINHA - casas_restantes + 1);

    
    mover_rainha_recursivo(casas_restantes - 1);
}


int main() {
    printf("--- Simulacao Avancada de Movimentacao de Pecas de Xadrez ---\n\n");

    printf("=== TORRE: Movimento Recursivo para a DIREITA ===\n");
    mover_torre_recursivo(CASAS_TORRE, 1);
    printf("Torre parou.\n\n");


    printf("=== RAINHA: Movimento Recursivo para a ESQUERDA ===\n");
    mover_rainha_recursivo(CASAS_RAINHA);
    printf("Rainha parou.\n\n");


    printf("=== BISPO: Movimento em DIAGONAL com Loops Aninhados ===\n");
    
    
    for (int i = 1; i <= CASAS_BISPO; i++) {
        
        int j = 0;
        
        while (j < 1) {
            printf("Casa %d: Cima e Direita\n", i);
            j++;
        }
        
    }
    printf("Bispo parou.\n\n");
    
    printf("----------------------------------------------------------\n");
    printf("=== CAVALO: Movimento em L com Loops Complexos (2 Cima + 1 Direita) ===\n");
    
    
    int etapa = 0; 
    
    
    for (int i = 0; i < 2; i++) {
        int passos_realizados = 0;
        
        
        if (etapa == 0) {
            
            while (passos_realizados < MOV_VERTICAL_CAVALO) {
                printf("Passo %d da Etapa 1: Cima\n", passos_realizados + 1);
                passos_realizados++;
                
                
                if (passos_realizados == MOV_VERTICAL_CAVALO) {
                    break; 
                }
            }
            etapa = 1; 
            
        } 
        
        else if (etapa == 1) {
            
            
            for (int k = 0; k < MOV_HORIZONTAL_CAVALO; k++) {
                printf("Passo 1 da Etapa 2: Direita\n");
                
                continue; 
            }
        }
    }
    printf("Cavalo completou o movimento em 'L'.\n");
    printf("----------------------------------------------------------\n");

    return 0;
}
