#include <stdio.h>
#include <stdlib.h>


int main()
{
    char line[255];
    FILE * fpointer1 =fopen("employees.txt","r");
    fgets(line,255,fpointer1);
    printf("%s",line);
    fgets(line,255,fpointer1);
    printf("%s",line);
    fclose(fpointer1);
    return 0;
}
