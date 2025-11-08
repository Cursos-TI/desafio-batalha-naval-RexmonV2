#include <stdio.h> 

//Definindo as contantes 
#define TAMANHO 10    
#define TAM_NAVIO 3   
#define AGUA 0
#define NAVIO 3

int main() {
    
    //Representa o Tabuleiro
    int tabuleiro[TAMANHO][TAMANHO];
    
    // para o controle dos loops
    int i, j;

    //Começando o o tabuleiro com (0)
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }

    //Declara os navios como vetores
    int navio_modelo[TAM_NAVIO] = {NAVIO, NAVIO, NAVIO};


    //Define as coordenadas iniciais 
    
    //Navio Horizontal começa na Linha 1, Coluna 2
    int h_linha = 2;
    int h_col_inicio = 1;
    
    //Navio Vertical começa na Linha 4, Coluna 5
    int v_linha_inicio = 4;
    int v_col = 5;

    
    //Posiciona os Navios no Tabuleiro
    
    // Posiciona Navio Horizontal
    printf("Posicionando Navio Horizontal...\n");
    for (i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[h_linha][h_col_inicio + i] = navio_modelo[i];
    }

    // Posiciona Navio Vertical
    printf("Posicionando Navio Vertical...\n");
    for (i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[v_linha_inicio + i][v_col] = navio_modelo[i];
    }


    //Exibe o Tabuleiro
    printf("\n=== Tabuleiro de Batalha Naval ===\n");
    
    // Loop das linhas
    for (i = 0; i < TAMANHO; i++) {
        
        // Loop das colunas
        for (j = 0; j < TAMANHO; j++) {
            // mostra o valor da célula (0 ou 3) 
            printf("%d ", tabuleiro[i][j]);
        }
        
        printf("\n"); 
    }

    return 0; 
}
