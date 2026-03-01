#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int count=0;
    if(n==0){
        printf("1 0 0\n");
        return 0;
    }
    int temp=n;
    int max=0;
    int min=9;
    while(temp!=0){
        int num=temp%10;
        count++;
        if(num<min){
            min=num;
        }
        if(num>max){
            max=num;
        }
        temp=temp/10;
    }
    printf("%d %d %d",count,max,min);
    return 0;
}
