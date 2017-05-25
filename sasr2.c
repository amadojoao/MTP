#include <stdio.h>

int par(int i, int n){
	for(i=1; i < n; i++)
		if(n % 2 == 0)
			printf("%d",n);
}
int impar(int i, int n){
	for(i=1; i < n; i++)
		if(n % 2 != 0)
			printf("%d",n); 
}

int main ()
{
	int n, i;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	printf("%d %d", par, impar);
		
	return 0;
}
