#include <stdio.h>

void verificarCaracteristica(int numero);

int main()
{
    int numero;
    
    printf("Digite o número de 4 dígitos: ");
    scanf("%d", &numero);
    
    verificarCaracteristica(numero);

    return 0;
}

void verificarCaracteristica(int numero){
    if ((numero < 1000) || (numero > 9999)){
        printf("O número não tem 4 digitos");
    }
    
    int soma = (numero/100) + (numero%100);
    
    if (soma * soma == numero){
        printf("O número possui a característica");
    }
    else{
        printf("O número não possui a característica");
    }
    
}