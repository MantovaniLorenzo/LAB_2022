#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int associa_mese(x) {

	switch (x) {
	case 1:
		printf("Gennaio \n");
		break;
	case 2:
		printf("Febbraio \n");
		break;
	case 3:
		printf("Marzo \n");
		break;
	case 4:
		printf("Aprile \n");
		break;
	case 5:
		printf("Maggio \n");
		break;
	case 6:
		printf("Giugno \n");
		break;
	case 7:
		printf("Luglio \n");
		break;
	case 8:
		printf("Agosto \n");
		break;
	case 9:
		printf("Settembre \n");
		break;
	case 10:
		printf("Ottobre \n");
		break;
	case 11:
		printf("Novembre \n");
		break;
	case 12:
		printf("Dicembre \n");
		break;
	default:
		printf("Il valore inserito non corrisponde a nessun mese. \n");
		break;
	}
	return 0;
}

int main(void) {

	int n;

	printf("Inserisci un valore per vedere il mese corrispondente: ");
	scanf("%d", &n);

	associa_mese(n);
	return 0;
}