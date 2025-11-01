#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nível Aventureiro
// Aluno: José Ageu Layme Neto.

int main(){

    int b = 0; //contador do repedidor do movimento do bispo
    int r = 0; //contador do repedidor do movimento da rainha
    int movimentoCompleto = 1; //flag para controlar o movimento em L do cavalo

    // mover a Torre 5 casas para a direita
    printf("Movimento da Torre:\n");
    for (int t = 0; t < 5; t++){
        printf("Direita\n"); // Imprime a direção do movimento
    }

    // Mover o Bispo 5 casas na diagonal para cima e à direita
    printf("\n");
    printf("Movimento do Bispo:\n");
    while (b < 5){
        printf("Cima Direita\n"); // Imprime a direção do movimento
        b++; // incrementa o contador do movimento do bispo
    }

    // Mover a Rainha oito casas para a esquerda
    printf("\n");
    printf("Movimento da Rainha:\n");
    do{
        printf("Esquerda\n");
        r++;
    } while (r < 8);

    // Mover o Cavalo duas casas para baixo e uma casa para a esquerda
    printf("\n");
    printf("Movimento do Cavalo:\n");
    while (movimentoCompleto--){
        for (int c = 0; c < 2; c++){
            printf("Baixo\n");
        }
        printf("Esquerda\n");
    }
    

    
    return 0;
}
