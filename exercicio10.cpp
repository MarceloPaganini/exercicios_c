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
	int quant, cod;
	 
	float preco, total;
	
	printf("\t\t\n * Exercicio 10 - Calculo Vendedor * \n\n");
		
	printf("\t\t\t**PRODUTOS**\n");
	printf(" \n *C�digo 1001 - *C�digo 1234 - *C�digo 6548 - *C�digo 987 - *C�digo 7623\n\n");
	
	printf(" Digite o C�digo do produto: ");
	scanf("%i",&cod);
	printf(" Digite a quantidade: ");
	scanf("%i", &quant);
	
	switch(cod)
	{
		case 1001:
		preco = quant * 5.32;		
		break;		
		case 1234:
		preco = quant * 6.45;		
		break;
		case 6548:
		preco = quant * 2.37;
		break;
		case 987:
		preco = quant * 5.32;
		break;
		case 7623:
		preco = quant * 6.45;
		break;
		default:
		printf(" C�digo Inv�lido");
	}
	total = preco;
	printf(" Total a pagar: %.2f\n\n", total);
	
	
	system("pause");
	return 0;	
}
