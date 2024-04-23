#include <stdio.h>

void classeEleitoral(int idade);

int main(){
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    classeEleitoral(idade);
}

void classeEleitoral(int idade){
    if (idade < 16){
        printf("Não eleitor\n");
    }
    else if ((idade >= 16 && idade < 18) || (idade > 65)){
        printf("Eleitor Facultativo\n");
    }
    else if (idade >= 18 && idade <= 65){
        printf("Eleitor Obrigatório\n");
    }
}