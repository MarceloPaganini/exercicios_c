#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <iostream>

typedef struct{
        char  nome[100];
        char  sexo; 
        float peso;
        float altura;
        long long cpf;
} Pessoa;

#define QUANTIDADE_DE_PESSOAS 3
		
int main(){
	setlocale(LC_ALL, "PORTUGUESE");
		printf("\t\t\n  * Exercicio 39 - Cadastro de Nome, Altura, Peso, CPF e Sexo *\n\n");
        Pessoa pessoas[QUANTIDADE_DE_PESSOAS];
	
        printf(" Campos: Nome, Altura, Peso, CPF, Sexo\n");
        for(int i=0; (i < QUANTIDADE_DE_PESSOAS); i++){
                printf("\n Informe os dados da pessoa(%i): ",i+1);
                scanf("%s %f %f %Lu %c",pessoas[i].nome, &pessoas[i].altura,
                        &pessoas[i].peso, &pessoas[i].cpf, &pessoas[i].sexo);
        }

        printf("\nInforme o CPF da pessoa: ");
        long long cpf_localizador;
        scanf("%Lu",&cpf_localizador);

        printf("\nSexo\tNome\tIMC");
        for(int i=0; (i < QUANTIDADE_DE_PESSOAS); i++){ 
                if (cpf_localizador == pessoas[i].cpf){ 
                        float imc = pessoas[i].peso / (pessoas[i].altura *
                                pessoas[i].altura);
                        printf("\n%c\t%s\t%1.2f\n",pessoas[i].sexo,
                                pessoas[i].nome, imc);
                        break;
                }
        }

        system("pause");
        return 0;
}
