#include <stdio.h>
#include <stdlib.h>


int main()
{
    int g,i=0,sn=5,q=0;
    while(i<10){
        printf("guess = ");
        scanf("%d",&g);
        if(g==sn){
            printf("correct");
            q=1;
            break;
        }
        i++;
    }
    if(q==0){
        printf('not able to guess. It\'s 5.');
    }
    return 0;
}
