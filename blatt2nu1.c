#include <stdio.h>

void abfrage(int wurf[], size){
	int i;
		for (i=0; i<size; i++){
			printf("Würfel %i: ", i+1);
			scanf("%i", &wurf[i]);
		}
}

void swap(int *xp, int *yp) 
{ 
	int temp = *xp; 
	*xp = *yp; 
	*yp = temp; 
} 

void bubbleSort(int wurf[], size) 
{ 
	int i, j; 
	for (i = 0; i < size-1; i++)       
  
		 // Last i elements are already in place    
		 for (j = 0; j < size-i-1; j++)  
			  if (wurf[j] > wurf[j+1]) 
				  swap(&wurf[j], &wurf[j+1]); 
} 

void arrayausgabe(int wurf[], size){
	int i;
	for (i=0;i<size;i++) {
		printf("array nummer %i: ", &i);
		printf("%i \n", wurf[i]);
	}
}

void bewertung(int wurf[]){
	int *x;
	x = wurf;

	if (*x==*(x+1)==*(x+2)==*(x+3)==*(x+4)) {
		printf("Grand");
	}else if (*x==*(x+1)==*(x+2)==*(x+3) || *(x+1)==*(x+2)==*(x+3)==*(x+4)) {
		printf("Poker");
	}else if ((*x==*(x+1)==*(x+2) && *(x+3)==*(x+4) )||(*(x+2)==*(x+3)==*(x+4) &&  *x==*(x+1))) {
		printf("Full House");
	}else {
		printf("HAAA Verloren");
	}
	
}

int main() {
	int  wurf[5];
	printf("Programm Würfelspiel\nGrand\tgleiche Augenzahl auf allen 5 Würfeln\nPoker\tgleiche Augenzahl auf 4 Würfeln\nFull House\tgleiche und 2 gleiche Augenzahlen\n\nBitte gibt deine gewürfelten zahlen ein\n");
	abfrage(wurf, 5);
	bubbleSort(wurf, 5);
	arrayausgabe(wurf, 5);
	bewertung(wurf);
}

// Problem = es funktioniert nur mit "1" .....