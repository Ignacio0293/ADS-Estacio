#include <stdio.h>

int main (){

    int nota1, nota2, nota3;
    int soma;
    float media;

    printf("Digite a nota 1: \n");
    scanf ("%d", &nota1);
    printf("Digite a nota 2: \n");
    scanf("%d", &nota2);
    printf("Digite a nota 3: \n");
    scanf("%d", &nota3);

    soma = nota1 + nota2 + nota3;
    media = (float) soma/3;

    printf("Essa é a soma: %.2f\n", media);   

     

    
    return 0;
}