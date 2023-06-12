#include <stdio.h>

int main()
{   float numero, sucessor, antecessor;
    printf("Digite um numero:");
    scanf("%f", &numero);
    sucessor= numero + 1 ;
    printf("o sucessor vai ser %f\n", sucessor);
    antecessor= numero - 1;
    printf("o antecessor vai ser %f\n", antecessor);
  
    return 0;
}
