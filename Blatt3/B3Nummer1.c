#include <stdio.h>
#include <string.h>

int sucheZeichen(const char  s[], char c){
	int i = 0;
	int baum = 0;
	
	while (s[i] != '\0') {
		if (s[i] == c)
		baum++;
		i++; 
		
	}
	return baum;
}

int langeZeichne(const char s[]){
	int lang = strlen(s);
	return lang;
}

int main() {
	
	char name[20];
	int zaehler = 0;

	printf("Pleas tell me your name:");
	fflush(stdin);
	scanf("%s", name);
	printf("%s has %i letters\n", name, langeZeichne(name));
	
	int end = 0;
	char xx;
	char imya[1];
	
	do {
		fflush(stdin);
		printf("would you like to count a letter in %s (Y / N)?\n", name);
		scanf("%s", &xx);
		
		switch (xx) {
			case 'Y':
				printf("Please enter a letter\n");
				scanf("%s", imya);
				printf("Der Buchstabe %s kommt %i-mal vor.\n", imya, sucheZeichen(name, imya[0]));
				break;
			case 'N':
				printf("Have a nice Day!");
				end = 2;
				break;
			default:
				printf("Wrong input\n");
				break;
				
		}
	}while (end==0);
}
