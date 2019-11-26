#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int x, i;
	int prim;
		
		// i zählt von 2 bis 1000
	for(i=2; i<1000; i++) {
			 prim = 0;
				//
			 for(x = 2; x<100; x++)
				{
					// schaut durch den modulo operator ob prim oder nicht
					if(i % x != 0) {
							prim = 1;
					}
					else if(i != x)
					{
						 prim = 0;
						 break;
					}
				}
					
			 if(prim == 1)
				 printf("Primzahl gefunden: %d\n", i);
	}
}
