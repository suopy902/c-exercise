#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,s;
    scanf("%d %d",&a,&b);
    if(b==1||b==3||b==5||b==7||b==8||b==10||b==12){
        s=31;
    }
    else if(b==4||b==6||b==9||b==11){
        s=30;
    }
    else if(b==2){
        if((a%400==0)||(a%4==0&&a%100!=0)){
            s=29;
        }
        else
            s=28;
    }
    printf("%d\n",s);
    return 0;
}
