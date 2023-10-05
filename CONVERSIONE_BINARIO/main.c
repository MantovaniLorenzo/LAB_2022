#include <stdio.h>

int conversione(a) {
	int ris = 0, tmp = 0, posizione = 1;

	while (a) {
		
		tmp = a % 2;     // salvo il resto 
		a = a / 2;       // il numero iniziale ogni volta viene diviso per due e itero questa cosa
		                 // ogni volta però avrò già la metà del numero prima.
		ris = ris+ (tmp * posizione);  
		posizione = posizione * 10; /* in questo modo ad ogni ciclo il numero 
									va alla posizione dopo senza alterare il suo valore 
									e rimanendo così un 1 o 0, in questo modo l'ultimo resto
									sarà alla prima posizione perchè moltiplicato per 10^ x
									in base all'ordine 10^x del numero iniziale in decimale.*/
	}
	printf("%d", ris);
	return 0;
}

int main(void) {

	int x = 50;

	int ris = conversione(x);
	return 0;
}
