#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y,d;
    scanf("%d %d",&y,&d);
    int is=0;
    if(((y%4==0)&&(y%100!=0))||(y%400==0)){
        is=1;
    }
    int yue[]={31,28,31,30,31,30,31,31,30,31,30,31};
    if(is==1){
        yue[1]=29;
    }
    int month=0;
    while(d>yue[month])
    {
        d-=yue[month];
        month++;
    }
    printf("%d %d",month+1,d);
    return 0;
}
