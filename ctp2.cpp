#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define NCHAR 256

int main ()
{
	int i;
	char frase[NCHAR];
	
	printf("Digite uma frase: ");
	fgets(frase,NCHAR,stdin);
	
	for(i = 0; frase[i]; i++)
		frase[i] = toupper(frase[i]);
	
	printf("A frase em maiúsculas: \n%s", frase);
	
	return  EXIT_SUCCESS;
}
