#include <stdio.h>
int main(void) {
	float peso, altura, imc;
	
	printf("Ingrese su peso en kg: ");
	scanf("%f", &peso);
	
	printf("Ingrese su altura en metros: ");
	scanf("%f", &altura);
	
	imc = peso / (altura * altura);
	
	printf("Su índice de masa corporal es: %.2f\n", imc);
	
	if (imc < 18.5) {
		printf("Su índice de masa corporal es bajo peso.\n");
	} else if (imc >= 18.5 && imc <= 24.9) {
		printf("Su índice de masa corporal es normal.\n");
	} else if (imc >= 25.0 && imc <= 29.9) {
		printf("Su índice de masa corporal es sobrepeso.\n");
	} else {
		printf("Su índice de masa corporal indica obesidad.\n");
	}
	
	return 0;
 }
