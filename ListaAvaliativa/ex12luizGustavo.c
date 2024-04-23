#include <stdio.h>

void converterDolar(float dinheiro);
void converterEuro(float dinheiro);

int main(){
    float dinheiro;

    printf("Digite o valor em reais: ");
    scanf("%f", &dinheiro);

    converterDolar(dinheiro);
    converterEuro(dinheiro);
}

void converterDolar(float dinheiro){
    float cotacaoDolar = 5.01;
    float valorEmDolar = dinheiro / cotacaoDolar;
    printf("Valor em dólar: %.2f\n", valorEmDolar);
}

void converterEuro(float dinheiro){
    float cotacaoEuro = 5.45;
    float valorEmEuro = dinheiro / cotacaoEuro;
    printf("Valor em euro: %.2f\n", valorEmEuro);
}