// from heatwave github repository
// https://github.com/Heatwave/The-C-Programming-Language-2nd-Edition/tree/master/chapter-2-types-operators-expressions
	
#include <stdio.h>

int main(){
	char s[] = "test";
	squeeze(s, 't');
	printf("%s\n", s);
}

void squeeze(char s[], int c){
	int i, j;

	for(i = j = 0; s[i] != '\0'; i++)
		if(s[i] != c)
			s[j++] = s[i];
	s[j] = '\0';
}
