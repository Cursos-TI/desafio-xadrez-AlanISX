#include <stdio.h>

    int main() {
        int torre, bispo, rainha;

    //For utilizado para limitar movimento da torre à 5 casas
    printf("Movimento Torre: \n");
    for (torre = 0; torre < 5; torre++) {
    printf("Cima\n");
    }

    //"Do" utilizado para limitar movimento da torre à 8 casas
    //"while" indica que a rainha pode se mover 8 casas uma vez que uma dessas casas já foi impressa no "do"

    printf("\nMovimento Rainha: \n");
    do{
        printf("Esquerda\n");
        rainha++;
    } while (rainha <=7 );

    //While indica que o bispo pode se mover até 5 casas na diagonal para cima
    printf("\nMovimento Bispo: \n");
    while (bispo <= 5) {
        printf("Cima Direita\n");
        bispo++;
    }



    return 0;
}
