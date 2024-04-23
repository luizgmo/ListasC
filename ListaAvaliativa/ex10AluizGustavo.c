#include <stdio.h>

void calcularPrecoFinal(float valorProduto, char NomeProduto[]);

int main(){
    float valorProduto;
    char nomeProduto[100];

    printf("Digite o nome do produto: ");
    scanf("%s", nomeProduto);
    printf("Digite o valor do produto: ");
    scanf("%f", &valorProduto);

    calcularPrecoFinal(valorProduto, nomeProduto);
}

void calcularPrecoFinal(float valorProduto, char NomeProduto[]){
    float precoFinal;
    if (valorProduto < 10){
        precoFinal = valorProduto + (valorProduto * 0.7);
        printf("Nome do produto: %s\n", NomeProduto);
        printf("Preço final: %.2f\n", precoFinal);
    }
    else if (valorProduto >= 10 && valorProduto < 30){
        precoFinal = valorProduto + (valorProduto * 0.5);
        printf("Nome do produto: %s\n", NomeProduto);
        printf("Preço final: %.2f\n", precoFinal);
    }
    else if (valorProduto >= 30 && valorProduto < 50){
        precoFinal = valorProduto + (valorProduto * 0.4);
        printf("Nome do produto: %s\n", NomeProduto);
        printf("Preço final: %.2f\n", precoFinal);
    }
    else if (valorProduto >= 50){
        precoFinal = valorProduto + (valorProduto * 0.3);
        printf("Nome do produto: %s\n", NomeProduto);
        printf("Preço final: %.2f\n", precoFinal);
    }
}