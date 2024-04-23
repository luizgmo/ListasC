#include <stdio.h>

void alterarNumero(int num1, int num2);

int main(){
    int num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    alterarNumero(num1, num2);

  
    return 0;
}

void alterarNumero(int num1, int num2){
    if(num1 > num2){
        printf("O primeiro número é maior que o segundo número.\n");
        int aux = num1;
        num1 = num2;
        num2 = aux;
        printf("Alterando os valores: num1 = %d e num2 = %d\n", num1, num2);

    }
    else{
        printf("O segundo número é maior que o primeiro número.\n");
    }
}