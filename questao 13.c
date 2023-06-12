#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade=0;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    if(idade>=18 && idade<=67){
        printf("Voce pode doar sangue.");
    }
    else{
        printf("Voce nao pode doar sangue.");
    }
    return 0;
}
14)#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    if(numero%2==0){
        printf("%d e par.", numero);
    }
    else{
        printf("%d e impar.", numero);
    }
    return 0;
}
