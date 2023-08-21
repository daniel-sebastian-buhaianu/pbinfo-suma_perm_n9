#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_CIFRE 9

int main()
{
	char s[MAX_CIFRE + 2], t[MAX_CIFRE + 1], copie_t[MAX_CIFRE + 1], s_e_negativ, ultima_cifra, aux;
	int suma = 0;
	unsigned short i, lungime, pozitie;

	scanf("%s", &s);
	
	lungime = strlen(s);

	s_e_negativ = s[0] == '-' ? 1 : 0;
	
	if (s_e_negativ) {
		for (i = 1; i < lungime; i++) t[i - 1] = s[i];

		t[lungime - 1] = '\0';
	}
	else strcpy(t, s);
	
	lungime = strlen(t);

	if (lungime == 1) printf("%s", s);
	else {
		strcpy(copie_t, t);
		
		suma = 0;

		do {
			ultima_cifra = t[lungime - 1];
			
			pozitie = lungime - 1;
			
			while (pozitie > 0) {
				suma += atoi(t);

				aux = t[pozitie];
				t[pozitie] = t[pozitie - 1];
				t[pozitie - 1] = aux;
				
				pozitie--;
			}
		} while (strcmp(copie_t, t) != 0);
		
		suma = s_e_negativ ? suma * (-1) : suma;

		printf("%d", suma);
	}
	return 0;
}
// scor: 60/100
