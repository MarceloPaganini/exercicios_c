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
	printf("\t\t\n * Exercicio 11 - C�lculo de �rea * \n\n");	
	
	printf(" Digite o raio da circunfer�ncia: ");
	scanf("%f", &raio);
	area = pi * (raio * raio);
	
	printf(" A �rea da circunfer�ncia �: %.5f\n", area, " metros");	
	
	
	system("pause");
	return 0;
}
