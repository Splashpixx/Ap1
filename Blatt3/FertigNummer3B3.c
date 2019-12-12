#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	typedef int item;
	typedef char max;
	typedef int GanzvieleBuchstaben;
	
	//unien wär die bessere variante (eigentlich). weil platzsparender
	
	typedef struct managementtool 
	{
		max artikel[200];
		item anzahl;
	}Lager;
	
	Lager lager[200];

	printf("Welcome to Warehouse Management 97\n\n\nWhat do you want to do ?\n");
	
	GanzvieleBuchstaben a,l,f,i,v,x,p,c,я,и,ii,pp,stand,hh,zz;
	int exit, end, all;
	int b = 201;
	int zuviel = 0;
	char ente[40];
	char uff;
/*
	x	= für die case 
	v	= um zu schauen ob man am ende plural oder singular benutz werden muss | case 1
	f	= Produkt possition im Arr | case 1
	i	= wird in der 4. case benutzt um hochzuzählen (while)
	all	= anzahl der verfügbaren produkte 
	end	= beendet Case 1
	a	= case 2 while
	b	= save case 2 for if
	l	= anzahl aller lager dinger.
*/
	char ques, nu1;
	char find [100];
	
	do {
		printf("\n(1)Add article\n(2)Edit article.\n(3)Search entry.\n(4)Show stock.\n(5)Exit\n");
		scanf("%i",&x);
		
		switch (x) {
			case 1://add
				do {
					printf("\nEnter the product name:  ");
					scanf("%s", ente);
					
					// Fixt den Namen
					int len = strlen(ente);
					for(zz=1; zz<len; zz++) {
						if(ente[zz] >= 'A' && ente[zz] <= 'Z') {
							ente[zz] += 32;
						}
					}
					
					for (pp=0;pp<l;pp++) {
						if (strcmp(ente, lager[pp].artikel)==0) {
							zuviel=10;
							stand=pp;
						}
					}
					
					if (zuviel==10) {
						fflush(stdin);
						printf("Item already on stock, do  you want to configurate it (Y/N)?");
						scanf("%c", &uff);
						switch (uff) {
							case 'Y':
								printf("%s currently has %i items",lager[stand].artikel, lager[stand].anzahl);
								printf("\nHow many items woud do you like to add ?\n");
								scanf("%i", &hh);
								lager[stand].anzahl += hh;
								break;
							case 'N':
							default:
								break;
						}
					} else {
						strcpy(lager[l].artikel, ente);
						printf("\nAmount of products:  ");
						scanf("%i", &lager[l].anzahl);
					}
					
					
					fflush(stdin);
					printf("\n\nAdd another product ? (Y/N)");
					// add a space before % to skip leading whitespace
					scanf(" %c", &ques);
					switch (ques) {
						case 'Y':
							v++;
							l++;
							break;
						case 'N':
							end = 1;
							v = 0;
							l++;
							break;
						default:
							printf("Wrong entry\n");
							end = 1;
							break;
					}
				} while (end != 1);
				
				if (v >= 2) {
					printf("Product added successfully\n\n");
				}else {
					printf("Products have been successfully added\n\n");
				}
				break;
				
			case 2://edit
				printf("Which article do you want to edit?");
				fflush(stdin);
				scanf("%s", find);
				
				for (a=0;a<=l;a++) {
					if(strcmp(find, lager[a].artikel)==0) {
						printf("The item is on stock!");
						b=a;
					}
				}
				
				if (b == 201) {
					printf("Article not found ");
					break;
				} else {
					я=0;
					do {
					printf("What woud you like to edit?\n(1)increase amount\n(2)decrease amount\n(3)Exit\nEnter number: ");
					
					scanf("%i", &p);
						switch (p) {
							case 1:// erhöhen
								printf("%s currently has %i items",lager[b].artikel, lager[b].anzahl);
								printf("\nHow many items woud do you like to add ?\n");
								scanf("%i", &c);
								lager[b].anzahl += c;
								break;
							case 2://verringern
								printf("%s currently has %i items",lager[b].artikel, lager[b].anzahl);
								printf("\nHow many items woud you like to decrease ?\n");
								scanf("%i", &c);
								
								if (c > lager[b].anzahl) {
									printf("You don't have enough Items");
								} else {
									lager[b].anzahl -= c;
								} break;
							case 3://Exit
								printf("Menue");
								я=2;
								break;
							default:
								continue;
						}
					} while (я==0);	
				} break;
				
			case 3://search	
				printf("What woud you like to search ?");
				fflush(stdin);
				scanf("%s", find);
				
				for (и=0;и<=l;и++) {
					if(strcmp(find, lager[и].artikel)==0) {
						printf("%s currently has %i items",lager[и].artikel, lager[и].anzahl);
						ii=2;
					}
				}
				if (ii == 0) printf("Item does not exist");
				break;
				
			case 4://Spam-it
				i=0;
				while (i<=l) {
					printf("\nProduct number %i\n", i+1);
					printf("Name: ");
					puts(lager[i].artikel);
					printf("Amount: %d\n", lager[i].anzahl);
					i++;
				}
				
				printf("\nTotal amount of Items: %i", all);
				break;
			case 5://go away
				printf("Goodbye :)");
				exit=1;
				break;
			default://well
				printf("Wrong Input\n");
				break;
		}
		all=0;
		for (i=0;i<=l;i++) {
			all += lager[i].anzahl;
		}
		
	} while (exit==0);
}
