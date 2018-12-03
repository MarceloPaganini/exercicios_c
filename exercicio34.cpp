#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <iostream>

int main()
{
	int x,n, maior=0, menor=99999;
	
	setlocale(LC_ALL, "PORTUGUESE");
	printf("\t\t\n  * Exercicio 34 - Maio Menor *\n\n");

	for (x=1;x<=50;x++)
	{
		printf (" informe um Número: ");
		scanf ("%i", &n);
		if (n>maior)
		{maior=n;}
		if (n<menor)
		{menor=n;}
	}
	printf (" O maior número é %i e o menor é %i\n", maior, menor);
			
	system("pause");
	return 0;
}
