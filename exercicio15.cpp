#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <iostream>

int main() {
	
	int x, n, potencia, contador; 
	
	setlocale(LC_ALL, "PORTUGUESE");
	printf("\t\t\n * Exercicio 15 - Calcular x^n * \n\n");
	
	printf(" Digite um numero inteiro: ");
    scanf("%i", &x);
    printf(" Digite um numero um inteiro não-negativo: ");
    scanf("%i", &n);
    potencia = 1;
    contador = 0;
    
    while (contador != n) 
	{
    potencia = potencia * x;
    contador = contador + 1;
    }
  
    printf("\n O valor de %i elevado a %i: %i\n", x, n, potencia);
			
	system("pause");
	return 0;
} 
