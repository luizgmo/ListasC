#include <stdio.h>
#include <math.h>

float calcularDistancia(float x1, float y1, float x2, float y2);

int main(){
    float x1, y1, x2, y2;

    printf("Digite as coordenadas do primeiro ponto (x1, y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Digite as coordenadas do segundo ponto (x2, y2): ");
    scanf("%f %f", &x2, &y2);

    float distancia = calcularDistancia(x1, y1, x2, y2);
    printf("A distância entre os dois pontos é: %.2f\n", distancia);
}

float calcularDistancia(float x1, float y1, float x2, float y2){
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}