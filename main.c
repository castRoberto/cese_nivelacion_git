#include <stdio.h>

uint8_t suma (uint8_t a, uint8_t b);

uint8_t multiplicacion (uint8_t a, uint8_t b);

int main (int argc, char* argv[]) {

	uint8_t a, b, resultado;
	
	a = b = 3;
	
	resultado = suma (a, b);
	
	printf ("-> El resultado de a mas b es: %d\n", resultado);
	
	resultado = multiplicacion (a, b);
	
	printf ("-> El resultado de a por b es: %d\n", resultado);

	return 0;
}
