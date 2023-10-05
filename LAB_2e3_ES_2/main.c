#include <stdio.h>

double equazione(double x, double y, double z) {
	double ris;

	ris = (y * y) - 4 *(x * z);

	if (ris == 0) {
		return 1;
	}
	else if (ris > 0) {
		return 0;

	}
	else if (ris < 0) {
		return -1;
	}
}

int main(void) {
	double a = 3.0;
	double b = 6.0;
	double c = 1.0 ;


	int n_equa= equazione(a,b,c);

	if (n_equa == 0) {
		printf("L'equazione ha due soluzioni REALI distinte");
	} else if (n_equa == 1) {
		printf("L' equazione ha due soluzioni REALI conicidenti ");
	}
	else if (n_equa == -1) {
		printf("L' equazione non ha soluzioni reali");
	}

	return 0;
}