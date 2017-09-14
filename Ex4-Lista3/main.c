#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;    /*MOSTRAR O MAIOR VALOR*/

    printf("Insira um valor: \n");
    scanf("%d", &num1);
    printf("Insira outro valor: \n");
    scanf("%d", &num2);

    if (num1>num2){
        printf("Maior valor: %d", num1);
    }else{
        printf("Maior valor: %d", num2);
    }
return 0;
}
