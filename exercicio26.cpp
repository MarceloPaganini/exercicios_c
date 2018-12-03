#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <iostream>

int main()
{
	int anos, meses, idadeA, idadeM, idade;
	
	setlocale(LC_ALL, "PORTUGUESE");
	printf("\t\t\n  * Exercicio 26 - Dias vividos *\n\n");
	
	printf(" Informe a sua idade em anos: ");
	scanf("%i", &anos);
	printf(" Informe os meses: ");
	scanf("%i", &meses);
	
	idadeA = anos * 365;
	idadeM = meses * 30;
	idade  = idadeA + idadeM;
	
	printf(" O total foi: %i dias\n\n", idade);
		
	
	system("pause");
	return 0;
}
