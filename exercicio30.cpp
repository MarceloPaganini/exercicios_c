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
	printf("\t\t\n  * Exercicio 30 - numero de 2 a 20  *\n\n");
	
	printf(" Digite um valor de 2 a 20: ");	 
	scanf("%i", &x);
	  if(x>=2 && x<=20) 
	{	
		
	    for (a=1; a<=x; a++) 	    	    
		{	
		    for (b=a; b<=x; b++)
	        printf("%i",b);	        
	        printf("\n");
	    }
	    	    	      	        
	}
	 else
	 { 
	 	printf(" Numero inválido! ");
	 }
	    printf("\n");




system("pause");
	return 0;
}
