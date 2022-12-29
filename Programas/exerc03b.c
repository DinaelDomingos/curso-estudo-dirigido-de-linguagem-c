/*O programa deve efetuar o cálculo da quantidade de litros de combustível gasta em uma viagem, utilizando um automóvel que faz 12 Km por litro. Para obter o cálculo, o usuário deve fornecer o tempo gasto na viagem e a velocidade média. Desta forma, será possível obter a distância percorrida com a fórmula DISTANCIA = TEMPO * VELOCIDADE. Tendo o valor da distância, basta calcular a quantidade de litros de combustível utilizada na viagem com a fórmula LITROS_USADOS = DISTANCIA / 12. O programa deve apresentar os valores da velocidade média, tempo gasto, a distância percorrida e a quantidade de litros utilizada na viagem. Sugestão: trabalhe com valores reais.*/
#include <stdio.h>

int main(void)
{
    float DISTANCIA, TEMPO, VELOCIDADE, LITROS_USADOS;

    printf("Informe o tempo gasto com a viagem (h): ");
    scanf("%f", &TEMPO);
    printf("Informe a velocidade media (Km/h): ");
    scanf("%f", &VELOCIDADE);

    DISTANCIA = TEMPO * VELOCIDADE;
    LITROS_USADOS = DISTANCIA / 12;

    printf("\nForam utilizados %.0f litros de combustivel para uma distancia de %.0f Km, com velocidade media de %.0f Km/h em %.0f horas\n", LITROS_USADOS, DISTANCIA, VELOCIDADE, TEMPO);

    return 0;
}
