#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <iostream>

void menu_olhos() 
{
    printf(" 1 - Azuis, ");
    printf(" 2 - Verdes, ");
    printf(" 3 - Castanhos, ");
}

void menu_cabelos() 
{
    printf(" 1 - Louro, ");
    printf(" 2 - Castanhos, ");
    printf(" 3 - Pretos, ");
}

int main(int argc, char *argv[])
{
	int idade, mais_velho, cor_olhos, cor_cabelos, total_lido = 0, mulheres = 0;
    char sexo;
      
	setlocale(LC_ALL, "PORTUGUESE");
	printf("\t\t\n  * Exercicio 35 - Pesquiza População *\n\n");
	printf(" Para encerrar digite -1\n\n");
	while(1) 
	{
        printf(" Idade: ");
        scanf("%d",&idade);
        if (idade == -1) break;

        printf(" Sexo (M/F): ");
        scanf("%*c%c",&sexo); 
        do {
            printf(" Cor dos olhos:\n");
            menu_olhos();
            scanf("%d", &cor_olhos);
            if (cor_olhos < 1 || cor_olhos > 3)
                printf(" Opção inválida!\n");
        } while (cor_olhos < 1 || cor_olhos > 3);

        do {
            printf(" Cor dos cabelos:\n");
            menu_cabelos();
            scanf("%d", &cor_cabelos);
            if (cor_cabelos < 1 || cor_cabelos > 3)
                printf(" Opção inválida!\n");
        } while (cor_cabelos < 1 || cor_cabelos > 3);

        if (!total_lido)
            mais_velho = idade;
        else {
            if (idade > mais_velho)
                mais_velho = idade;
        }

        if (sexo == 'F' || sexo == 'f' && idade >= 18 && idade <= 35 && cor_olhos == 2 && cor_cabelos == 1)
            mulheres++;

        total_lido++;
    }

    	if (total_lido)
		{
        printf(" Idade do mais velho: %d\n", mais_velho);
        printf(" Porcentagem de mulheres entre 18 e 35 anos (inclusive), loiras e de olhos verdes : %.2f\%\n", 100.00*mulheres/total_lido);
    	}


system("pause");
	return 0;
}
