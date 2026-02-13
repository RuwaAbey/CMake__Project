#include <stdio.h>
#include <stdlib.h>
/*
 *If I want to create a array and do not have idea about the size
 *we can dynamicallly allocate the size
 *this dynamic memory iscreated in the heap
 *malloc function: allocates the space on the heap
 *heap: memory area that is for dynamically allocated things
 *
 */

int main(void){

	int *a;
	int length = 0;

	printf("Enter alength: ");
	scanf("%d", &length);

	a = malloc(length*sizeof(int));
	
	for (int i = 0; i < length; i ++)
		a[i] = i;

	for(int i = 0; i < length; i ++)
		printf("a[%d]=%d\n", i, a[i]);

	return 0;
}
