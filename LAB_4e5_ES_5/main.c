#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


float ordina(int x) {

	float max1 = 0;
	float max2 = 0;
	float max3 = 0;
	float tmp = 0;
	float confr = 0;

	printf("Inserisci un valore in float: ");
	scanf("%f", &tmp);

	confr = tmp;

	x--;

	printf("Inserisci un valore in float: ");
	scanf("%f", &tmp);

	if (confr > tmp) {
		max1 = confr;
		max2 = tmp;
		x--;
	}
	else {
		max2 = confr;
		max1 = tmp;
		x--;
	}

	confr = tmp;

	while (x != 0) {

		printf("Inserisci un valore in float: ");
		scanf("%f", &tmp);

		if (max1 > tmp) {
			if (max2 > tmp) {
				if (max3 > tmp) {
					x--;
				}
				else {
					max3 = tmp; x--;
				}
			}
			else {
				max3 = max2; max2 = tmp; x--;
			}
		}
		else {
			max3 = max2; max2 = max1; max1 = tmp; x--;
		}
	}
	printf("Il valore massimo acquisito e' il numero %f \n", max1);
	printf("Il secondo valore massimo acquisito e' il numero %f \n", max2);
	printf("Il terzo valore massimo acquisito e' il numero %f \n", max3);

	
}

int main(void) {

	int n;
	printf("Inserisci un numero massimo di parametri da considerare: ");
	scanf("%d", &n);

	ordina(n);
	return 0;
}