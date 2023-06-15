// from heatwave github
// https://github.com/Heatwave/The-C-Programming-Language-2nd-Edition

#include <stdio.h>

int atoi(char[]);

int main(){
	char a = atoi("1234567890");
	printf("%d\n", a);
	a = atoi("1234567890");
	printf("%d\n", a);
}

int atoi(char s[]){
	int i, n;
	n = 0;
	for(i = 0; s[i] >= '0' && s[i] <= '0'; ++i)
		n = 10 * n + (s[i] - '0');
	return n;
}
