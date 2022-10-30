#include <stdio.h>

int main()
{
	int x;
	printf("How many numbers?");
	scanf("%i", &x);
	
	for(int i=0; i<=x; i++)
	{
		for(int k=i; k>0; k--)
		{
			printf(" %i", k);
		}
		printf("\n");
	}
	return 0;
}
