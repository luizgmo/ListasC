#include <stdio.h>

void calcularQuadrado(float ladoquad);
void calcularRetangulo(float lado1ret, float lado2ret);
void calcularTriangulo(float trbase, float traltura);
void calcularCirculo(float raio);

int main()
{
    int operacao;
    float ladoquad, lado1ret, lado2ret, trbase, traltura, raio;

    printf("1 - Quadrado\n");
    printf("2 - Retângulo\n");
    printf("3 - Triângulo\n");
    printf("4 - Círculo\n");
    printf("Digite a operação desejada: ");
    scanf("%d", &operacao);

    if (operacao == 1)
    {
        printf("Quadrado\n");
        printf("Digite o lado do quadrado: ");
        scanf("%f", &ladoquad);
        calcularQuadrado(ladoquad);
    }
    else if (operacao == 2)
    {
        printf("Retângulo\n");
        printf("Digite o lado 1 do retângulo: ");
        scanf("%f", &lado1ret);
        printf("Digite o lado 2 do retângulo: ");
        scanf("%f", &lado2ret);
        calcularRetangulo(lado1ret, lado2ret);
    }
    else if (operacao == 3)
    {
        printf("Triângulo\n");
        printf("Digite a base do triângulo: ");
        scanf("%f", &trbase);
        printf("Digite a altura do triângulo: ");
        scanf("%f", &traltura);
        calcularTriangulo(trbase, traltura);
    }
    else if (operacao == 4)
    {
        printf("Círculo\n");
        printf("Digite o raio do círculo: ");
        scanf("%f", &raio);
        calcularCirculo(raio);
    }
    else
    {
        printf("Operação inválida!\n");
        return 1;
    }
}

void calcularQuadrado(float ladoquad){
    float area;
    area = ladoquad * ladoquad;
    printf("A área do quadrado é %.2f\n", area);
}

void calcularRetangulo(float lado1ret, float lado2ret){
    float area;
    area = lado1ret * lado2ret;
    printf("A área do retângulo é %.2f\n", area);
}

void calcularTriangulo(float trbase, float traltura){
    float area;
    area = (trbase * traltura) / 2;
    printf("A área do triângulo é %.2f\n", area);
}

void calcularCirculo(float raio){
    float area;
    area = 3.1415 * (raio * raio);
    printf("A área do círculo é %.2f\n", area);
}