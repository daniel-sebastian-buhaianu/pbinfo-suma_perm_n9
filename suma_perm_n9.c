#include <stdio.h>

unsigned factorial(unsigned short n);

int main()
{
	unsigned n, nr = 0;
	unsigned short nrcif = 0, sumacif = 0;
	
	scanf("%u", &n);

	while (n > 0) {
	 	nr = nr * 10 + 1;
	 	
	 	nrcif++;

	 	sumacif += n % 10;

		n /= 10;
	}

	printf("%u", nr * factorial(nrcif - 1) * sumacif);

	return 0;
}

unsigned factorial(unsigned short n) {
	if (n == 0) return 1;

	if (n == 1) return 1;

	return n * factorial(n - 1);
}

// scor: 60/100
