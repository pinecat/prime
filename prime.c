#include <stdio.h>
#include <stdlib.h>

int isprime(long n);

int main(int argc, char **argv)
{
	long min;
	long max;

	if (argc < 2) {
		printf("Usage: %s [min] max\n", argv[0]);
		return 1;
	} else if (argc == 2) {
		min = 0;
		max = atol(argv[1]);
	} else if (argc == 3) {
		min = atol(argv[1]);
		max = atol(argv[2]);
	} else {
		printf("Usage: %s [min] max\n", argv[0]);
		return 1;
	}	

	long i;
	for (i = min; i <= max; i++) {
		if (isprime(i)) printf("%d ", i);
	}
	printf("\n");

	return 0; // clean exit
}

int isprime(long n)
{
	if (n <= 1) return 0;
	long i;
	for (i = 2; i <= (n/2); i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}
