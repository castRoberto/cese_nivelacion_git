#include <stdio.h>

unsigned char suma (unsigned char a, unsigned char b);

unsigned char multiplicacion (unsigned char a, unsigned char b);

int main (int argc, char* argv[]) {

	unsigned char a, b, resultado;
	
	a = b = 3;
	
	resultado = suma (a, b);
	
	printf ("-> El resultado de a mas b es: %d\n", resultado);
	
	resultado = multiplicacion (a, b);
	
	printf ("-> El resultado de a por b es: %d\n", resultado);

	return 0;
}
