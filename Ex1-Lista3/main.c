#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r;
    float area;
    do
    {
        printf("Insira o raio da circunferencia: \n");
        scanf("%d", &r);
    } while (r<=0);

    area = (r * r * 3.14);
    printf("Area: %.2f", area);
 return 0;
 }
 /*AREA DA CIRCUNFERENCIA EX1*/
