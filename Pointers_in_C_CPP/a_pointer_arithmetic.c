#include <stdio.h>

int main(){

    int a = 10;
    int *p;
    p = &a;
    printf("Address p is %d\n",p);
    printf("size of integer is %ld bytes \n", sizeof(int));
    printf("Address p+1 is %d\n",p+1);
    printf("Value ar address p+1 is %d\n", *(p+1));
    printf("Address p+2 is %d\n",p+2);


}