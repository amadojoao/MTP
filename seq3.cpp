#include <stdio.h>

int main ()
{
	int A, B, C, D, E, media;
	
	printf("Informe as notas A,B,C,D,E do aluno: ");
	scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);
	
	media = ( (A+B+C)*2 + D * 3 + E * 5) / 5;
	
	printf("A media do aluno e: %d ", media);
	
	return 0;	
}
