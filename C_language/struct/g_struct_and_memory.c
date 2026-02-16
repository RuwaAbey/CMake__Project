#include <stdio.h>
/*
User defined types with 3 ints & 4 chars
---------------------------------
|char4  |char3  |char2  |char1  |
---------------------------------
|           num 3               |
---------------------------------
|           num 2               |
---------------------------------
|           num 1               |
.................................
*/

struct tightstruct{
    int num1;
    int num2;
    int num3;
    char char1;
    char char2;
    char char3;
    char char4;
};

/*
Alternating char int - since ints must be word aligned each int
will start after 3 bytes of char padding, wasting 3 bytes
---------------------------------- 
|       |       |       |char4  |
---------------------------------
|           num 3               |
---------------------------------
|       |       |       |char3  |
---------------------------------
|           num 2               |
---------------------------------
|       |       |       |char2  |
---------------------------------
|           num 1               |
.................................
|       |       |       |char1  |
---------------------------------
*/

struct loosestruct{
    char char1;
    int num1;
    char char2;
    int num2;
    int char3;
    int num3;
    int char4;
};

/*
bitfield example (word padding still applies!) */
struct bitfield{
    int a : 10;/* 10 bit int */
    int b : 5; /* 5 bit int */
    int c : 1;/*1 bit int*/  //make this unsigned to get the correct value
};

int main(void){

    struct tightstruct tstruct = {0,1,2,'A','B','C','D'};
    struct loosestruct lstruct = {'W',5,'R',9,'P',7,'E'};
    struct bitfield bstruct = {7,2,1};

    printf("tightstruct: size=%ld, values:%d %d %d %c %c %c %c\n",sizeof(tstruct),tstruct.num1,tstruct.num2, tstruct.num3,tstruct.char1,tstruct.char2,tstruct.char3,tstruct.char4 );
    printf("loosestruct: size=%ld, values:%d %d %d %c %c %c %c\n",sizeof(lstruct),lstruct.num1,lstruct.num2, lstruct.num3,lstruct.char1,lstruct.char2,lstruct.char3,lstruct.char4 );
    printf("bitfield: size=%ld, values:%d %d %d \n",sizeof(bstruct),bstruct.a,bstruct.b,bstruct.c);

    return 0;
}