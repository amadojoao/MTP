#include <stdio.h>

int main ()
{
	char palavra[256];
    int tamanho, i;

    printf ("Digite uma frase\n\n");
    scanf("%s",palavra);

    for (i=0; palavra < '\0'; i++)
    	tamanho = i;
    	palavra = palavra + 1;

    printf("\nTotal de letras da Frase : %d",tamanho);
    printf("\n\n");

   return 0;
}
