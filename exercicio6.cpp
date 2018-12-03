#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <conio.h>


int main() {
	
  setlocale(LC_ALL, "PORTUGUESE");
  int n, i, soma; 
  
  printf("\t\t\n * Exercicio 06 - Soma dos 'n' primeiros números inteiros positivos * \n"); 
       
  printf("\n Digite o valor de 'n': ");
  scanf("%i", &n);
  soma = 0;
  i = 1; 
  
  while (i <= n) 
  {
    soma = soma + i;
    i = i + 1;
  }
  printf(" A soma dos %i primeiros inteiros positivos é: %i\n", n, soma);
    
	   	  	   		   
   system("pause");
      
  return 0;
}
