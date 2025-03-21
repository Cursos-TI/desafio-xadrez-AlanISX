#include <stdio.h>

    int main() {
        int torre, bispo = 0, rainha = 0;

    //For utilizado para limitar movimento da torre à 5 casas
    printf("Movimento Torre: \n");
    for (torre = 0; torre < 5; torre++) {
    printf("Cima\n");
    }

    //Limita o movimento à 8 casas
    printf("\nMovimento Rainha: \n");
    do{
        printf("Esquerda\n");
        rainha++;
    } while (rainha <8 );

    //Limita o movimento à 5 casas
    printf("\nMovimento Bispo: \n");
    while (bispo <= 5) {
        printf("Cima Direita\n");
        bispo++;
    }



    return 0;
}
