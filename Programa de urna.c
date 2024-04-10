#include<stdio.h>
#include<conio.h>
main()
{
	char voto; 
	printf("Programa de urna");
	printf("Escolha: \nE-Eneas\n L-Lula\n B-Bolsonaro\nS-Sergio");
	voto =getch();
	switch (voto)
	{
		case 'e':
		case 'E':printf("voce escolheu eneas");
				 break;
	
	    case 'l': 
	    case 'L': printf("Voce escolheu Lula");
	    	      break;
	
	    case 'b': 
	    case 'B': printf("Voce escolheu Bolsonaro");
	    	      break;
	    	      
	    case 's': 
	    case 'S': printf("Voce escolheu Sergio");
	    	      break;
	    	      
	    default: printf("Opcao invalida"); 
	
	}
	
}
