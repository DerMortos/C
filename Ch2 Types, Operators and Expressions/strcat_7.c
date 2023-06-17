#include <stdio.h>

void stringCat(char s[], char t[]);

int main(){
	char s[] = "bayou";
	char t[] = "Ha";
	stringCat(s, t);
	printf("%s\n", s);
}

void stringCat(char s[], char t[]){
	int i, j;

	i = j = 0;
	while(s[i] != '\0') 		    // find end of s
		i++;
	while ((s[i++] = t[j++]) != '\0')   // copy t
		;
}
