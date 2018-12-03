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
		
	printf("\t\t\n * Exercicio 09 - Escolha a média * \n\n");
	
	
	printf(" Informe o primeiro valor: ");
	scanf("%f", &a);	
	printf(" Informe o  segundo valor: ");
	scanf("%f", &b);
	printf(" Informe o terceiro valor: ");
	scanf("%f", &c);
		
	printf("\n Digite a opção 1 para Média Aritmética, 2 para Ponderada, 3 para Harmônica: ");
	scanf("%i", &opcao);		
	
	
	switch(opcao)
	{
		case 1:						
		printf("\n Média Aritmética: %.2f\n\n", (a + b + c)/3);
		break;
			
		case 2:				
		printf("\n Média Ponderada: %.2f\n\n",(a*3+b*3+c*4)/10);	
		break;
		
		case 3:				
		printf("\n Média Harmonica: %.2f\n\n", 3/(1/a + 1/b + 1/c));
		break;
		
		default:
	    printf("\n\tOpção Inválida! \n");
	}
	
   
				
					 		
	system("pause");
	return 0;
}

