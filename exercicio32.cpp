#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <iostream>

int main()
{
	float s,ms = 0 ,habi = 0 ,somasal = 0,maiorsa = 0,salcem = 0,percentual = 0; 
	int fls,tf = 0 ,mefi = 0;

	setlocale(LC_ALL, "PORTUGUESE");
	printf("\t\t\n  * Exercicio 32 - Pesquiza da Prefeitura *\n\n");
	printf(" Para encerrar digite -1 \n\n");	 
	do
	{  
	printf(" Informe o salario: R$ "); 
	scanf("%f",&s); 	  
	habi = habi + 1; 
	somasal = s + somasal; 
	ms = somasal / habi; 
	if ( maiorsa < s ) 
	{ 
	maiorsa = s;
	}  
	if (s <= 100)
	{ 
	salcem = s; 
	percentual = (salcem * 100) / habi; 
	} 	
	printf(" Informe a quantidade de filhos: "); 
	scanf("%d",&fls); 	 
	tf = fls + tf; 
	mefi = tf / habi ; 
	} 
	while ( s > -1 ); 
	 
	printf("\n\n A média dos salários é: R$ %.2f\n",ms);
	printf("\n Média do numero de filhos: %d\n",mefi); 
	printf("\n O maior salario é: R$ %.2f \n", maiorsa); 
	printf("\n Percentual de pessoas com salarios ate R$100.00: %.2f %%\n", percentual); 

	system("pause");
	return 0;
}
