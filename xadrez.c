#include <stdio.h>

// Função recursiva para os movimentos da Torre (apenas para cima)
void movmen(int movt)
{
    if (movt > 0)
    {
        printf("Cima\n");
        movmen(movt - 1);
    }
}

// Função que imprime os movimentos do Bispo
void mov(int movb)
{
    // Loop externo para movimentação diagonal (Cima)
    for (int bisp = 0; bisp < movb; bisp++)
    {
        printf("Cima ");

        // Loop interno para apenas um movimento horizontal (Direita)
        printf("Direita\n");
    }
}

// Função recursiva para os movimentos da Rainha (apenas para a esquerda)
void movimento(int movrn)
{
    if (movrn > 0)
    {
        printf("Esquerda\n");
        movimento(movrn - 1); // Chama recursivamente
    }
}

void movme(int movc)
{
    for (int i = 0; i < movc; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Cima\n");
        }
        printf("Direita\n");
    }
}

int main()
{

    /*Utilizei apenas a letra inicial para cada peça sendo assim
    R = Rei, Rn = Rainha, B = Bispo, C = Cavalo e T = Torre*/

    int t = 5, b = 5, rn = 8, c = 1;

    // Exibindo os movimentos do Torre
    printf("\nMovimento Torre: \n");
    movmen(t);

    // Exibindo os movimentos do Rainha
    printf("\nMovimento Rainha: \n");
    movimento(rn);

    // Exibindo os movimentos do Bispo
    printf("\nMovimento Bispo: \n");
    mov(b);

    // Exibindo os movimentos do Cavalo
    printf("\nMovimento Cavalo: \n");
    movme(c);

    return 0;
}
