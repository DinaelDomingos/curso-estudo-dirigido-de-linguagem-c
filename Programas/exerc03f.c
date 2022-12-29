/*O programa lê dois valores inteiros para as variáveis A e B, efetuar a troca dos valores de modo que a variável A passe a possuir o valor da variável B, e a variável B passe a possuir o valor da variável A. Apresentar os valores trocados.*/
#include<stdio.h>

int main(void)
{
    int A, B, T = 1;

    printf("Digite o valor da variavel A: ");
    scanf("%d", &A);
    printf("Digite o valor da variavel B: ");
    scanf("%d", &B);

    T = A;
    A = B;
    B = T;

    printf("\nEfetuando a troca proposta:\nA variavel A igual: %.0d\nA variavel B igual: %.0d\n", A, B);

    return 0;
}
