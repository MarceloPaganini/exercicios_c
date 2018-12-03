#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <iostream>


void troca(int *A,int *B)
{
 *A^=*B;
 *B^=*A;
 *A^=*B;
}

int main()
{
 int A,B;
 
 setlocale(LC_ALL, "PORTUGUESE"); 
 printf("\t\t\n * Exercicio 24 - Troca de Valores * \n\n"); 
 

 
 printf(" Digite o valor de A: ");
 scanf("%i",&A);
 printf(" Digite o valor de B: ");
 scanf("%i",&B);
 printf("\n A = %.2i   B = %.2i \n",A,B);
 troca(&A,&B);
 printf("\n A = %.2i   B = %.2i \n\n",A,B);
 
 system("pause");
 return 0;
}

