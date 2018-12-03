#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <iostream>

int main()
{
	
float salarioB, salarioL, salarioF, contribuicao, imposto;	
	
	setlocale(LC_ALL, "PORTUGUESE");
	printf("\t\t\n * Exercicio 25 - Salário Líquido * \n\n");
	
	printf("  Informe o Salário Bruto: ");
	scanf("%f", &salarioB);
	
	contribuicao = salarioB * 0.10;
	salarioL = salarioB - contribuicao;
	imposto  = salarioL * 0.05;
	salarioF = salarioB - contribuicao - imposto;
	
	printf("  O valor da contribuição é: %.2f\n", contribuicao);
	printf("  O valor do imposto é: %.2f\n", imposto); 
	printf("  O salário líquido é: %.2f\n\n", salarioF);
	
		
	
	system("pause");
	return 0;
}
