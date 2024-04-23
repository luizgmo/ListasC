#include <stdio.h>

void definirNumeros(int i, float a, float b, float c);

int main() {
    int i;
    float a, b, c;

    printf("Digite o valor de i (1-3): ");
    scanf("%d", &i);

    printf("Digite o valor de a, b e c: \n");
    scanf("%f %f %f", &a, &b, &c);

    definirNumeros(i, a, b, c);

}

void definirNumeros(int i, float a, float b, float c) {
    float aux;

    if (a > b) {
        aux = a;
        a = b;
        b = aux;
    }
    if (b > c) {
        aux = b;
        b = c;
        c = aux;
    }
    if (a > b) {
        aux = a;
        a = b;
        b = aux;
    }

    switch (i) {
        case 1:
            printf("Ordem crescente: %.2f, %.2f, %.2f\n", a, b, c);
            break;
        case 2:
            printf("Ordem decrescente: %.2f, %.2f, %.2f\n", c, b, a);
            break;
        case 3:
            printf("Maior valor no meio: %.2f, %.2f, %.2f\n", b, c, a);
            break;
        default:
            printf("Valor de i inválido!\n");
    }
}
