#include <stdio.h>


int main(int argc, char *argv[])
{
 printf("argc: %d\n", argc); //here the programme itself consider as an argument

for(int i = 0; i < argc; i++)
    printf("argv[%d]=%s\n",i,argv[i]);


 //printf("argv[0]=%s\n", argv[0]); //this the programme ./programme
 //printf("argv[1]=%s\n", argv[1]);
 //printf("argv[2]=%s\n", argv[2]);
 //printf("argv[3]=%s\n", argv[3]);

 return 0;

}