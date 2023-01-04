#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("char= ");
    scanf(" %c",&c);
    switch (c)
    {
    case ('A'):
        printf("A");
        break;
    case 'B':
        printf("B'");
        break;
    case 'C':
        printf("C");
        break;
    default:
        printf("invalid");
        break;
    }
    return 0;
}
