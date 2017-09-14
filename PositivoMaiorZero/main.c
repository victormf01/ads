#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() /* EX2 */
{
    float quadrado;
    float cubo;
    float raiz;
    float n;

    do
    {
        printf("Insira um numero: \n");
        scanf("%f", &n);
    } while (n<=0);

    quadrado = n * n;
    cubo = n * n * n;
    raiz = sqrt(n);

    printf("Numero elevado ao quadrado: %.2f \n", quadrado);
    printf("Numero elevado ao cubo: %.2f \n", cubo);
    printf("Raiz do numero: %.2f \n", raiz);

return 0;
}
