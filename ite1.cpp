#include <stdio.h>

int main ()
{
	int n, fat;
	
	printf("Informe um numero inteiro: ");
	scanf("%d", &n);
	
	for(fat = 1; n > 1; n = n - 1)
	fat = fat * n;
 
	printf("\nFatorial calculado: %d", fat);
	
	return 0;	
}
