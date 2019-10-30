#include <stdio.h>

int main(int argc, char *argv[]) {
	int x;
	int y;
	
	printf("Programm Bereichsüberschreitungen\n\nGeben Sie bitte zwei Int zahlen ein: ");
	scanf("%d %d", &x, &y);
	int erg = x*y;
	printf("\nDie Summe von x und y ist: %d ", erg);
	printf("\n size of x and y %lu", sizeof(erg));
	/*
	Bei einer zu großen zahl wird das ergebniss zu einer randome -Zahl weil die bit blöcke nichtmehr ausreichen oder so
	 */
}