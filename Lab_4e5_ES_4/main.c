#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int succ_decresc(x, y, t, c) {

	while (x != y ) {

		printf("\n Inserisci un valore: ");
		scanf("%d", &t);

		if (t <= c) {
			c = t;
			y++;
		} else break;
	}
	printf("La successione e' terminata ed e' stata decrescente e sono stati acquisiti %d numeri \n", y);

}


int succ_cresc(x, y , t, c) {

	while (x != y) {

		printf("\n Inserisci un valore: ");
		scanf("%d", &t);

		if (t >= c) {
			c = t;
			y++;
		} else break;
	}
	 printf("La successione e' terminata ed e' stata crescente e sono stati acquisiti %d numeri \n", y);

}



int main(void) {

	int n = 5;
	int i = 2;

	int tmp = 0;
	int confr = 0;

	printf("\n Inserisci un valore: ");
	scanf("%d", &tmp);

	confr = tmp;

	printf("\n Inserisci un valore: ");
	scanf("%d", &tmp);


	if (confr <= tmp) {
		succ_cresc(n, i, tmp, confr);
	}
	else {
		confr = tmp;
		succ_decresc(n, i, tmp, confr);
	}
	

	return 0;

}