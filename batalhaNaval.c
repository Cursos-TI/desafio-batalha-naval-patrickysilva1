#include <stdio.h>
int main()
{
    // tabuleiro representando a agua
    int tabuleiro[10][10] = {
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}};

    // posicoes dos navios

    tabuleiro[2][3] = 3;
    tabuleiro[2][4] = 3;
    tabuleiro[2][5] = 3;

    tabuleiro[5][6] = 3;
    tabuleiro[6][6] = 3;
    tabuleiro[7][6] = 3;

    tabuleiro[9][1] = 3;
    tabuleiro[9][2] = 3;
    tabuleiro[9][3] = 3;

    // exibindo o tabuleiro

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
    }

    return 0;
}
