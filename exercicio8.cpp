#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <conio.h>


int main(void) 
{
	setlocale(LC_ALL, "PORTUGUESE");
	printf("\t\t\n * Exercicio 08 - Classifica��o da categoria de 5 a 18 anos * \n\n");
	
	int idade;		

	printf(" Digite a sua idade de 5 a 18: ");
	scanf("%i", &idade);	
	
	    switch(idade)
	    {
	    	case 5:
	    	case 6:
			case 7:
			printf("\n Classifica��o Infantil A\n\n");	    			
			break;	    			    	
	    	case 8:	    		    	
			case 9:	    		    	
			case 10:
	    	printf("\n Classifica��o Infantil B\n\n");;
			break;	    		
	    	case 11:	    		    	
	    	case 12:	    		    	
	    	case 13:
	    	printf("\n Classifica��o Juvenil A\n\n");
			break;	    	
	        case 14:	    		    	
	    	case 15:	    		    	
	    	case 16:	    		    	
	    	case 17:
	    	printf("\n Classifica��o Juvenil B\n\n");
			break;	    	
	    	case 18:
	    	printf("\n Classifica��o Adulto");			    	
	    	break;
	    	default:
	    	printf("\n Caso tenha mais de 18 anos escolha op��o 18! \n\n");
	    }
	    	        
	    	 			  		   	  	   		   
system("pause");
      
return 0;
}
