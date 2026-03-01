#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m;
    scanf("%d",&m);
    char level;
    if(m>=90&&m<=100){
        level='A';
    }
    else if(m>=80&&m<=89){
        level='B';
    }
    else if(m>=70&&m<=79){
        level='C';
    }
    else if(m>=60&&m<=69){
        level='D';
    }
    else{
        level='E';
    }
    printf("%c",level);
    return 0;
}
