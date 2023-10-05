#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check_condizioni(a) {
	

	 while (a) {
		printf("Inserisci un valore:");
		scanf("%d", &a);

		int ris = a % 3;

		if (a == 0) {
			printf("Il programma e' terminato\n");

		} else if (ris == 0) {
			printf("Il valore letto soddisfa la condizione 1\n");
		} else if (a < 0 && a % 3 != 0 && a % 2 != 0) {
			printf("Il valore letto soddisfa la condizione 2\n");

		} else printf("il valore letto soddisfa la condzione 3\n");
		
	}
	return 0;
}

int main(void) {

	int x=1;

	check_condizioni(x);
	return 0;
}