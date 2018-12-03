#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <iostream>


int main()
{
	int a, b, c; 
	float D, R, S;
	
	R= (a+b)^2;
	S= (b+c)^2;
	D= (R+S)/2;
	
		
	setlocale(LC_ALL, "PORTUGUESE");
		
	printf("\t\t\n * Exercicio 02 - Calculo de D=R+S/2 * \n\n");
	
	printf(" Informe o primeiro valor: ");
	scanf("%i", &a);	
	printf(" Informe o  segundo valor: ");
	scanf("%i", &b);
	printf(" Informe o terceiro valor: ");
	scanf("%i", &c);	
			
	printf(" O resultado do calculo é: %.2f\n", D);
   
				
					 		
	system("pause");
	return 0;
}

