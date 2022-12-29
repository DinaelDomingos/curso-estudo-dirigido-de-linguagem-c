/*O programa vai ler uma temperatura em graus Fahrenheit e apresentá-la convertida em graus Celsius. A fórmula de conversão de temperatura a ser utilizada é C = ((F - 32) * 5) / 9, em que a variável F é a temperatura em graus Fahrenheit e a variável C é a temperatura em graus Celsius.*/
#include<stdio.h>

int main(void)
{
    float F;
    float C;

    printf("Qual a temperatura ambiente (Fahrenheint)? ");
    scanf("%f", &F);

    C = ((F - 32) * 5) / 9;

    printf("\n%.0f graus Fahrenheint correspondem a %.0f graus Celsius\n", F, C);

    return 0;
}
