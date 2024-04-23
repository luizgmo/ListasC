// taxas sobre o preço do carro
// pequeno - 8% 
// medio - 12% 
// grande - 10% 

// norte e nordeste - 3%
//  sul e centro oeste - 5%
//  sudeste exceto sp e rio - 8%
//  sp - 10%
//  rio - 15%

// O valor do seguro do carro é calculado somando-se as taxas 1 e 2 aplicadas ao valor do veículo. O valor
// da franquia é calculado de acordo com o valor do seguro:

// Fazer um algoritmo para ler o preço do carro, o tipo do carro e a região onde será licenciado, e calcular
// e mostrar os valores do seguro e da franquia.

#include <stdio.h>

float calcularTaxa(char tipo, int regiao);
float calcularFranquia(float seguro);

int main()
{
    float preco, seguro, taxa, franquia;
    char tipo;
    int regiao;

    printf("Digite o preço do carro: ");
    scanf("%f", &preco);
    printf("Digite o tipo do carro: P(Pequeno), M(Médio) ou G(Grande):\n ");
    scanf(" %c", &tipo); 
    printf("Digite a região onde será licenciado: 1(Norte/Nordeste), 2(Sul/Centro-Oeste), 3(Sudeste (exceto SP/RJ)), 4(SP), 5(RJ):\n ");
    scanf("%d", &regiao);

    taxa = calcularTaxa(tipo, regiao);
    seguro = preco * taxa;

    franquia = calcularFranquia(seguro);

    printf("Valor do seguro: %.2f\n", seguro);
    printf("Valor da franquia: %.2f\n", franquia);
}

float calcularTaxa(char tipo, int regiao)
{
    float taxa;
    switch (tipo)
    {
        case 'P':
            taxa = 0.08;
            break;
        case 'M':
            taxa = 0.12;
            break;
        case 'G':
            taxa = 0.10;
            break;
        default:
            printf("Tipo inválido!\n");
            break;
    }
    switch (regiao)
    {
        case 1:
            taxa += 0.03;
            break;
        case 2:
            taxa += 0.05;
            break;
        case 3:
            taxa += 0.08;
            break;
        case 4:
            taxa += 0.10;
            break;
        case 5:
            taxa += 0.15;
            break;
        default:
            printf("Região inválida!\n");
            break;
    }
    return taxa;
}

float calcularFranquia(float seguro){
    float franquia;
    if (seguro < 300){
        franquia = 400;
    }
    else if (seguro >= 300 && seguro < 500){
        franquia = 600;
    }
    else if (seguro >= 500){
        franquia = 800;
    }
    return franquia;
}