#include <stdio.h>

void calcularPrecoFinal(float precoEtiqueta, int condicaoPagamento);

int main(){
    float precoEtiqueta;
    int condicaoPagamento;

    printf("Digite o preço da etiqueta: ");
    scanf("%f", &precoEtiqueta);
    printf("Digite a condição de pagamento: \n 1 - (À VISTA EM DINHEIRO OU CHEQUE)\n 2 - (À VISTA NO CARTÃO DE CRÉDITO)\n 3 - (EM 2X NO CARTÃO DE CRÉDITO)\n 4 - (3X NO CARTÃO DE CRÉDITO)\n ");
    scanf("%d", &condicaoPagamento);

    calcularPrecoFinal(precoEtiqueta, condicaoPagamento);
}

void calcularPrecoFinal(float precoEtiqueta, int condicaoPagamento){
    float precoParcela;
    float precoFinal;
    if (condicaoPagamento == 1){
        precoFinal = precoEtiqueta - (precoEtiqueta * 0.1);
        printf("Preço final: %.2f\n", precoFinal);
    }
    else if (condicaoPagamento == 2){
        precoFinal = precoEtiqueta - (precoEtiqueta * 0.05);
        printf("Preço final: %.2f\n", precoFinal);
    }
    else if (condicaoPagamento == 3){
        precoFinal = precoEtiqueta;
        precoParcela = precoFinal / 2;
        printf("Preço final: %.2f\n", precoFinal);
        printf("Preço da parcela: %.2f\n", precoParcela);
    }
    else if (condicaoPagamento == 4){
        precoFinal = precoEtiqueta + (precoEtiqueta * 0.1);
        precoParcela = precoFinal / 3;
        printf("Preço final: %.2f\n", precoFinal);
        printf("Preço da parcela: %.2f\n", precoParcela);
    }
}