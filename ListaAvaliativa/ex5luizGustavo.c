#include <stdio.h>

void calcularDuracaoJogo(int horaInicio, int minutoInicio, int horaTermino, int minutoTermino, char dia);

int main() {
    int horaInicio, minutoInicio, horaTermino, minutoTermino;
    char dia;

    printf("Digite a hora de início do jogo (horas (00-23) e minutos(00-59)): \n");
    scanf("%d %d", &horaInicio, &minutoInicio);

    printf("Digite a hora de término do jogo (horas (00-23) e minutos(00-59)): \n");
    scanf("%d %d", &horaTermino, &minutoTermino);

    printf("O jogo terminou no mesmo dia? (S/N): ");
    scanf(" %c", &dia);

    calcularDuracaoJogo(horaInicio, minutoInicio, horaTermino, minutoTermino, dia);
}

void calcularDuracaoJogo(int horaInicio, int minutoInicio, int horaTermino, int minutoTermino, char dia) {
    int duracaoHoras, duracaoMinutos;

    if (dia == 'S' || dia == 's') {
        duracaoMinutos = (horaTermino * 60 + minutoTermino) - (horaInicio * 60 + minutoInicio);
    } else {
        duracaoMinutos = (24 * 60 - (horaInicio * 60 + minutoInicio)) + (horaTermino * 60 + minutoTermino);
    }

    if (duracaoMinutos < 0) {
        duracaoMinutos += 24 * 60;
    }

    if (duracaoMinutos <= 24 * 60) {
        duracaoHoras = duracaoMinutos / 60;
        duracaoMinutos %= 60;
        printf("Duração do jogo: %d horas e %d minutos\n", duracaoHoras, duracaoMinutos);
    } else {
        printf("Tempo máximo de jogo atingido\n");
    }
}
