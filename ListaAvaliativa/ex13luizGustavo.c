#include <stdio.h>

void calcularGratificacao(char nome[], int horasExtras, int horasAusencia);

int main(){
    char nome[100];
    int horasExtras, horasAusencia;

    printf("Digite o nome do funcionário: ");
    scanf("%s", nome);
    printf("Digite a quantidade de horas extras: ");
    scanf("%d", &horasExtras);
    printf("Digite a quantidade de horas de ausência: ");
    scanf("%d", &horasAusencia);

    calcularGratificacao(nome, horasExtras, horasAusencia);
}

void calcularGratificacao(char nome[], int horasExtras, int horasAusencia){
    int horas;
    horas = horasExtras - (2/3 * (horasAusencia));
    
    if (horas >= 2400){
        printf("O funcionário %s recebeu um prêmio de R$ 500,00\n", nome);
    }
    else if (horas >= 1800 && horas < 2400){
        printf("O funcionário %s recebeu um prêmio de R$ 400,00\n", nome);
    }
    else if (horas >= 1200 && horas < 1800){
        printf("O funcionário %s recebeu um prêmio de R$ 300,00\n", nome);
    }
    else if (horas >= 600 && horas < 1200){
        printf("O funcionário %s recebeu um prêmio de R$ 200,00\n", nome);
    }
    else if (horas < 600){
        printf("O funcionário %s recebeu um prêmio de R$ 100,00\n", nome);
    }
}