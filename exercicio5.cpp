#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <conio.h>

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	float veiculo, distribuidor, impostos, preco_final;
	
	printf("\t\t\n * Exercicio 05 - Custo ao consumidor * \n");
	printf("\n  Informe o valor do veiculo: ");
	scanf("%f", &veiculo);
	distribuidor = veiculo * 0.28;
	impostos = veiculo * 0.45;
	preco_final = veiculo + distribuidor + impostos;
	
	printf("  O valor do Imposto é: %.2f\n", impostos);
	printf("  A porcentagem do Distribuidor é: %.2f\n", distribuidor);
	printf("  O custo final do Veiculo é: %.2f\n", preco_final); 
	
	
	
	system("pause");
	return 0;
}
