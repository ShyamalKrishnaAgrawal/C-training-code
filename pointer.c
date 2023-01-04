#include <stdio.h>
#include <stdlib.h>


int main()
{
    int age=5;
    int * page=&age;
    double d=4.5;
    double * pd=&d;
    char c='A';
    char * pc=&c;
    printf("%p,%p,%p\n",&age,&d,&c);
    printf("%p,%p,%p\n",page,pd,pc);
    printf("%d,%f,%c",page,pd,pc);
}
