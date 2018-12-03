#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <iostream>


void vetor(char* string, int* posicoes, int* numDeLetras, char letra) 
{

    for(int i = 0; i < 50; i++) 
	{
        if(string[i] == letra) 
		{
            posicoes[*numDeLetras] = i;
            (*numDeLetras)++;
        }

        if(string[i] == '\n') 
		{
            break;
        }
    }
}

int main() 
{
	
	setlocale(LC_ALL, "PORTUGUESE");
	printf("\t\t\n * Exercicio 16 - Posição do caracter * \n\n");

    char frase[50], letra;
    int posicoes[50], qnt = 0;

    printf(" Digite uma frase: ");
    for(int i = 0; i < 50; i++) 
	{
        scanf("%c", &frase[i]);

        if(frase[i] == '\n') 
		{
            break;
        }
    }

    printf(" Digite uma letra: ");
    scanf("%c", &letra);

    vetor(frase, posicoes, &qnt, letra);

    printf(" Total de letras encontradas: %i\n", qnt);
    printf(" Posicao de cada letra: ");
    for(int i = 0 ; i < qnt; i++) {
        printf("%d ", posicoes[i]);
    }
    printf("\n");

	system("pause");
	return 0;
} 
