#include <stdio.h>

void verificarBissexto(int ano);

int main()
{
    int ano;
    
    printf("Digite o ano: ");
    scanf("%d", &ano);
    
    verificarBissexto(ano);    

    return 0;
}

void verificarBissexto(int ano){
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)){
        printf("O ano é bissexto");
    }
    else{
        printf("O ano não é bissexto");
    }
}