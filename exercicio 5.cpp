#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(){
	char frase[51], novafrase[51];
	  printf("\n\n\                        Inversao de Frases!\n ");
  printf("\n\n\-------------------------------------------------------------------------\n\n\ ");
	
	
	printf("\n\               1.     Digite a frase desejada: ");
	scanf ("%[^\n]s", &frase);
		  printf("\n\n\ ");
	  printf("-------------------------------------------------------------------------\n\n\ ");
	
	int i, j, n;
	
	n = strlen(frase);
	
	j = n - 1;
	
	for (i=0; i<n; i++) {
		novafrase[i] = frase [j];
		j = j - 1;
		
	}
	
	novafrase[i] = '\0';
		printf("\n");

		printf("\n\               2.     Frase original:%s\n ", frase);
		printf("\n\               3.     Frase Inversa:%s\n ", novafrase);
			  printf("\n\n\ ");
			printf("-------------------------------------------------------------------------\n\n\ ");
		
	return(0);
	
}
