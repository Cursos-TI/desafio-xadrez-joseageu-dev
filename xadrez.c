#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nível Aventureiro
// Aluno: José Ageu Layme Neto.

// procedimento de movimento da torre
void moverTorre(int casas){  
    if (casas > 0){
        printf("Direita\n"); // Imprime a direção do movimento
        moverTorre(casas - 1); // chamada de recursividade e decrementa a quantidade de casas
     }
}

// procedimento de movimento do bispo
void moverBispo(int casas){
    if (casas > 0){
        printf("Cima Direita\n"); // Imprime a direção do movimento
        moverBispo(casas -1); // chamada de recursividade e decrementa a quantidade de casas
    }    
}

// procedimento de movimento da rainha
void moverRainha(int casas){
    if (casas > 0){
        printf("Esquerda\n"); // Imprime a direção do movimento
        moverRainha(casas -1); // chamada de recursividade e decrementa a quantidade de casas
    }    
}

int main(){

    // mover a Torre 5 casas para a direita
    printf("\n");
    printf("Movimento da Torre:\n");
    moverTorre(5); // chama procediemnto. Parâmetro: quantidade de casas. 
    
    // Mover o Bispo 5 casas na diagonal para cima e à direita
    printf("\n");
    printf("Movimento do Bispo:\n");
    moverBispo(5); // chama procediemnto. Parâmetro: quantidade de casas. 

    // Mover a Rainha oito casas para a esquerda
    printf("\n");
    printf("Movimento da Rainha:\n");
    moverRainha(8); // chama procediemnto. Parâmetro: quantidade de casas. 

    // Mover o Cavalo para cima e para a direita, em "L" (duas casas para cima e uma para a direita).
    printf("\n");
    printf("Movimento do Cavalo:\n");
    for (int ch=1; ch < 7; ch++){
        if (ch > 1){break;}
        for (int cv = 1; cv < 7; cv++){
            if (cv > 2){continue;}
            printf("Cima\n");
        }
        printf("Direita\n");
    }
       
    return 0;
}
