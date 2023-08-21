#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_CIFRE 9

int main()
{
	char s[MAX_CIFRE + 1], copie_s[MAX_CIFRE + 1], ultima_cifra, aux;
	unsigned short lungime, pozitie;
	unsigned suma = 0;

	scanf("%s", &s);
	
	lungime = strlen(s);
	
	if (lungime == 1) printf("%s", s);
	else {
		strcpy(copie_s, s);
		do {
			ultima_cifra = s[lungime - 1];
			pozitie = lungime - 1;
			while (pozitie > 0) {
				suma += atoi(s);

				aux = s[pozitie];
				s[pozitie] = s[pozitie - 1];
				s[pozitie - 1] = aux;
				
				pozitie--;
			}
		} while (strcmp(copie_s, s) != 0);
	}

	printf("%u", suma);	
		
	return 0;
}

// scor solutie: 40/100
