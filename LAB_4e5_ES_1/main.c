#include <stdio.h>

int formula_eulero(x, y) { // formula generica nel caso y non sia direttamente l'mcd
	int tmp = x % y;
	do {
		x = y;
		y = tmp;
		tmp = x % y;

	} while (tmp);

	printf("L'mcd e': %d \n", y);
}

int formula_eulero_check(x, y) {  // controllo iniziale se y è già l'mcd

	int tmp = x % y;
	if (tmp == 0) {
		printf("L'mcd e': %d\n", y);
	}
	else formula_eulero(x, y);
}

int main(void) {

 int a, b, mcd;
 a = 5, b = 0;

if (a <= 0 || b <= 0) {
	printf("I valori non sono validi");

}
else mcd = formula_eulero_check(a, b);


	return 0;
}