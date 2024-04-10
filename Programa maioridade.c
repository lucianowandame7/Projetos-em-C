#include<stdio.h>
main()
{
	printf("Programa para identificar a maioridade");

	 int idade;

	printf("\nDigite a sua idade:");
	scanf("%d", &idade); 
	
	if (idade >= 18)
	{
		printf("Seja bem vindo");
	}
	else
	{
		printf("Voce nao pode entrar aqui");
	}
}
