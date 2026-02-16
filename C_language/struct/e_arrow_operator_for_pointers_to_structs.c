#include <stdio.h>
#include <stdlib.h>

typedef struct {

	int x;
	int y;

}Point;

int main(void){

	Point p1;

	p1.x = 3;
	p1.y = 4;

	printf("p1: (%d,%d)\n",p1.x,p1.y);

	Point *p2;  //pointer to a struct
	p2 = &p1;

	p2->x = 5;
	p2->y = 4;

	printf("p1: (%d,%d)\n",p1.x,p1.y);
	printf("p2: (%d,%d)\n",p2->x,p2->y);
	
	Point *p3;
	p3 = malloc(sizeof(Point));

	p3->x=5;
	p3->y=10;

	printf("p3: (%d,%d)\n", p3->x,p3->y);

	(*p3).x = 2;
	(*p3).y = 3;
	printf("p3: (%d,%d)\n", (*p3).x,(*p3).y);

	return 0;	

}
