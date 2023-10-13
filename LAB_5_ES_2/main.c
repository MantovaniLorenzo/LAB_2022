#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float function(x) {

	float media = x+1;
	int media_tmp = 0;
	int a;

	for (int i = 1; i < 10 && media > x ; i++) {

		printf("Inserisci un valore: ");
		scanf("%d", &a);

		media_tmp = media_tmp + a;
		media =(float) media_tmp / i;

	}
	printf("La media e' %f", media);
}

int main(void) {

	int n;

	printf("Inserisci un valore maggiore di 0: ");
	scanf("%d", &n);

	if (n > 0) {
		function(n);
	}
	else printf("Il valore inserito non e' corretto.");

	return 0;
}