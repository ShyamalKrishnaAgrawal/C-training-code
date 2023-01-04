#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct std {
    char name[40];
    int age;
};

int main()
{
    struct std std1;
    strcpy(std1.name,"Jim katri");
    std1.age=10;
    struct std std2;
    strcpy(std2.name,"Jim katri");
    std2.age=10;
    printf("%s, %d",std1.name,std1.age);
    return 0;
}
