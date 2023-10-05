#include <stdio.h>

int massimo(double x, double y, double z) {
	if (x > y && x > z) {
		return 1;
	}
	else if (y > x && y > z) {
		return 2;
	}
	else if (z > x && z > y) {
		return 3;
	}
}
	

int main(void) {
	double a, b, c;

	a = 3;
	b = 1;
	c = 5;

	int max = massimo(a, b, c);
	printf("il massimo e' il %d' valore inserito", max);

	return 0;
}