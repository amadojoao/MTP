#include <stdio.h>

int main ()
{
	int i;
	
	printf("Informe um numero: ");
	scanf("%d", &i);
	
	if(i%2==0)
	printf("Par");
	else
	printf("Impar");
	
	if(i%3==0)
	printf("; Multiplo de 3");
	
	if(i%5==0)
	printf("; Multiplo de 5");
	
	if(i%7==0)
	printf("; Multiplo de 7");
	
	return 0;
}
