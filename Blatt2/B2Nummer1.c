#include <stdio.h>

void abfrage(int wurf[], int size){
	int i;
		for (i=0; i<size; i++){
			printf("Würfel %i: ", i+1);
			scanf("%i", &wurf[i]);
		}
}

// Vertauscht die int*
void swap(int *xp, int *yp) 
{ 
	int temp = *xp; 
	*xp = *yp; 
	*yp = temp; 
} 
// sortiert den Array nach der Größe
void bubbleSort(int wurf[], int size) 
{ 
	int i, j; 
	for (i = 0; i < size-1; i++){          
		for (j = 0; j < size-i-1; j++){ 
			if (wurf[j] > wurf[j+1])
			{
				swap(&wurf[j], &wurf[j+1]); 
			}
		}
	}
} 

void arrayausgabe(int wurf[], int size){
	int u = 0;
	for (u=0;u<size;u++) {
		printf("array nummer %i: ", u); // mit & bekommt man ein fehler
		printf("%i \n", wurf[u]);
	}
}

void bewertung(int wurf[]){
	
	if (wurf[0]==wurf[1]&&wurf[0]==wurf[2]&&wurf[0]==wurf[3]&&wurf[0]==wurf[4]) {
		printf("Grand");
	}else if(	(wurf[0]==wurf[1]&&wurf[0]==wurf[2]&&wurf[0]==wurf[3]&&wurf[0]!=wurf[4])||  
			(wurf[4]!=wurf[0]&&wurf[4]==wurf[1]&&wurf[4]==wurf[2]&&wurf[4]==wurf[3]))
	{ printf("Poker");}
	else if(	(wurf[0]==wurf[1]&&wurf[2]==wurf[3]&&wurf[2]==wurf[4]&&wurf[2]!=wurf[1])||
			(wurf[0]==wurf[1]&&wurf[0]==wurf[2]&&wurf[3]==wurf[4]&&wurf[4]!=wurf[0]))
	{ printf("Full House");}
	else 
	{ printf("HAAA Verloren");}
}

int main() {
	int  wurf[5];
	printf("Programm Würfelspiel\nGrand\tgleiche Augenzahl auf allen 5 Würfeln\nPoker\tgleiche Augenzahl auf 4 Würfeln\nFull House\tgleiche und 2 gleiche Augenzahlen\n\nBitte gibt deine gewürfelten zahlen ein\n");
	abfrage(wurf, 5);
	bubbleSort(wurf, 5);
	arrayausgabe(wurf, 5);
	bewertung(wurf);
}

// Problem = es funktioniert nur mit "1" ..... 
/*
weil bei == als ergebniss ein bool raus kommt 
*/
