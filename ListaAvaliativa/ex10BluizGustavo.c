#include <stdio.h>

void validarData(int data);

int main()
{
    int data;

    printf("Digite a data no formato ddmmaaaa: ");
    scanf("%d", &data);

    validarData(data);
}

void validarData(int data)
{
    int dia, mes, ano;

    dia = data / 1000000;
    mes = (data / 10000) % 100;
    ano = data % 10000;

    if (mes >= 1 && mes <= 12)
    {
        if (dia >= 1 && dia <= 31)
        {
            if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30)
            {
                printf("Data inválida!\n");
                return;
            }
            else if (mes == 2)
            {
                if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
                {
                    if (dia > 29)
                    {
                        printf("Data inválida!\n");
                        return;
                    }
                }
                else
                {
                    if (dia > 28)
                    {
                        printf("Data inválida!\n");
                        return;
                    }
                }
            }
        }
        else
        {
            printf("Data inválida!\n");
            return;
        }
    }
    else
    {
        printf("Data inválida!\n");
        return;
    }

    printf("Data válida!\n");
}
