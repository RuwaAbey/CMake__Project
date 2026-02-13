#include <stdio.h>

int main(void)
{

	int a, b, c;
	a = b = c = 0;

	printf("Enter 3 numbers: ");
	scanf("%d %d %d", &a, &b, &c);
	printf("Result: %d\n", a+b+c);

	return 0;

}
