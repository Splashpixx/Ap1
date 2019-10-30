#include <stdio.h>

int main(int argc, char *argv[]) {
	float x1;
	float x2;
	
	printf("Bitte gib x1 an: "); //10
	scanf("%f", &x1);
	printf("bitte gib nun x2 an: ");//6 -> 3 x4
	scanf("%f", &x2);
	
	float x3 = x1/5;
	float x4 = x2/2;
	float etage = 2*(x2*x3)+x4*(x1-(2*x3));
	float Haus = etage*3;
	float rundweg = 2*x2+2*x1+2*x4;
	float kosten = rundweg * 175;
	
	// mit .2f werden nur 2 kommastellen ausgegeben 
	printf("\nDein Haus hat eine Fläche von %.3fm, der Rundeweg wird wahrscheinlich um die %.2f€ kosten. \nGood luck", Haus, kosten);
	return 0;
}