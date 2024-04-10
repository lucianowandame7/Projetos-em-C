#include<stdio.h>
main()
{
	printf("Calculadora que executa uma das operacoes");
	
	float num1, num2, total;
	int escolha; 
	printf("\n\nDigite o primeiro valor");
	scanf("%f", &num1);
	printf("\n\nDigite o segundo valor");
	scanf("%f", &num2);
	
	printf("\n\nEscolha uma operacao, sendo 1= +, 2= -, 3= /, 4= *");
	scanf("%d", &escolha);
	
	switch(escolha)
	{
		 case 1: total = num1 + num2;
	     printf("\n\nO resultado deu %f", total);
	     break; 
	     
	     case 2: total = num1 - num2;
	     printf("\n\nO resultado deu %f", total);
	     break;
	     
	     case 3: total = num1 / num2;
	     printf("\n\nO resultado deu %f", total);
	     break;
	     
	     case 4: total = num1 * num2;
	     printf("\n\nO resultado deu %f", total);
	     break;
	     
	     default: printf("\n\nVoce digitou a opcao errada.");
	 }
	 printf("Feito por Luciano Wandame");
}
