
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
