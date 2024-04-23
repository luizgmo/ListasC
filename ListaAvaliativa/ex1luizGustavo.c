#include <stdio.h>

void verificarAltura(float alturaBob, float alturaCharlie);

int main() {
    int idadeCharlie = 7, idadeBob = 5;
    float alturaCharlie = 150, alturaBob = 110;
    float taxaCharlie = 2.1, taxaBob = 2.5;
    int anosBob, anosCharlie;

    anosBob = 20 - idadeBob;
    anosCharlie = 20 - idadeCharlie;

    alturaCharlie += anosCharlie * taxaCharlie;
    alturaBob += anosBob * taxaBob;

    verificarAltura(alturaBob, alturaCharlie);

    return 0;
}

void verificarAltura(float alturaBob, float alturaCharlie){
    if (alturaBob > alturaCharlie) {
        printf("Bob ultrapassará a altura de Charlie.\n");
        printf("Altura de Charlie aos 20 anos: %.2f metros\n", alturaCharlie / 100);
        printf("Altura de Bob aos 20 anos: %.2f metros\n", alturaBob / 100);
    } else {
        printf("Bob não ultrapassará a altura de Charlie.\n");
        printf("Altura de Charlie aos 20 anos: %.2f metros\n", alturaCharlie / 100);
        printf("Altura de Bob aos 20 anos: %.2f metros\n", alturaBob / 100);
    }
}
