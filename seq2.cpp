#include <stdio.h>

int main ()
{
	int base, altura, area;
	
	printf("Informe o valor da base e altura do paralelogramo: ");
	scanf("%d %d", &base, &altura);
	
	area = base * altura;
	
	printf("A area do paralelogramo e: %d ", area);
	
	return 0;
}
