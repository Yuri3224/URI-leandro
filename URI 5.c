#include  <stdio.h> 

int main(){
	int m,n,v[15],i;
	
	printf("digite dois numeros para somar e ""esquecer os 0"":\n");
	while(scanf("%d %d",&m,&n) && (m!=0 || n!=0))
	{
		int soma = m + n;

		for(i = 0 ; i < 11 ; i++)
		{
			v[i] = soma %10;
			soma /= 10;
		}

		for(i = 10 ; i >= 0 ; i--){
			if(v[i] != 0){
				printf("\n\aO resultado sem 0 algum fica: %d", v[i]);
			}
		}
		printf("\n" );
	}
}


