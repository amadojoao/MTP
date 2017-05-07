#include <stdio.h>

int main ()
{
	int vetor [10], i, soma=0, produto=1;
	
	for(i=0; i < 10; i++){
		printf("Informe o %d numero: ", i+1);
		scanf("%d", &vetor[i]);
	}
	
	for(i=0; i < 10; i++)
		soma = soma + vetor[i];
	
	for(i=0; i < 10; i++)
		produto = produto * vetor[i];
	
	printf("%d; %d", soma, produto);	
	
	return 0;
}
