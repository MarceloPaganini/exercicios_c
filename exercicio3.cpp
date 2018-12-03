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
	printf("\t\t\n * Exercicio 03 - Calculo da Idade em Anos, Meses e Dias* \n\n");
		
	float idade, dias, meses, anos;
	printf(" Digite a sua idade: ");
	scanf("%f", &idade);

	dias = idade * 365;
	meses = idade * 12;
	

	
	printf("\n A sua idade em meses é: %.2f\n", meses);
	printf("\n A sua idade em dias é:  %.2f\n", dias);
	
	system("pause");
	return 0;
}

