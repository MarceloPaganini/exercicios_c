#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <iostream>

int main()
{
	float juca = 1.10, chico = 1.50;	
	int ano = 0;
	
	setlocale(LC_ALL, "PORTUGUESE");
	printf("\t\t\n  * Exercicio 33 - Cálculo Altura *\n\n");

	while (juca < chico)
	{
	juca = juca + 0.03;
	chico = chico + 0.02; 
	ano = ano + 1;
	}
	printf("  %i Anos deverao ser necessários para que Juca seja maior que Chico. \n\n" , ano); 
	printf("  %.2f A Altura de Juca\n\n", juca); 
	printf("  %.2f A altura de Chico\n\n", chico); 

	system("pause");
	return 0;
}
