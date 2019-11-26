#include <stdio.h>

void eingabe(float grade[])
{
	int i;
	for (i=0;i<5;i++) {
		printf("Bitte geben Sie die Anzahl der Arbeiten mit der Note %i ein: : ", i+1);
		scanf("%f", &grade[i]);
	}
}

void ausgabe(int all, float ds, float fail, float grade[])
{
	
	int Я;
	for (Я=0;Я<16;Я++) {
		if (Я==0) {
			printf("\n\nNote \t");
		}else if (Я>1&&Я<7) {
			printf("|%i     ", Я-1);
		}else if (Я==8) {
			printf("\t\tGesamt   \nAnzahl \t");
		}else if (Я>8&&Я<14) {
			printf("|%.0f     ", grade[Я-9]);
		}else if (Я==15) {
			printf("\t%i\nDurchschnittsnote: %.1f\nDurchfallquote:%.2f%%", all, ds, fail);
		}
	}
}

int main(int argc, char *argv[]) {
	float grade[5];
	float *x;
	x = grade;
	printf("Programm Notenspiegel\n\n");
	eingabe(grade);
	
	int p;
		int aos = 0;
		for (p=0;p<5;p++) {
			aos+=grade[p];
		}

	// komentar um kommentare im code zu haben
	float all = 0;
	int omg;
		for (omg=0;omg<5;omg++) {
			all += ((omg+1)*(grade[omg]));
		}
	
	
	float ds;
	ds = all/aos;
	float fail;
	fail = grade[4]*100/aos;
	
	ausgabe(aos, ds, fail, grade);
	

//	printf("insgesamt gab es %i schüler \n", aos);
//	printf("all ist %.0f \n", all);
//	printf("ds ist %.2f \n", ds);
//	printf("fail ist %i%% \n", fail);
//	
	
}

/*
konstrukt
durschnitt
Arr[] --> AoS --> Ag --> Ag/AoS == Dq;
failq as %
-->  *(x+4) * 100 / AoS
*/