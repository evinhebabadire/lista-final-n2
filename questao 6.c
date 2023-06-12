)#include <stdio.h>
#include <math.h>

int main()
{   float a, b, soma, cavalo, biscoito, seno;
    printf("Digite o primeiro numero:");
    scanf("%f", &a);
    printf("Digite o segundo numero:");
    scanf("%f", &b);
    soma = a + b;
    printf("a soma de a + b é %f\n", soma);
    cavalo = a*b*b;
    printf("o produto de a pelo quadrado de b é %f\n", cavalo);
    biscoito = a*a;
    printf("o quadrado do primeiro é %f\n", biscoito);
    seno = sin(a-b);
    printf("o seno da diferença de a e b é %f\n", seno);

    return 0;
}
