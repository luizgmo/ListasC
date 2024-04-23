#include <stdio.h>
#include <math.h>

float calcularMontante(float capital, float juros, int tempo);

int main()
{
    float capital, juros, montante;
    int tempo;

    printf("Digite o capital inicial: ");
    scanf("%f", &capital);
    printf("Digite a taxa de juros ao mês(0-100): ");
    scanf("%f", &juros);
    printf("Digite o tempo em meses: ");
    scanf("%d", &tempo);

    montante = calcularMontante(capital, juros, tempo);
    printf("O montante final é: R$%.2f\n", montante);
}

float calcularMontante(float capital, float juros, int tempo){
    return capital * pow((1 + juros / 100), tempo);
}