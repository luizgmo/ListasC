#include <stdio.h>

void converterTemperatura(float c, float f, int operacao);

int main(){
    float c, f;
    int operacao;

    printf("1 - Converter Celsius para Fahrenheit\n");
    printf("2 - Converter Fahrenheit para Celsius\n");
    printf("Digite a operação desejada: ");
    scanf("%d", &operacao);

    if (operacao == 1){
        printf("Digite a temperatura em Celsius: ");
        scanf("%f", &c);
    }else if (operacao == 2){
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%f", &f);
    }else{
        printf("Operação inválida!\n");
        return 1;
    }

    converterTemperatura(c, f, operacao);
    
}

void converterTemperatura(float c, float f, int operacao){
    if(operacao == 1){
        f = c * 1.8 + 32;
        printf("A temperatura em Fahrenheit é %.2f\n", f);
    }else if (operacao == 2){
        c = (f - 32) / 1.8;
        printf("A temperatura em Celsius é %.2f\n", c);
    }
    else{
        printf("Operação inválida!\n");
    }
}