#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void calcularResultado(int escolha);

int main()
{
    int escolha;

    printf(" 1 -> Pedra \n 2 -> Papel \n 3 -> Tesoura \n Digite sua Escolha: ");
    scanf("%d", &escolha);

    calcularResultado(escolha);
}

void calcularResultado(int escolha){
    int computador;

    srand((unsigned)time(NULL));
    computador = rand() % 3 + 1;

    switch (computador)
    {
    case 1:
        printf("Computador escolheu Pedra\n");
        break;
    case 2:
        printf("Computador escolheu Papel\n");
        break;
    case 3:
        printf("Computador escolheu Tesoura\n");
        break;
    }
    
    if (escolha == computador){
        printf("Empate\n");
    } else if ((escolha == 1 && computador == 3) || (escolha == 2 && computador == 1) || (escolha == 3 && computador == 2)){
        printf("Você ganhou\n");
    } else{
        printf("Você perdeu\n");
    }
}