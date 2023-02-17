/* Ordena */
#include<stdio.h>

int main(void)
{
    int A, B, X;

    printf("Informe um valor para a variavel A: ");
    scanf("%d", &A);
    printf("Informe um valor para a variavel B: ");
    scanf("%d", &B);

    if (A > B)
    {
        X = A;
        A = B;
        B = X;
    }
    printf("\nOs Valores ornedados sao: %d e %d\n", A, B);
    
    return 0;
}
