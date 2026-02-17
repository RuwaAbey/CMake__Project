#include <stdio.h>

int main(){

    int A[] = {2,4,5,8,1};
    int i;
    int *p = A;
   // A++; //invalid
   // p++; //valid
    for(int i =0; i<5; i++){

        printf("Address = %d\n", &A[i]);
        printf("Address = %d\n", A+i);
        printf("Value = %d\n", A[i]);
        printf("Value = %d\n", *(A+i));

        return 0;
    }
}