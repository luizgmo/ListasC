#include <stdio.h>

void verificarNumero(float numero);

int main(){
    float numero;
    printf("Digite um número: ");
    scanf("%f", &numero);

    verificarNumero(numero);
}

void verificarNumero(float numero){
    if(numero > 20){
        printf("O número é maior que 20. A metade do número é: %.2f\n", numero/2);
    }
    else{
        printf("O número é menor que 20.\n");
    }
}