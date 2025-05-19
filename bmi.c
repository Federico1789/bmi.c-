#include <stdio.h>
int main(void) {
	float peso, altura, imc;
	
	printf("Ingrese su peso en kg: ");
	scanf("%f", &peso);
	
	printf("Ingrese su altura en metros: ");
	scanf("%f", &altura);
	
	imc = peso / (altura * altura);
	
	printf("Su índice de masa corporal es: %.2f\n", imc);
	
	printf("Índice        | Condición\n");
	printf("-----------------------------\n");
	printf("<18.5         | Bajo peso\n");
	printf("18.5 a 24.9   | Normal\n");
	printf("25.0 a 29.9   | Sobrepeso\n");
	printf(">=30          | Obesidad\n");
	
	return 0;
 }
