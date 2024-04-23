#include <stdio.h>

void ordenarNumeros(int a, int b, int c);

int main()
{
    int num1, num2, num3;
    printf("Digite três números: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    ordenarNumeros(num1, num2, num3);
}

void ordenarNumeros(int a, int b, int c)
{
    int aux;

    if (a > b)
    {
        aux = a;
        a = b;
        b = aux;
    }
    if (a > c)
    {
        aux = a;
        a = c;
        c = aux;
    }
    if (b > c)
    {
        aux = b;
        b = c;
        c = aux;
    }

    printf("Ordem crescente: %d %d %d\n", a, b, c);
    printf("Ordem decrescente: %d %d %d\n", c, b, a);
}