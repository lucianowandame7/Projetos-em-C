#include<stdio.h>
#include<conio.h>
main()
{
	printf("Programa para calcular a resistencia");
	
	int escolha; 
    float serie, paralelo, r1, r2; 
	char e; 
	printf("\n\nDigite o valor da r1(Resistor 1)");
	scanf("%f", &r1); 
	printf("\n\nDigite o valor da r2(Resistor 2)");
	scanf("%f", &r2); 
	printf("\n\nEscolha o tipo da resistencia, sendo 1-Serie e 2-Paralelo");
	scanf("%d", &escolha);


	if(escolha == 1)
	{
	  serie = r1 + r2;
	  printf("\nSua resistencia deu %f", serie); 
	}
	
	else if (escolha ==2)
	{
	   paralelo = r1 * r2 / (r1 + r2);
	  printf("\nSua resistencia deu %f", paralelo);
	}
	
	else
	{
		printf("Voce selecionou uma opcao errada");
	}

    printf("\n\n\nFeito por Luciano Wandame");
}
