#include <stdio.h>
#include <string.h>

void validaCPF(char *cpf);

int main() {
    char cpf[20];
    printf("Digite o CPF (somente números): ");
    scanf("%s", cpf);

    validaCPF(cpf);

}

void validaCPF(char *cpf) {
    if (strlen(cpf) == 11) {
        printf("O CPF é válido");
    } else {
        printf("O CPF não é válido");
    }
}