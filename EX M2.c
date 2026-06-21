#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[4][4];
    int i, j;
    int maior, linha, coluna;

    printf("MAIOR VALOR DA MATRIZ 4x4\n\n");

    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("Digite [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    maior = matriz[0][0];
    linha = 0;
    coluna = 0;

    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            if(matriz[i][j] > maior)
            {
                maior = matriz[i][j];
                linha = i;
                coluna = j;
            }
        }
    }

    printf("\nMatriz:\n");

    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMaior valor: %d", maior);
    printf("\nLinha: %d", linha + 1);
    printf("\nColuna: %d\n", coluna + 1);

    system("pause");
    return 0;
}