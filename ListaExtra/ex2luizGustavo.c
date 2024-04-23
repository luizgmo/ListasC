#include <stdio.h>
#include <math.h>

void verificaNumeroPrimo(int numero);

int main(){
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    verificaNumeroPrimo(numero);
}

void verificaNumeroPrimo(int numero){
    if (numero <= 1)
        printf("O número não é primo");
    for (int i = 2; i <= sqrt(numero); i++) {
        if (numero % i == 0)
            printf("O número não é primo");
    }
    printf("O número é primo");
}