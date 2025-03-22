#include <stdio.h>

int main()
{

    /*Utilizei apenas a letra inicial para cada peça sendo assim
    R = Rei, Rn = Rainha, B = Bispo, C = Cavalo, T = Torre e P = Peão */

    int t, b = 0, rn = 0, c = 0;

    // For utilizado para limitar movimento da torre à 5 casas
    printf("Movimento Torre: \n");
    for (t = 0; t < 5; t++)
    {
        printf("Cima\n");
    }

    // Limita o movimento à 8 casas
    printf("\nMovimento Rainha: \n");
    do
    {
        printf("Esquerda\n");
        rn++;
    } while (rn < 8);

    // Limita o movimento à 5 casas
    printf("\nMovimento Bispo: \n");
    while (b <= 5)
    {
        printf("Cima Direita\n");
        b++;
    }

    // Declarando movimentação do cavalo, limitando-se à duas casas para cima e uma para a direita
    for (int c = 0; c < 2; c++)
    {
        printf("\nMovimento Cavalo: \n");

        do
        {
            printf("Cima\n");
            c++;

        } while (c < 2);
        {
            printf("Direita\n");
        }
    }

    return 0;
}
