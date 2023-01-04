#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a;
    double b;
    char c;
    printf("n1= ");
    scanf("%lf",&a);
    printf("operator= ");
    scanf(" %c",&c);
    printf("n2= ");
    scanf("%lf",&b);
    if(c=='+'){
        printf("ans= %lf",a+b);
    }else if(c=='-'){
        printf("ans= %lf",a-b);
    }else if(c=='*'){
        printf("ans= %lf",a*b);
    }else if(c=='/'){
        printf("ans= %lf",a/b);
    }else{
        printf("invalid");
    }
    return 0;
}
