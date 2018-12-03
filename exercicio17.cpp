#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <iostream>


int main() {
	
	setlocale(LC_ALL, "PORTUGUESE");
	printf("\t\t\n * Exercicio 17 - Figura na tela* \n\n");
printf("  %9c\n",1 );
printf("  %8c%1c%1c\n",1, 88,1);
printf("  %7c%1c%1c%1c%1c\n",1,88,88,88,1);
printf("  %6c%1c%1c%1c%1c%1c%1c\n",1,88,88,88,88,88,1);
printf("  %5c%1c%1c%1c%1c%1c%1c%1c%1c\n",1,88,88,88,88,88,88,88,1);
printf("  %4c%1c%1c%1c%1c%1c%1c%1c%1c%1c%1c\n",1,88,88,88,88,88,88,88,88,88,1);
printf("  %3c%1c%1c%1c%1c%1c%1c%1c%1c%1c%1c%1c%1c\n",1,88,88,88,88,88,88,88,88,88,88,88,1);
printf("  %2c%1c%1c%1c%1c%1c%1c%1c%1c%1c%1c%1c%1c%1c%1c\n",1,88,88,88,88,88,88,88,88,88,88,88,88,88,1);
printf("  %1c%1c%1c%1c%1c%1c%1c%1c%1c%1c%1c%1c%1c%1c%1c%1c%1c\n",1,88,88,88,88,88,88,88,88,88,88,88,88,88,88,88,1);
printf("  %8c%1c\n",88,88);
printf("  %8c%1c\n",88,88);
printf("  %8c%1c\n",88,88);

system ("pause");

return 0;
} 
