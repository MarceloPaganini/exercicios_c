#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <iostream>

int main()
{
	int a, b, c, triangulo, sim, nao;

setlocale(LC_ALL, "PORTUGUESE");
	printf("\t\t\n  * Exercicio 29 - Tri�ngulos *\n\n");

	printf(" Digite a Primeira Medida: ");
	scanf("%i", &a);
	printf(" Digite a Segunda Medida:  ");
	scanf("%i", &b);
	printf(" Digite a Terceira Medida: ");
	scanf("%i", &c);
	
	if(a+b>c && a+c>b && c+b>a )
	{
	printf(" Os valores Formam um Tri�ngulo\n");
	triangulo = sim;
	}
	else
	{	
	printf(" As medidas N�o Formam um Tri�ngulo\n");
	triangulo = nao;
	}
	while(triangulo==sim)
	{
	 if (a==b && a==c && b==c)
	 {
	 printf(" Formam um Tri�ngulo Equil�tero\n"); // 3 lados iguais
	 triangulo = nao;
	 }		
	 else if (a==b  || a==c )
	 {
	 printf(" Formam um Tri�ngulo Is�cele\n"); // 2 lados iguais
	 triangulo = nao;	
	 }	
	 else if (a!=b && a!=c && b!=c)
	 {
	 printf(" Formam um Tri�ngulo Escaleno\n"); // 3 lados diferentes
	 triangulo = nao;	
	 }
	}
	
	
system("pause");
	return 0;
}
