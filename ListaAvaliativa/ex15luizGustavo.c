#include <stdio.h>

void calcularIdadeEmMeses(int idade);
void calcularIdadeEmDias(int idade);

int main(){
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    calcularIdadeEmMeses(idade);
    calcularIdadeEmDias(idade);
}

void calcularIdadeEmMeses(int idade){
    int meses = idade * 12;
    printf("Sua idade em meses é: %d\n", meses);
}

void calcularIdadeEmDias(int idade){
    int dias = idade * 365;
    printf("Sua idade em dias é: %d\n", dias);
}