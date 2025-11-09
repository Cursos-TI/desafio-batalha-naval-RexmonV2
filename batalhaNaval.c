#include <stdio.h> 

//Definindo as constantes
#define TAMANHO 10
#define TAM_NAVIO 3
#define AGUA 0
#define NAVIO 3

int main() {
    
    //Criando o tabuleiro
    int tabuleiro[TAMANHO][TAMANHO];
    int i, j; 

    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }

    //Posicionaer os 4 navios 

    //Navio Horizontal Linha 1 e Coluna 1
    for (i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[1][1 + i] = NAVIO;
    }

    //Navio Vertical Linha 3 e Coluna 8
    for (i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[3 + i][8] = NAVIO;
    }

    //Navio Diagonal Linha 4 e Coluna 2
    for (i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[4 + i][2 + i] = NAVIO;
    }

    //Navio Diagonal Linha 7 e Coluna 3
    for (i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[7 + i][3 - i] = NAVIO;
    }


    //monstrando o tabuleiro
    printf("=== Tabuleiro Aventureiro (Simples) ===\n");
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}
