#include <stdio.h>

unsigned getBits(unsigned, int, int);

int main(){
	unsigned a = getBits(255, 3, 4);
	printf("%d\n", a);

	unsigned b = getBits(3, 1, 2);
	printf("%d\n", b);
}

unsigned getBits(unsigned x, int p, int n){
	return (x >> (p+1-n)) & ~(~0 << n);
}
