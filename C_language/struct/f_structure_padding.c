#include <stdio.h>

struct data
{
	char x;
	int y;
};

int main(void){

	printf("sizeof(int): %zu\n", sizeof(int));
	printf("sizeof(char): %zu\n", sizeof(char));
	printf("sizeof(data): %zu\n", sizeof(struct data));
	return 0;

}
