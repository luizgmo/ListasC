#include <stdio.h>

void converterHorario(int hora24, int minuto);

int main(){
    int hora24, minuto;

    printf("Digite a hora no formato de 24 horas: ");
    scanf("%d", &hora24);
    printf("Digite os minutos no formato de 24 horas: ");
    scanf("%d", &minuto);

    converterHorario(hora24, minuto);
}

void converterHorario(int hora24, int minuto){
    int hora12;
    char periodo[3];

    if (hora24 >= 0 && hora24 <= 11){
        if (hora24 == 0){
            hora12 = 12;
        } else {
            hora12 = hora24;
        }
        strcpy(periodo, "AM");
    } else{
        if (hora24 == 12){
            hora12 = 12;
        } else{
            hora12 = hora24 - 12;
        }
        strcpy(periodo, "PM");
    }

    printf("Horário no formato de 12 horas: %02d:%02d %s\n", hora12, minuto, periodo);
}