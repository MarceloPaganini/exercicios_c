#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <iostream>

int main()
{
	float area, base, altura;
	
	
	setlocale(LC_ALL,"PORTUGUESE");
	printf("\t\t\n * Exercicio 12 -  �rea de um Tri�ngulo * \n\n");
	
	printf(" Informe a base do tri�ngulo: ");
	scanf("%f", &base);
	printf(" Informe a altura do tri�ngulo: ");
	scanf("%f", &altura);
	area = base * altura / 2;
	
	printf(" A �rea do tri�ngulo �: %.2f\n", area);
	
	
	
	
	
system("pause");
return 0;
}
