#include  <stdio.h> 

int main ()
{

	int numero1, numero2, i, j, casos;
	int aux, aux2;

	scanf("%d", &casos);

	while (casos--)
	
	{

		scanf("%d %d", &numero1, &numero2);

		for (i = numero1; i <= numero2; i++)
			printf("%d",i);


		for (i = numero2; i >= numero1; i--)
		{
			aux = i;
			while (aux)
			{
				aux2 = aux%10;
				printf("%d",aux2);
				aux = aux/10;
			}

		}	


		printf("\n" );
	}
}

