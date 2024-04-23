#include <stdio.h>

void converterMoeda(float valor, float cambio);

int main(){
    float valor, cambio;

    printf("Converter Dolar para Euro\n");
    printf("Digite o valor em Dolar que deseja converter: ");
    scanf("%f", &valor);
    printf("Digite o valor da taxa de cambio: ");
    scanf("%f", &cambio);

    converterMoeda(valor, cambio);
}

void converterMoeda(float valor, float cambio){
    float euro;
    euro = valor * cambio;
    printf("O valor em Euro é %.2f\n", euro);
}