/*O programa deve ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. A fórmula de conversão de temperatura a ser utilizada é F = (9 * C + 160) / 5, em que a variável F representa a temperatura em graus Fahrenheit e a variável C representa a temperatura em graus Celsius.*/
#include<stdio.h>

int main(void)
{
    float C;
    float F;

    printf("Qual a temperatura ambiente (Celsius)? ");
    scanf("%f", &C); 

    F = (9 * C + 160) / 5;

    printf("\n%.0f graus Celsius representam %.0f graus Fahrenheit\n", C, F);


    return 0;
}
