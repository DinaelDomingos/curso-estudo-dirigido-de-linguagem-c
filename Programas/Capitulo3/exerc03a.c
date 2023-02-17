/*O programa deve ler quatro valores numéricos inteiros e apresentar o resultado dois a dois da adição e multiplicação entre os valores lidos, baseado-se na utilização do conceito de propriedade distributiva. Sugestão: se forem lidas as variáveis A, B, C e D, devem ser somados e multiplicados os valores de A com B, A com C e A com D; depois B com C, B com D e por último C com D. Note que para cada operação são utilizadas seis combinações. Assim sendo, devem ser realizadas doze operações de processamento, sendo seis para as adições e seis para as ultiplicações.*/
#include <stdio.h>

int main(void)
{
    int A, B, C, D;
    int SOMA1, SOMA2, SOMA3, SOMA4, SOMA5, SOMA6;
    int MULTI1, MULTI2, MULTI3, MULTI4, MULTI5, MULTI6;

    scanf("%d %d %d %d", &A, &B, &C, &D);
    //scanf("%d", &B);
    //scanf("%d", &C);
    //scanf("%d", &D);

    SOMA1 = A + B;
    SOMA2 = A + C;
    SOMA3 = A + D;
    SOMA4 = B + C;
    SOMA5 = B + D;
    SOMA6 = C + D;

    MULTI1 = A * B;
    MULTI2 = A * C;
    MULTI3 = A * D;
    MULTI4 = B * C;
    MULTI5 = B * D;
    MULTI6 = C * D;

    printf("Os resultados da adicao dos valores par a par sao: %d %d %d %d %d %d\n", SOMA1, SOMA2, SOMA3, SOMA4, SOMA5, SOMA6);
    printf("Os resultados da multiplicacao dos valores para a para sao: %d %d %d %d %d %d\n", MULTI1, MULTI2, MULTI3, MULTI4, MULTI5, MULTI6);

    return 0;
}
