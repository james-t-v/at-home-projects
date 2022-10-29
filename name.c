#include <stdio.h>

int main()
{
	int x;
	printf("Cuantos numeros usas?");
	scanf("%i", &x);
	
	for(int i=0; x>i; i++)
	{
		for(int k=i; k>i; k--)
		{
			printf(" %i", k);
		}
		printf("\n");
	}
	return 0;
}
