/* Adiciona Números */
#include<stdio.h>
int main(void)
{
    int A, B, X;
    printf("Informe um valor para a variavel A: ");
    scanf("%d", &A);
    printf("Informe um valor para a variavel B: ");
    scanf("%d", &B);

    X = A + B;

    if(X > 10)
        printf("\nO valor da variavel X equivale a: %d\n", X);
    return 0;
}