#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <iostream>

int main()
{
	int quant, cod;	 
	float preco1, preco2, preco3, preco4, preco5, total;
	
	setlocale(LC_ALL, "PORTUGUESE");
	printf("\t\t\n  * Exercicio 40 - C�lculo Total *\n\n");
	printf("\t\t\t**PRODUTOS**\n");
	printf(" Digite -1 para terminar\n");
	
	do
	{		
	printf(" \n *C�digo 1001 - *C�digo 1234 - *C�digo 6548 - *C�digo 987 - *C�digo 7623\n\n");
	
	printf(" Digite o C�digo do produto: ");
	scanf("%i",&cod);
	printf(" Digite a quantidade: ");
	scanf("%i", &quant);
		
		switch(cod)
		{
			case 1001:
			preco1 = quant * 5.32;		
			break;		
			case 1234:
			preco2 = quant * 6.45;		
			break;
			case 6548:
			preco3 = quant * 2.37;
			break;
			case 987:
			preco4 = quant * 5.32;
			break;
			case 7623:
			preco5 = quant * 6.45;
			break;
			
		}
					
	}while( cod!= -1);
	total = preco1+preco2+preco3+preco4+preco5;
	printf(" Total a pagar: %.2f\n\n", total);	
	
	system("pause");
	return 0;
}
