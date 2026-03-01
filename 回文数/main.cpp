#include <stdio.h>
#include <stdlib.h>
int dao(int n)
{
    int re=0,temp;
    while(n!=0)
    {
        temp=n%10;
        re=re*10+temp;
        n/=10;
    }
    return re;
}
int he(int n)
{
    int sum=0;
    while(n!=0)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(n==dao(n))
    {
        printf("%d",he(n));
    }
    else
    {
        printf("no\n");
    }
    return 0;
}
