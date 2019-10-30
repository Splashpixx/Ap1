#include <stdio.h>

int main() {
	
	float netto;
	printf("Programm zur berechnung eines Bruttobetrags\n\nBitte geben sie den Nettobetrag in EUR ein: ");
	scanf("%f", &netto);
	
	float mwss = netto*19/100;
	float brt = netto+mwss;
	
	printf("Nettobetrag 	= 	%6.2f EUR\n", netto);
	printf("Mehrwertsteursatz 19.00 	= 	%6.2f EUR\n", mwss);
	printf("Bruttobetrag 	= 	%6.2f EUR", brt);
		
	
}