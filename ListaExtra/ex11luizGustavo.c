#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarIntervalo(int inicio, int fim, int quantidade);

int main()
{
    int inicio, fim, quantidade;

    printf("Digite o início do intervalo: ");
    scanf("%d", &inicio);
    printf("Digite o fim do intervalo: ");
    scanf("%d", &fim);
    printf("Digite a quantidade de números que deseja gerar: ");
    scanf("%d", &quantidade);

    gerarIntervalo(inicio, fim, quantidade);
}

void gerarIntervalo(int inicio, int fim, int quantidade)
{
    srand((unsigned)time(NULL));
    printf("Números aleatórios entre %d e %d:\n", inicio, fim);
    for (int i = 0; i < quantidade; i++)
    {
        printf("%d ", rand() % (fim - inicio + 1) + inicio);
    }
    printf("\n");
}