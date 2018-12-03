#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <iostream>

int main()
{
	int n, i, impar;
	
	
	setlocale(LC_ALL,"PORTUGUESE");
	printf("\t\t\n * Exercicio 13 -  Imprimir os 'n' primeiros naturais ímpares * \n\n");
	
	printf(" Digite o valor de n: ");
	scanf("%i", &n);
	i = 0;
	impar = 1;
	printf(" Os %i primeiros ímpares sao: \n", n);
	while (i < n) 
	{
    printf ("%i\n", impar);
    impar = impar + 2; 
    i = i + 1;
    }
	
	
	system("pause");
return 0;
}
