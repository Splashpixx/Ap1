#include <stdio.h>

int lese_int() {
	int nummer = 0;
	int ret = 0;
	char c;
	printf("Bitte gebe eine Nummer ein: ");
	while(ret == 0) {
		ret = scanf("%d%c", &nummer, &c);
		while (c != '\n' && getchar() != '\n') { };
		if (ret == 0)
			printf("\nDas war keine Nummer. Versuche es erneut: ");
	}

	return nummer;
}

void fizzbuzz(int *array, int laenge) {
	for (int i=0; i<laenge; i++) {
		if (array[i] == 1) {
			printf("%d, ", i+2);
		}
	}
	printf("\n");
}

int main() {
	
	int n = lese_int();
	
			int laenge = n-1;

			int *array;
			array = (int*) malloc(laenge * sizeof(int));

			//setzte alles auf 1
			for (int i = 0; i < laenge; i++) {
				array[i] = 1;
			}
			
			for (int a = 2; a*a-2 < laenge; a++) {
					if (array[a-2] == 1) {
						for (int b = a*2; b -2 < laenge; b += a) {
						array[b-2] = 0;
						}
					}
				}
			fizzbuzz(array, laenge);
		
}