#include <stdio.h>

int main (){

    int nota1, nota2, nota3;
    float media;
    int soma = nota1 + nota2 + nota3;
    float media = (float) soma / 3;

    printf("Digite a sua nota 1: \n");
    scanf("%d", nota1);
    printf("Digite a sua nota 2: \n");
    scanf("%d", nota2);
    printf("Digite a sua nota 3: \n");
    scanf("%d", nota3);

    printf("A sua média é: %.2f\n", media);
    



    return 0;

}
