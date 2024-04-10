#include<stdio.h>
main()
{
printf("Programa para calcular o determinante de uma matriz 2x2");

int num1, num2, num3, num4, d;
printf("\n\nDigite um numero para a primeira linha e primeira coluna:");
scanf("%d", &num1);

printf("Digite um numero para a primeira linha e segunda coluna:");
scanf("%d", &num2);

printf("Digite um numero para a segunda linha e primeira coluna:");
scanf("%d", &num3);

printf("Digite um numero para a segunda linha e segunda coluna:");
scanf("%d", &num4);

d=(num1*num4)-(num2*num3);

printf("O determinante e %d", d);

}
