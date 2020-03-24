#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n);

int main(int argc, char **argv)
{
	int f, n;
	char sNumero[100];
	n = argc > 1 ? atoi(argv[1]) : 0;
	f = fibonacci(n);
	sprintf(sNumero, "el %d numero de Fibonacci es %d", n, f);
	puts(sNumero);
	return 0;
}
