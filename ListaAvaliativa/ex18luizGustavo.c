#include <stdio.h>

void verificarPalindromo(int numero);

int main() {
    int numero;

    printf("Digite um número inteiro de 5 dígitos: ");
    scanf("%d", &numero);

    verificarPalindromo(numero);

    return 0;
}

void verificarPalindromo(int numero) {
    int original = numero;
    int digito1 = numero / 10000;
    int digito2 = (numero / 1000) % 10;
    int digito4 = (numero / 10) % 10;
    int digito5 = numero % 10;

    if (digito1 == digito5 && digito2 == digito4) {
        printf("O número %d é um palíndromo.\n", original);
    } else {
        printf("O número %d não é um palíndromo ou não tem 5 dígitos.\n", original);
    }
}
