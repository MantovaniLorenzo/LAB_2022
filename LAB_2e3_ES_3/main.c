#include <stdio.h>


int triangolo(int x, int y, int z) {

	int check= 3; 

	if (x < (y + z) && x > (y - z) && y < (x + z) && y >(x - z) && z < (x + y) && z >(x - y)) {

		if (x == y && y == z && z == x) {
			check = 0;
			printf("Il triangolo e' un triangolo equilatero.");
			return check;
		}
		else if (x == y || y == z || z == x) {
			check = 2;
			printf("Il triangolo e' un triangolo isoscele.");
			return check;
		}
		else if (x != y && y != z && x != z) {
			check = 1;
			printf("Il triangolo e' un triangolo scaleno.");
			return check;
		}
	}
	else {
		check = -1;
		printf("Non e' un triangolo :(");
		return check;

	}
	return check;
}


int main(void) {
	int a, b, c;

    a = 3, b= 3, c= 3;

	int ris = triangolo(a, b, c);
	
	return 0;

}