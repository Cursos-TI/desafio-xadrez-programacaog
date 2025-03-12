#include <stdio.h>

int main(){

int i=0, bispo=0, rainha = 0, perp=1, cavalo=0, e=0;

// Torre 5 casa para frente
    printf("TORRE\n");
    for (i; i < 5; i++)
    {
        printf("DIREITA\n");
    }
    
//Bispo 5 casas a direita
    printf("\n");
    printf("Bispo\n");
    while (bispo<5)
    {
        printf("Cima,Direita\n");
        bispo++;
    }
    
//Rainha 8 casas a esquerda

    printf("\n");
    printf("RAINHA\n");

    do
    {
        printf("Esquerda\n");
        rainha++;
    } while (rainha<8);

    
// Cavalo(duas casas e uma perpendicular)
    
    printf("\n");
    printf("CAVALO\n");

    while (perp--)
    {
        for (cavalo; e < 2; e++)
        {
            printf("Baixo\n");
        }
        printf("Esquerda");
    }
    


    return 0;
}
