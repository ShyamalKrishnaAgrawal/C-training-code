#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    double gpa;
    printf("input age= ");
    scanf("%d",&age);
    printf("age=%d \n",age);
    printf("input gpa= ");
    scanf("%lf",&gpa);
    printf("gpa=%f \n",gpa);
    char ch;
    printf("input grade= ");
    scanf(" %c",&ch);
    printf("grade=%c \n",ch);
    char name[30];
    printf("input name= ");
    scanf(" %s\n",name);
    printf("name=%s \n",name);
    char name1[30];
    printf("input name1= ");
    fgets(name1,30,stdin);
    printf("name1=%s",name1);
    return 0;
}
