#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <iostream>

int main()
{
	float area, raio, pi = 3.14159;
	
	
	setlocale(LC_ALL,"PORTUGUESE");
	printf("\t\t\n * Exercicio 11 - Cálculo de Área * \n\n");	
	
	printf(" Digite o raio da circunferência: ");
	scanf("%f", &raio);
	area = pi * (raio * raio);
	
	printf(" A área da circunferência é: %.5f\n", area, " metros");	
	
	
	system("pause");
	return 0;
}
