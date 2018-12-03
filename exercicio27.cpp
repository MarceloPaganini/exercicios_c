#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <iostream>


int main()
{
	int v,n1=0, n10=0, n100=0, vr, troco;
	
	setlocale(LC_ALL, "PORTUGUESE");
	printf("\t\t\n  * Exercicio 27 - Notas R$1, R$10, R$100 *\n\n");
		
	printf("  Digite o valor da compra: R$");
	scanf("%i",&v);
	printf("  Digite o valor recebido: R$");
	scanf("%i", &vr);
	troco = vr - v;
	printf("  O troco é: R$%.2i", troco);
	
	while(troco>0) 
	{
		if (troco>=100) { troco=troco-100; n100=n100+1; }		
		else if (troco>=10) { troco=troco-10; n10=n10+1; }		
		else { troco=troco-1; n1=n1+1; }
	}
	 printf(" \n  %i Nota(s) de R$100\n  %i Nota(s) de R$10\n  %i Nota(s) de R$1\n\n",n100,n10,n1);
		
		
	system("pause");
	return 0;
}
