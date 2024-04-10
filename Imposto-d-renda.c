#include<stdio.h>
main()
{
	float rend1, rend2, rend3, rend4, ir, filhos, rendt, quantf;
	
	
	printf("\tPrograma para calcular o i.r");
	printf("\n\nQual a sua primeira renda no mes?");
	scanf("%f", &rend1);
	printf("Qual a sua segunda renda no mes?");
	scanf("%f", &rend2);
	printf("Qual a sua terceira renda no mes?");
	scanf("%f", &rend3);
	printf("Qual a sua quarta renda no mes?");
	scanf("%f", &rend4);
	printf("Quantos filhos voce tem?");	
	scanf("%f", &filhos);
	
	
	rendt = (rend1 + rend2 + rend3 + rend4) * 12;
	quantf = filhos * 530;
	ir = (0.12 * rendt) - quantf;
	printf("Voce tera que declarar %f", ir);
}
