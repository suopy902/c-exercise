#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int y,d;
    scanf("%d %d",&y,&d);
    if((y%400==0)||((y%4==0)&&(y%100!=0))){
        arr[1]=29;
    }
    int count =0;
    while(d>arr[count]){
        d-=arr[count];
        count++;
    }
    printf("%d %d",count+1,d);
    return 0;
}
