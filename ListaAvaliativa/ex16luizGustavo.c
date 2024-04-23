#include <stdio.h>
#include <math.h>

void calcularRaiz(float a, float b, float c);

int main(){
    float a, b, c;

    printf("Digite o valor de a, b e c: \n");
    scanf("%f %f %f", &a, &b, &c);

    calcularRaiz(a, b, c);

}

void calcularRaiz(float a, float b, float c){
    float x1, x2;
    float delta = b*b - 4*a*c;
    if(delta < 0){
        printf("Não existem raízes reais.\n");
    }
    else{
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }
}