#include <stdio.h>


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
 

int main(int argc, char *argv[]) {
	int wurf [5] = {7,3,1,9,34};
	
	bubbleSort(wurf, 5);
	
	for( int j = 0; j < 5; j++)
	{
		printf("%i \n", wurf[j]);
	}
}