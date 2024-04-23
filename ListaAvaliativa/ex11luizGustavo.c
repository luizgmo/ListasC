#include <stdio.h>

void calcularCodigo(int codigo1, int codigo2, int codigo3);
void calcularIdade(int idade1, int idade2, int idade3);
void calcularSexo(char sexo1, char sexo2, char sexo3);
void calcularSalario(float salario1, float salario2, float salario3);

int main(){
    int codigo1, codigo2, codigo3, idade1, idade2, idade3;
    char nome1[100], nome2[100], nome3[100], sexo1, sexo2, sexo3;
    float salario1, salario2, salario3;

    printf("Digite o código do funcionário 1, 2 e 3: \n");
    scanf("%d %d %d", &codigo1, &codigo2, &codigo3);
    printf("Digite o nome do funcionário 1, 2 e 3: \n");
    scanf("%s %s %s", nome1, nome2, nome3);
    printf("Digite a idade do funcionário 1, 2 e 3: \n");
    scanf("%d %d %d", &idade1, &idade2, &idade3);
    printf("Digite o sexo(F/M) do funcionário 1, 2 e 3: \n");
    scanf(" %c %c %c", &sexo1, &sexo2, &sexo3);
    printf("Digite o salário do funcionário 1, 2 e 3: \n");
    scanf("%f %f %f", &salario1, &salario2, &salario3);

    calcularCodigo(codigo1, codigo2, codigo3);
    calcularIdade(idade1, idade2, idade3);
    calcularSexo(sexo1, sexo2, sexo3);
    calcularSalario(salario1, salario2, salario3);
}

void calcularCodigo(int codigo1, int codigo2, int codigo3){
    int contador = 0;
    if (codigo1 < 100){
        contador++;
    }
    if (codigo2 < 100){
        contador++;
    }
    if (codigo3 < 100){
        contador++;
    }
    printf("Quantidade de funcionários com código inferior a 100: %d\n", contador);
}

void calcularIdade(int idade1, int idade2, int idade3){
    int contador = 0;
    if (idade1 > 60){
        contador++;
    }
    if (idade2 > 60){
        contador++;
    }
    if (idade3 > 60){
        contador++;
    }
    printf("Quantidade de funcionários com idade superior a 60 anos: %d\n", contador);
}

void calcularSexo(char sexo1, char sexo2, char sexo3){
    int contador = 0;
    if (sexo1 == 'F'){
        contador++;
    }
    if (sexo2 == 'F'){
        contador++;
    }
    if (sexo3 == 'F'){
        contador++;
    }
    printf("Quantidade de funcionários do sexo feminino: %d\n", contador);
}
void calcularSalario(float salario1, float salario2, float salario3){
    int contador = 0;
    if (salario1 >= 1000 && salario1 <= 2000){
        contador++;
    }
    if (salario2 >= 1000 && salario2 <= 2000){
        contador++;
    }
    if (salario3 >= 1000 && salario3 <= 2000){
        contador++;
    }
    printf("Quantidade de funcionários com salário entre R$ 1000,00 e R$ 2000,00: %d\n", contador);
}