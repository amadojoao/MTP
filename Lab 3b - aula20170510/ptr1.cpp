#include <stdio.h>
#include <stdlib.h>

int main ()
{
	unsigned int x = 0xFACA8421;
	unsigned char *p;
	int i=0;
	
	printf("Endereco: %p | Conteudo: %d", &x, x);	
	
	p = (unsigned char *) &x;
	
	for(i = 0; i < sizeof(x); i++)
		printf("Em %p | Contem %u ou %X\n", p+1, p[i], p[i]);
	
	return 0;
}
