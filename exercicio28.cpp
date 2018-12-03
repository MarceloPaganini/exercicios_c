#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <iostream>


int main()
{
	float salario, fixo, salario_final, calc_comissao, comissao, v, vf, vv;
	int q; 
	
	setlocale(LC_ALL, "PORTUGUESE");
	printf("\t\t\n  * Exercicio 28 - Revendedora Pica-Pau *\n\n");
	
	printf(" Informe a quantidade de carros vendidos: ");
	scanf(" %i", &q);
	printf(" Informe o valor do veiculo: ");
	scanf("%f", &v);	
	salario = 1908;
	vf = q * 50; 
	vv = q * v; 
	calc_comissao = vv * 0.005;
	fixo = vf;
	salario_final = salario + calc_comissao + fixo;
	
	printf(" Salario normal: R$1908\n");	
	printf(" Fixo a receber: R$%.2f\n", vf);
	printf(" Valor da Comissão: R$%.2f\n", calc_comissao);	
	printf(" Salario total: R$%.2f\n\n", salario_final);
		
	system("pause");
	return 0;
}
