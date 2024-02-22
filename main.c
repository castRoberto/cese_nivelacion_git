#include <stdio.h>

int suma (int a, int b);

int multiplicacion (int a, int b);

int main (int argc, char* argv[]) {

	int a, b, resultado;
	
	a = b = 3;
	
	resultado = suma (a, b);
	
	printf ("-> El resultado de a mas b es: %d\n", resultado);
	
	resultado = multiplicacion (a, b);
	
	printf ("-> El resultado de a por b es: %d\n", resultado);

	return 0;
}
