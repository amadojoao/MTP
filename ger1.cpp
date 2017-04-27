#include <stdio.h>

int main ()
{
	int i, x;
	int div = 0;
	
	printf("Digite um numero inteiro e positivo: ");
    scanf("%d", &x);
    
    for (i = 1; i <= x; i++) {
    	if (x % i == 0) { 
     		div++;
    	}
  	}
    
  if (div == 2)
    printf("O numero %d e primo!", x);
  else
    printf("O numero %d nao e primo!", x);
	
	return 0;	
}
