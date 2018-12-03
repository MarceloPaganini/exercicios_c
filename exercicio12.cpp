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
	printf("\t\t\n * Exercicio 12 -  Área de um Triângulo * \n\n");
	
	printf(" Informe a base do triângulo: ");
	scanf("%f", &base);
	printf(" Informe a altura do triângulo: ");
	scanf("%f", &altura);
	area = base * altura / 2;
	
	printf(" A área do triângulo é: %.2f\n", area);
	
	
	
	
	
system("pause");
return 0;
}
