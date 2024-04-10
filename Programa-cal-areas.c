#include<stdio.h>
main()
{
	printf("Programa para calcular areas");
	
	float raio, lado, base, alt, resC, pi, resQ, resT, num;
	
	
	
	printf("\n\nEscolha um numero: \n\n1-Circulo \n2-Quadrado \n3-Triangulo");
	scanf("%f", &num);
	
	
	
	pi = 3.14;
	
	resC = pi * (raio*raio);
	
	resQ = lado * lado;
	
	resT = base * alt /2; 
	
	
	if(num == 1)
	{
	printf("Digite o raio do circulo");
	scanf("%f", &raio);
    printf("O resultado deu %f", resC);
	}
	else if (num == 2)
	{
		printf("Digite o lado do quadrado:");
		scanf("%f", &lado);
		printf("O resultado deu%f", resQ);
	}
	else if (num == 3)
	{
		printf("Digite a base:");
		scanf("%f"), &base;
		printf("Digite a altura:");
		scanf("%f", &alt);
		printf("O resultado deu %f", resT);
	}
	else 
	{
		printf("Voce digitou um numero errado"); 
	}
}

