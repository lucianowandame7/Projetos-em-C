#include<stdio.h>
main()
{
printf("Programa para calcular o determinante de uma matriz 3x3");

int num1, num2, num3, num4, num5, num6, num7, num8, num9, d;
printf("\n\nDigite um numero para a primeira linha e primeira coluna:");
scanf("%d", &num1);

printf("\nDigite um numero para a primeira linha e segunda coluna:");
scanf("%d", &num2);

printf("\nDigite um numero para a primeira linha e terceira coluna:");
scanf("%d", &num3);

printf("\nDigite um numero para a segunda linha e primeira coluna:");
scanf("%d", &num4);

printf("\nDigite um numero para a segunda linha e segunda coluna:");
scanf("%d", &num5);

printf("\nDigite um numero para a segunda linha e terceira coluna:");
scanf("%d", &num6);

printf("\nDigite um numero para a terceira linha e primeira coluna:");
scanf("%d", &num7);

printf("\nDigite um numero para a terceira linha e segunda coluna:");
scanf("%d", &num8);

printf("\nDigite um numero para a terceira linha e terceira coluna:");
scanf("%d", &num9);



d=(num1*num5*num9 + num2*num6*num7 + num3*num4*num8)-(num3*num5*num7 + num1*num6*num8 + num9*num2*num4);

printf("O determinante deu %d", d);

}