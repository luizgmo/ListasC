#include <stdio.h>

float soma(float num1, float num2);
float subtracao(float num1, float num2);
float multiplicacao(float num1, float num2);
float divisao(float num1, float num2);


int main() {
    int operacao;
    float num1, num2;
    
    printf("Escolha a operação: \n1 -> Soma \n2 -> Subtração \n3 -> Multiplicação \n4 -> Divisão \n");
    scanf("%d", &operacao);
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    
    switch (operacao) {
        case 1:
            printf("Resultado da soma: %.2f\n", soma(num1, num2));
            break;
        case 2:
            printf("Resultado da subtração: %.2f\n", subtracao(num1, num2));
            break;
        case 3:
            printf("Resultado da multiplicação: %.2f\n", multiplicacao(num1, num2));
            break;
        case 4:
            printf("Resultado da divisão: %.2f\n", divisao(num1, num2));
            break;
        default:
            printf("Operação inválida!\n");
    }
   
    return 0;
}

float soma(float num1, float num2) {
    return num1 + num2;
}

float subtracao(float num1, float num2) {
    return num1 - num2;
}

float multiplicacao(float num1, float num2) {
    return num1 * num2;
}

float divisao(float num1, float num2) {
    if (num2 == 0) {
        printf("Erro: divisão por zero\n");
        return 0;
    }
    return num1 / num2;
}