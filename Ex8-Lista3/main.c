#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cod;
    float salario;

    do
    {
        printf("\n");
        printf("Codigo |    Cargo \n");
        printf("   1   | Escriturario \n");
        printf("   2   |  Secretario \n");
        printf("   3   |    Caixa \n");
        printf("   4   |   Gerente \n");
        printf("   5   |   Diretor \n");
        printf("\n");
        printf("Selecione o codigo de seu cargo: ");
        scanf("%d", &cod);
    } while ((cod!=1)&&(cod!=2)&&(cod!=3)&&(cod!=4)&&(cod!=5));
    switch(cod)
    {
    case 1:
        {
            printf("Insira seu salario: ");
            scanf("%f", &salario);
            salario = salario + salario * 0.5;
            printf("Seu novo salario de Escrituario com reajuste de 50p/cento: R$%.2f. \n", salario);
            break;
        }
    case 2:
        {
            printf("Insira seu salario: ");
            scanf("%f", &salario);
            salario = salario + salario * 0.35;
            printf("Seu novo salario de Secretario com reajuste de 35p/cento: R$%.2f. \n", salario);
            break;
        }
    case 3:
        {
            printf("Insira seu salario: ");
            scanf("%f", &salario);
            salario = salario + salario * 0.2;
            printf("Seu novo salario de Caixa com reajuste de 20p/cento: R$%.2f. \n", salario);
            break;
        }
    case 4:
        {
            printf("Insira seu salario: ");
            scanf("%f", &salario);
            salario = salario + salario * 0.1;
            printf("Seu novo salario de Gerente com reajuste de 10p/cento: R$%.2f. \n", salario);
            break;
        }
    case 5:
        {
            printf("Seu salario de Diretor nao sofrera reajuste. \n");
            break;
        }
    }
return 0;
}
