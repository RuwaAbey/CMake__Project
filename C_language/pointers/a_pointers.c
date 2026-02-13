#include <stdio.h>

int main(void){
	
	int b = 42;

	int *a = &b;
	printf("b: %d\n", b);
	printf("&b: %p\n", &b);
	printf("a: %p\n", a);
	//a = &b;
	
	*a = 50;
	printf("b: %d\n", b);
        printf("&b: %p\n", &b);
        printf("a: %p\n", a);

	return 0;



}
