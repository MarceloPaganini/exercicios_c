#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <iostream>


int main()
{
	int x1, y1, x2, y2; 
	float raiz, p1, p2;
	
	
	setlocale(LC_ALL, "PORTUGUESE");
	printf("\t\t\n * Exercicio 01 - A distância entre 2 pontos * \n");
	
	printf("\n Informe os valor para x1:\n");
	scanf("%i", &x1);	
	printf("\n Informe os valor para x2:\n");
	scanf("%i", &x2);	
	printf("\n Informe os valor para y1:\n");
	scanf("%i", &y1);
	printf("\n Informe os valor para y2:\n");
	scanf("%i", &y2);
	
	p1=(x2-x1)^2;
	p2=(y2-y1)^2;
	raiz = sqrt(p1+p1);
	
	
	printf("\n A distância entre os pontos é: %.2f\n", raiz);

	
	system("pause");
	return 0;
}

