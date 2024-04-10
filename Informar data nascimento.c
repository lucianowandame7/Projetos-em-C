#include<stdio.h>
main() 
{
	int data, dia;
	printf("Programa para o usuario informar a data de nascimento.");
	printf("\n\nEscreva por extenso o mes");
	scanf("%d", &data);
	printf("\n\nEscreva por extenso o dia");
	scanf("%d", &dia);
	
	switch(data)
	{
		case 1: printf("Voce nasceu em janeiro no dia %d", dia);
					  break;	
		
		case 2: printf("Voce nasceu em fevereiro no dia %d",dia);
					  break;
					  
		case 3: printf("Voce nasceu em marco no dia %d", dia);
					  break;
					  
		case 4: printf("Voce nasceu em abril no dia %d", dia);
					  break;
					  
		case 5: printf("Voce nasceu em maio no dia %d", dia);
					  break;
					  
		case 6: printf("Voce nasceu em junho no dia %d", dia);
					  break;
					  
		case 7: printf("Voce nasceu em julho no dia %d", dia);
					  break;
					  
		case 8: printf("Voce nasceu em agosto no dia %d", dia);
					  break;
					  
		case 9: printf("Voce nasceu em setembro no dia %d", dia);
					  break;
					    
		case 10: printf("Voce nasceu em outubro no dia %d", dia);
					  break;
					  
		case 11: printf("Voce nasceu em novembro no dia %d", dia);
					  break;
					  
		case 12: printf("Voce nasceu em dezembro no dia %d",dia);
					  break;
					  
		default: printf("Informou data errada");
	}
}
