#include <stdio.h>
#include <stdlib.h>

int main()
{
    float trab = 0, sem = 0, fin = 0, media = 0;
    printf("Insira a nota do trabalho: \n");
    scanf("%f", &trab);
    printf("Insira a nota da avaliacao semestral: \n");
    scanf("%f", &sem);
    printf("Insira a nota do exame final: \n");
    scanf("%f", &fin);

    media = (trab * 0.2 + sem * 0.3 + fin * 0.5);

    if (media >= 8)
        printf("Sua media = %.2f. Conceito A",media);
    else if (media < 8 && media >= 7)
        printf("Sua media = %.2f. Conceito B",media);
    else if (media < 7 && media >= 6)
        printf("Sua media = %.2f. Conceito C",media);
    else if (media < 6 && media >= 5)
        printf("Sua media = %.2f. Conceito D",media);
    else if (media < 5)
        printf("Sua media = %.2f. Conceito E",media);
return 0;
}
