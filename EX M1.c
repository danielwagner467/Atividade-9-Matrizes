#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[3][3], B[3][3], C[3][3];
    int i, j;

    printf("SOMA DE MATRIZES 3x3\n\n");

    printf("Digite os valores da Matriz A:\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nDigite os valores da Matriz B:\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("\nMatriz Resultante C:\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%4d", C[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    system("pause");
    return 0;
}