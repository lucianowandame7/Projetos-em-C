#include<stdio.h>
#include<math.h>
main()
{
	
	printf("Programa para calcular bhaskara");
	
	float a, b, c, del, x1, x2;
	
	printf("\nDigite o valor de a:");
	scanf("%f", &a);
	
	printf("\nDigite o valor de b:");
	scanf("%f", &b);
	
	printf("\nDigite o valor de c:");
	scanf("%f", &c);
	
	del = b*b - 4*a*c;
	
	x1= (-b + sqrt(del))/2*a;
	
	x2= (-b - sqrt(del))/2*a;
	
	if(del<=0)
	{
	printf("Escolha outros numeros");
    }
	else
	{
		printf("Tudo certo");
	}
	
	
	printf("O resultado das raizes deram: %f, %f", x1, x2);
	
}
