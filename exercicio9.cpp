#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <iostream>


int main()
{
	float a, b, c, mediaA, mediaP, mediaH; 
	char opcao; 
	    		
	setlocale(LC_ALL, "PORTUGUESE");
		
	printf("\t\t\n * Exercicio 09 - Escolha a m�dia * \n\n");
	
	
	printf(" Informe o primeiro valor: ");
	scanf("%f", &a);	
	printf(" Informe o  segundo valor: ");
	scanf("%f", &b);
	printf(" Informe o terceiro valor: ");
	scanf("%f", &c);
		
	printf("\n Digite a op��o 1 para M�dia Aritm�tica, 2 para Ponderada, 3 para Harm�nica: ");
	scanf("%i", &opcao);		
	
	
	switch(opcao)
	{
		case 1:						
		printf("\n M�dia Aritm�tica: %.2f\n\n", (a + b + c)/3);
		break;
			
		case 2:				
		printf("\n M�dia Ponderada: %.2f\n\n",(a*3+b*3+c*4)/10);	
		break;
		
		case 3:				
		printf("\n M�dia Harmonica: %.2f\n\n", 3/(1/a + 1/b + 1/c));
		break;
		
		default:
	    printf("\n\tOp��o Inv�lida! \n");
	}
	
   
				
					 		
	system("pause");
	return 0;
}

