//Pointers as function arguments - Call by reference
//the below code shows a use case of pointers asa example
//a failure that could happen behind if we didnot use pointers

#include <stdio.h>

void Increment(int a){

    a = a + 1;

}

int main()
{
    int a; //local variable
    a  = 10;
    increment(a);
    printf("a = %d", a); //this will print 10 ??


}   