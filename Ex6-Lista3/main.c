#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num; /*NUMERO PAR OU IMPAR*/

    printf("Insira um valor: \n");
    scanf("%d", &num);

    if (num%2==0){
        printf("O numero %d eh par \n", num);
    }else{
        printf("O numero %d eh impar \n", num);
    }
return 0;
}
