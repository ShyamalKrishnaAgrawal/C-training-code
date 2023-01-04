#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("there once was a man named george\n");
    printf("age 25\n");
    printf("salary 20 laks\n");
    
    char c[]="john";
    int age=25;
    printf("there once was a man named %s\n",c);
    printf("age %d years\n",age);
    printf("age= %d years\n",age);

    age=35;
    printf("there once was a man named %s\n",c);
    printf("age %d years\n",age);
    return 0;
}
