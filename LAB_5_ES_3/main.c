#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int print_inverted_pyramid(x) {

	int i, j, rows = (x/2) +1;

	for (i = 1; i <= rows; i++)
	{

		for (j = 1; j < i; j++)
		{
			printf(" ");
		}

		for (j = 1; j <= x; j++)
		{
			printf("*");
		}

		printf("\n");
		x = x - 2;
	}

	return 0;
	
}

	/*do
	{
		--x;
		for (j = i; j >= tmp; j-=2)
		{
			printf(" ");
		}
		for (i = 1, tmp = 0; i <= (x+1); i++, tmp++)
		{
			printf("*");

		}
		--x;
		printf("\n");
		tmp--;
	} while (x >= 0); */



	/*do {
		   --x;
		   for (int i = 1; i <= (x + 1); i++) {
			   printf(" ");
		   }
		   for (int i = 1; i <= (x+1); i++) {
			   printf("*");
		   }
		   --x;
		   printf("\n");
		   //printf(" ");
	   } while (x >= 0);


	   return 0;
	   } */

int print_space(x) {
	printf("------------------------------------------------------------------------------------------------------------------------\n");
}


int print_letter_e(x) {

	int tmp = 1, j;


	for (int i = 0; i <= x; i++) {

		if (i == 0 || i == x) {

			for (int p = 0; p < x; p++) {

				printf("*");

			}
		} else {
			if (i != ((x / 2)+1)) {
				printf("*\n");
			}  else {
            if (i == ((x / 2)+1)) {

		    for (j = 1; j < x - 2; j++)
						printf("*");
					printf("\n");
				}
			}
		}
	}
return 0;
}





int main(void) {

	int n;

	printf("Iserisci un valore intero positivo dispari: ");
	scanf("%d", &n);



	if (n >= 1 && n % 2 != 0) {
		print_inverted_pyramid(n);
		print_space(n);
		print_letter_e(n);
	}
	else printf("Il numero inserito non rispetta le condizioni citate.\n");

	return 0;
}