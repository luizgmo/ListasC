#include <stdio.h>

void calcularDivisivel(int num1, int num2, int num3, int num4);

int main()
{
    int num1, num2, num3, num4;

    printf("Digite os 4 números: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    calcularDivisivel(num1, num2, num3, num4);
}

void calcularDivisivel(int num1, int num2, int num3, int num4)
{
    if (num1 % 2 == 0 || num1 % 3 == 0)
    {
        printf("O número %d é divisível por 2 ou 3.\n", num1);
    }
    if (num2 % 2 == 0 || num2 % 3 == 0)
    {
        printf("O número %d é divisível por 2 ou 3.\n", num2);
    }
    if (num3 % 2 == 0 || num3 % 3 == 0)
    {
        printf("O número %d é divisível por 2 ou 3.\n", num3);
    }
    if (num4 % 2 == 0 || num4 % 3 == 0)
    {
        printf("O número %d é divisível por 2 ou 3.\n", num4);
    }
}