#include <stdio.h>

int setBits(int, int, int, int);

int main(){
	int a = setBits(255, 0, 4, 0);
	printf("%d\n", a);

	int b = setBits(1, 1, 3, 4);
	printf("%d\n", b);

	int c = setBits(218, 2, 4, 9);
	printf("%d\n", c);
}

int setBits(int x, int p, int n, int y){
	x = x & (~((~(~0 << n)) << p));
	y = (y & (~(~0 << n))) << p;
}
