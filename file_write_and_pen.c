#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE * fpointer1 =fopen("employees.txt","w");
    fprintf(fpointer1,"gimy, sales\n ram, tech\n shyam, tech\n");
    fclose(fpointer1);
    FILE * fpointer2 =fopen("employees.txt","a");
    fprintf(fpointer2,"simy, sales\n");
    fclose(fpointer2);
    return 0;
}
