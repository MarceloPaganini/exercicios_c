#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <iostream>


int main()
{
	
 float tempo, distancia, litros_usados; 
 int veloc;
 
setlocale(LC_ALL, "PORTUGUESE");
	printf("\t\t\n * Exercicio 23 - Quantidade de litros de combustível * \n\n");
	
	printf("  Tempo gasto na viagem: ");
	scanf("%f", &tempo);
	printf("  Velocidade média da viagem: ");
	scanf("%i", &veloc);
	
	distancia = tempo * veloc;
	litros_usados = distancia/12;
	
	printf(" \n  Velocidade Média: %.2ikm/h\n", veloc);
    printf("  Tempo Gasto: %.2fHs\n", tempo);
    printf("  Distancia Percorrida: %.2fkm\n", distancia);
    printf("  Total de Combustivel Utilizado: %.2fL\n\n", litros_usados);

	
	
	system("pause");
	return 0;
}
