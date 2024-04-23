#include <stdio.h>

void converterTempo(int operacao, int tempo);

int main()
{
    int operacao, tempo;

    printf("1 -> Horas para minutos\n");
    printf("2 -> Minutos para segundos\n");
    printf("3 -> Segundos para milésimos\n");
    printf("4 -> Minutos para horas\n");
    printf("5 -> Segundos para minutos\n");
    printf("6 -> Milésimos para segundos\n");
    printf("Escolha a operação: ");
    scanf("%d", &operacao);

    printf("Digite o valor de tempo: ");
    scanf("%d", &tempo);

    converterTempo(operacao, tempo);
}

void converterTempo(int operacao, int tempo)
{
    float final;
    switch (operacao)
    {
    case 1:
        final = tempo * 60;
        printf("%d horas equivalem a %.2f minutos.\n", tempo, final);
        break;
    case 2:
        final = tempo * 60;
        printf("%d minutos equivalem a %.2f segundos.\n", tempo, final);
        break;
    case 3: //
        final = tempo * 1000;
        printf("%d segundos equivalem a %.2f milésimos de segundos.\n", tempo, final);
        break;
    case 4:
        final = tempo / 60;
        printf("%d minutos equivalem a %.2f horas.\n", tempo, final);
        break;
    case 5:
        final = tempo / 60;
        printf("%d segundos equivalem a %.2f minutos.\n", tempo, final);
        break;
    case 6:
        final = tempo / 1000;
        printf("%d milésimos de segundos equivalem a %.2f segundos.\n", tempo, final);
        break;
    default:
        printf("Opção inválida\n");
    }
}