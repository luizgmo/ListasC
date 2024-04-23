#include <stdio.h>

void determinarIdade(int idade);

int main(){
    int idade;
    printf("Digite a idade: ");
    scanf("%d", &idade);

    determinarIdade(idade);
}

void determinarIdade(int idade){
    if(idade >= 0 && idade <= 12){
        printf("Criança\n");
    }else if(idade > 12 && idade <= 18){
        printf("Adolescente\n");
    }else if(idade > 18 && idade <= 60){
        printf("Adulto\n");
    }else if(idade > 60){
        printf("Idoso\n");
    }else{
        printf("Idade inválida!\n");
    }
}