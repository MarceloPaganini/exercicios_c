#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <iostream>
int main() 
{
    int a, b, x;
    
    setlocale(LC_ALL, "PORTUGUESE");
	printf("\t\t\n * Exercicio 18 - Numero de 2 a 20 * \n\n");

    printf(" Digite um valor de 2 a 20: ");	 
	scanf("%i", &x);
	  if(x>=2 && x<=20)
	{	

    	for (a=1; a<=x; a++) 
		{
	        for (b=1; b<=a; b++)
	            printf("%i", b);
	        printf("\n");
	    }
	    for (a=a-2; a>0; a--) 
		{
	        for (b=1; b<=a; b++)
	            printf("%i", b);
	        printf("\n");
	    }
	    printf("\n");
	    }
	 else
	 { 
	 	printf(" Numero inv�lido! ");
	 }
	    printf("\n");

    
    system("pause");
    return 0;
}
