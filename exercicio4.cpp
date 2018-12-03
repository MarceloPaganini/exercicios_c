#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <conio.h>



int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	printf("\t\t\n * Exercicio 04 - Média ponderada * \n");
	float nota1, nota2, nota3, media;

	printf("\n  Informe a primeira nota: ");
	scanf("%f", &nota1);
	printf("\n  Informe a segunda nota: ");
	scanf("%f", &nota2);
	printf("\n  Informe a terceira nota: ");
	scanf("%f", &nota3);

	media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / 10;

	printf("\n  A media ponderada é : %.2f\n", media);

	system("pause");
	return 0;
}

