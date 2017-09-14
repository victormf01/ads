#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pe;
    float pol;
    float jarda;
    float milha;

    do  /*EX3 POLEGADAS*/
    {
        printf("Insira um valor: \n");
        scanf("%f", &pe);
    } while (pe<=0);

    pol = pe * 12;
    jarda = pe / 3;
    milha = pe / 5280;

    printf("\n");
    printf("%.0f pes em polegadas: %.2f \n", pe, pol);
    printf("%.0f pes em jardas: %.2f \n", pe, jarda);
    printf("%.0f pes em milhas: %.4f \n", pe, milha);

return 0;
}
