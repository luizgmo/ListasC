#include <stdio.h>

void calcularAumento(float salarioAtual, int codigo);

int main(){
    int codigo;
    float salarioAtual;

    printf("Digite o código do funcionário: ");
    scanf("%d", &codigo);
    printf("Digite o salário atual: ");
    scanf("%f", &salarioAtual);

    calcularAumento(salarioAtual, codigo);
}

void calcularAumento(float salarioAtual, int codigo){
    float salarioNovo;
    if (salarioAtual >= 0 && salarioAtual <= 400){
        salarioNovo = salarioAtual + (salarioAtual * 0.15);
        printf("Código: %d\n", codigo);
        printf("Novo salário: %.2f\n", salarioNovo);
    }
    else if (salarioAtual > 400 && salarioAtual <= 700){
        salarioNovo = salarioAtual + (salarioAtual * 0.12);
        printf("Código: %d\n", codigo);
        printf("Novo salário: %.2f\n", salarioNovo);
    }
    else if (salarioAtual > 700 && salarioAtual <= 1000){
        salarioNovo = salarioAtual + (salarioAtual * 0.10);
        printf("Código: %d\n", codigo);
        printf("Novo salário: %.2f\n", salarioNovo);
    }
    else if (salarioAtual > 1000 && salarioAtual <= 1800){
        salarioNovo = salarioAtual + (salarioAtual * 0.07);
        printf("Código: %d\n", codigo);
        printf("Novo salário: %.2f\n", salarioNovo);
    }
    else if (salarioAtual > 1800 && salarioAtual <= 2500){
        salarioNovo = salarioAtual + (salarioAtual * 0.04);
        printf("Código: %d\n", codigo);
        printf("Novo salário: %.2f\n", salarioNovo);
    }
    else if (salarioAtual > 2500){
        printf("Código: %d\n", codigo);
        printf("Sem aumento\n");
    }
}