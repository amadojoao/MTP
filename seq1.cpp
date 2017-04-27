#include <stdio.h>

int main ()
{
	int i, area;
	
	printf("Informe o valor do lado do quadrado: ");
	scanf("%d", &i);
	
	area = i * i;
	
	printf("A area do quadrado e: %d ", area);
	
	return 0;
}
