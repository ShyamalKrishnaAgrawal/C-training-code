#include <stdio.h>
#include <stdlib.h>

void sayhi(char name[], int age){
    printf("name= %s, age= %d \n",name, age);
}

double power(int n){
    return(n*n*n);
}

int main()
{
    sayhi("mike",10);
    sayhi("bike",12);
    sayhi("rike",13);
    int a=power(5);
    printf("ans= %d",a);
    return 0;
}

