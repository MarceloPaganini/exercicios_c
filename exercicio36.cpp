#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <iostream>
#define tam 20

int main()
{
	int i, a, n, TAM;

setlocale(LC_ALL, "PORTUGUESE");
	printf("\t\t\n  * Exercicio 36 - Tabuada *\n\n");

	for(i = 0; i < tam; i++)
	{
		printf(" Digite um número para o cálculo da tabuada de 1 a n x n\n");	
		scanf("%d", &n);	
		for(a = 1; a <= n; a++)
		{ printf(" %d x %d = %d\n", a, n, a * n); }
	}				
	system("pause");
	return 0;
}
 
