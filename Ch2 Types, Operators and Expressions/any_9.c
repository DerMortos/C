// write  the function any(s1, s2), which returns the first location in a
// string s1 where any character from the string s2 occurs, or -1 if s1
// contains no characters from s2.

#include <stdio.h>

int any(char[], char[]);

int main(){
	int p;
	p = any("test", "test");
	printf("p: %d\n", p);

	p = any("test", "es");
	printf("p: %d\n", p);

	p = any("test", "s1");
	printf("p: %d\n", p);

	p = any("test", "123");
	printf("p: %d\n", p);
}

int any(char s1[], char s2[]){
	int i, j;
	int result = -1;

	for(i=0; s1[i] != '\0'; i++){
		for(j=0; s2[j] != '\0'; j++){
			if(s1[i] == s2[j]){
				result = i;
				break;
			}
		}
		if(result != -1)
			break;
	}
	return result;
}
