

int main(){

	int a, n_atual, seq, i, n;
	 
	
	a = 0;
	n_atual = 1;
	 
	printf("Digite ate que termo desejar levar a sequencia: ");
	scanf("%d", &n);
	printf("Serie de Fibonacci:\n");
	
	if (n == 0 && n < 1 ){
		return 0;
	}
	else if (n == 1){
		printf("%d\n", a);
		return 0;
	}
	printf("%d\n", a);
	printf ("%d\n", n_atual);
	  
	for(i = 2; i < n; i++)
	{
	    seq = a + n_atual;
	    a = n_atual;
	    n_atual = seq;
	    printf("%d\n", seq);
 	}
}
/*
#include <stdio.h>

int main ()
{

int n, i, a = 0, b = 1, c = 0;
scanf("%d", &n);

if (n == 0 || n == 1)
{

  printf("%d", a);
  return 0;

}

printf("%d ", a);
for (i = 2; i < n; i++)
{

    a = b;
    b = c;
    c = a + b;
    printf("%d ", c);

}

printf("%d\n", c+b);

return 0;

}*/
