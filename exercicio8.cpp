#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <conio.h>


int main(void) 
{
	setlocale(LC_ALL, "PORTUGUESE");
	printf("\t\t\n * Exercicio 08 - Classificação da categoria de 5 a 18 anos * \n\n");
	
	int idade;		

	printf(" Digite a sua idade de 5 a 18: ");
	scanf("%i", &idade);	
	
	    switch(idade)
	    {
	    	case 5:
	    	case 6:
			case 7:
			printf("\n Classificação Infantil A\n\n");	    			
			break;	    			    	
	    	case 8:	    		    	
			case 9:	    		    	
			case 10:
	    	printf("\n Classificação Infantil B\n\n");;
			break;	    		
	    	case 11:	    		    	
	    	case 12:	    		    	
	    	case 13:
	    	printf("\n Classificação Juvenil A\n\n");
			break;	    	
	        case 14:	    		    	
	    	case 15:	    		    	
	    	case 16:	    		    	
	    	case 17:
	    	printf("\n Classificação Juvenil B\n\n");
			break;	    	
	    	case 18:
	    	printf("\n Classificação Adulto");			    	
	    	break;
	    	default:
	    	printf("\n Caso tenha mais de 18 anos escolha opção 18! \n\n");
	    }
	    	        
	    	 			  		   	  	   		   
system("pause");
      
return 0;
}
