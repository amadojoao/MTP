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
		frase[i] = isalpha(frase[i]);
	
	printf("O n�mero de letras da frase �: \n%d", frase);
	
	return  EXIT_SUCCESS;
}
