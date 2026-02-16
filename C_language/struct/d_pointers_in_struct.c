#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//struct which has pointer inside of it
//struct is storing the pointer to the array 
typedef struct
{
	int *array;

}Data;


int main(void){


	Data x;
	Data y;

	x.array = malloc(sizeof(int)*5); 
	y.array = malloc(sizeof(int)*5);

	x.array[0] = 1;
	x.array[1] = 2;
	x.array[2] = 3;
	x.array[3] = 4;
	x.array[4] = 5;

        y.array[0] = 9;
        y.array[1] = 9;
        y.array[2] = 9;
        y.array[3] = 9;
        y.array[4] = 9;
	
	x = y; //now the x will also pointed to the same array as y

	for (int i=0; i < 5; i++)
		printf("x.array[%d] = %d\n", i, x.array[i]);

	x.array[0] = 10;

	for(int i = 0; i <5; i ++)
		printf("y.array[%d] = %d\n",i,y.array[i]);

	return 0;

}

