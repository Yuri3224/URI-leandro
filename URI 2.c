#include <stdio.h>


int main(){

	float consumo, tempo, velocidade, distancia;
	double litros;
	consumo = 12;
	
	printf("Informe o tempo gasto na viagem(em horas): ");
	scanf("%f", &tempo);
	printf("\nInforme a velocidade media (em km/h): ");
	scanf("%f", &velocidade);
	
	distancia = tempo*velocidade;
	
	litros = distancia/consumo;
	
	printf("\n Seriam necessarios %.3lf litros para realizar essa viagem", litros);

}
