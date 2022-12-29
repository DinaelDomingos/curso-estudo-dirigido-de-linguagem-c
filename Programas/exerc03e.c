/*O programa deve calcular e apresentar o valor do volume de uma lata de óleo, utilizando a fórmula V = 3.14159 * R * R * A, em que as variáveis V, R e A representam, respectivamente, o volume, o raio e a altura.*/
#include<stdio.h>

int main(void)
{
    float V, R, A;

    printf("Informe o Raio: ");
    scanf("%f", &R);

    printf("Informe a Altura: ");
    scanf("%f", &A);

    V = 3.14159 * R * R * A;

    printf("\nO volume da lata de oleo eh %.1f.\n", V);

    return 0;
}
