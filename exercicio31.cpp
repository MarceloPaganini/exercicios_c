#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <iostream>

int main()
{
	int a, i, negativos = 0;
	
	setlocale(LC_ALL, "PORTUGUESE");
	printf("\t\t\n  * Exercicio 31 - Ler 5 valores *\n\n");

	for(i=0; i<5; i++)
    {
    	printf(" Digite os numeros: ");
    	scanf("%d", &a);
 
    	if(a < 0)
        { 
        	negativos++;
        }
    
	}  
 
 	printf("\nO Total de Negativos : %.1d\n\n", negativos);

	system("pause");
	return 0;
}
