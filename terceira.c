#include <stdio.h>
#include <string.h>

void preencherMatriz(int matriz[4][4], const char *nome)
{
    for (int linha = 0; linha < 4; linha++)
    {
        for (int coluna = 0; coluna < 4; coluna++)
        {
            scanf("%d", &matriz[linha][coluna]);
        }
    }
}

void somarMatrizes(int numerosA[4][4], int numerosB[4][4], int resultado[4][4])
{
    for (int linha = 0; linha < 4; linha++)
    {
        for (int coluna = 0; coluna < 4; coluna++)
        {
            resultado[linha][coluna] = numerosA[linha][coluna] + numerosB[linha][coluna];
        }
    }
}

void subtrairMatrizes(int numerosA[4][4], int numerosB[4][4], int resultado[4][4])
{
    for (int linha = 0; linha < 4; linha++)
    {
        for (int coluna = 0; coluna < 4; coluna++)
        {
            resultado[linha][coluna] = numerosA[linha][coluna] - numerosB[linha][coluna];
        }
    }
}

void multiplicarMatrizes(int numerosA[4][4], int numerosB[4][4], int resultado[4][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            resultado[i][j] = 0;
            for (int k = 0; k < 4; k++)
            {
                resultado[i][j] += numerosA[i][k] * numerosB[k][j];
            }
        }
    }
}

int main()
{
    int numerosA[4][4];
    int numerosB[4][4];
    int resultado[4][4];

    preencherMatriz(numerosA, "numerosA");
    preencherMatriz(numerosB, "numerosB");

    char operacao[10];
    scanf("%s", operacao);

    if (strcmp(operacao, "soma") == 0)
    {
        somarMatrizes(numerosA, numerosB, resultado);
    }
    else if (strcmp(operacao, "sub") == 0)
    {
        subtrairMatrizes(numerosA, numerosB, resultado);
    }
    else if (strcmp(operacao, "mult") == 0)
    {
        multiplicarMatrizes(numerosA, numerosB, resultado);
    }

    for (int linha = 0; linha < 4; linha++)
    {
        for (int coluna = 0; coluna < 4; coluna++)
        {
            printf("%4d", resultado[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}
