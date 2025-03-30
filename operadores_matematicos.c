#include <stdio.h>

int main(){


int numero1, numero2, resultado;
int soma, subtracao, multiplicacao, divisao;

printf ("Digite o número 1: \n");
scanf ("%d", &numero1);
printf ("Digite o número 2: \n");
scanf ("%d", &numero2);

soma = numero1 + numero2;
subtracao = numero1 - numero2;
multiplicacao = numero1 * numero2;
divisao = numero1 / numero2;
resultado = divisao + numero1;

printf ("A soma é: %d\n", soma);
printf("A subtração é: %d\n", subtracao);
printf("A multiplicação é: %d\n", multiplicacao);
printf ("A divisão é: %d\n", divisao);
printf ("Resultado é: %d\n", resultado);

resultado += 10;
printf ("O resultado é: %d\n", resultado);

resultado -= divisao;
printf ("O resultado é: %d\n", resultado);

resultado *= 5;
printf ("O resultado é: %d\n", resultado);

resultado /= 2;
printf ("O resultado é: %d\n", resultado);

int a = 2;

int b = a++;
printf ("O B é: %d e o A é: %d\n", b,a);

b = ++a;
printf ("O B é: %d e o A é: %d\n", b,a);

b = a--;
printf ("O B é: %d e o A é: %d\n", b,a);

b = --a;
printf ("O B é: %d e o A é: %d\n", b,a);


return 0;


}