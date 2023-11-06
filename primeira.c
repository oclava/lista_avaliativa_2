#include <stdio.h>

int main (){
    int numero[10];

    // le o numero
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &numero[i]);
        printf("%d ", numero[i]);
    }
    printf("\n");

    for (int z = 9; z > 0; z--)
    {
        // formula para somar os numero
        for (int i = 0; i < z; i++)
        {
            numero[i] = numero[i] + numero[i+1];
            printf("%d ", numero[i]);
        }
        printf("\n");
    }
    
    return 0;
}