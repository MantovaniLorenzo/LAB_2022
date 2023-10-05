#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


float media_e_max(a) {

	float media_tmp = 0;
	float media = 0;
	int i = -1;
	int max = a;
	int pos = 0;
	int pos_max = 0;

	while (a) {
		printf("Inserisci un numero diverso da 0, se inserisci 0 il programma termina: ");
		scanf("%d", &a);

		if (a == 0) {
			printf("Il programma e' terminato. \n");

		} else media_tmp = media_tmp + a;
		i++;

		if (a >= max) {
			max = a;
			pos++;
			pos_max = pos;

		}
		else pos++;

	}
	media = media_tmp / i;
	printf("La media e': %f \n ", media);
	printf("Il valor max e' : %d e la sua posizione e' %d \n", max, pos_max);

	return 0;

}




int main(void) {

	int x = 1;

	media_e_max(x);

	return 0;
}
