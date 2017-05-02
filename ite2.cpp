#include <stdio.h>

int main ()
{
    int b, p, pot = 0, i=0;
 
    printf ("Entre com o valor da base b: ");
    scanf ("%d",&b);
    printf ("Entre com o valor do expoente p: ");
    scanf ("%d",&p);
 
 	pot = b;
 	
    for (i = 1; i < p ; i++)
    {
    pot = pot * b;
    }
    printf ("\nO valor de b se elevado a p sera de: %d", pot);

	return 0;
}
