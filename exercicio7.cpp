#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <iostream>

int main()
{
		
	setlocale(LC_ALL, "PORTUGUESE");
	
	int A, B;
		
	printf("\t\t\n * Exercicio 07 - S�o m�ltiplos ou N�o s�o m�ltiplos * \n\n");
	
	printf(" Informe o primeiro valor: ");
	scanf("%i", &A);	
	printf(" Informe o  segundo valor: ");
	scanf("%i", &B);
	if (A>B)
	if (A%B==0)
	printf(" S�o m�ltiplos\n");
	else
	printf(" N�o s�o m�ltiplos\n ");
	else
	if (B%A==0)
	printf(" S�o m�ltiplos\n");
	else
	printf(" N�o s�o m�ltiplos\n");
	
	
			
	
   
				
					 		
	system("pause");
	return 0;
}

