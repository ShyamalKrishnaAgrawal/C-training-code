#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE * fpointer =fopen('employees.txt','w');
    fprintf(fpointer,"gimy, sales\n ram, tech\n shyam, tech\n");
    fclose(fpointer);
    FILE * fpointer =fopen('employee.txt','a');
    fprintf(fpointer,"simy, sales\n");
    fclose(fpointer);
    return 0;
}
