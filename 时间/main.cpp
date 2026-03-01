#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M,h,m,s;
    char w[3];
    scanf("%d",&M);
    h=M/3600;
    m=(M-h*3600)/60;
    s=M-m*60-h*3600;
    if(h>=0&&h<12){
        sprintf(w,"am");
    }
    else if(h>=12&&h<=24){
        sprintf(w,"pm");}
    printf("%02d:%02d:%02d %s",h,m,s,w);
    return 0;
}
