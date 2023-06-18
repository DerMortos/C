#include <stdio.h>

unsigned rightRot(unsigned, unsigned);

int main(){
	int a = rightRot(255, 32);
	printf("%d\n", a);

	int b = rightRot(1, 30);
	printf("%d\n", b);
}

//unsigned rightRot(unsigned x, unsigned n){
//	while(n-- > 0){
//		if(x & 1 ==1){
//			x = (x >> 1) | ~(0U >> 1);
//		}
//		else{
//			x = x >> 1;
//		}
//	}
//	return x;
//}

unsigned rightRot(unsigned x, unsigned n){
	int wordLength(void);
	unsigned rbit;

	rbit = x << (wordLength() -n);
	x = x >> n;
	x = x | rbit;

	return x;
}

int wordLength(void){
	int i;
	unsigned v = (unsigned)~0;

	for(i=1; (v = v >> 1) > 0; i++)
		;
	return i;
}
