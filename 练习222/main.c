#include <stdio.h>
#include <stdlib.h>
/*int is(int n)
{
    if(n<=1) return 0;
    for(int m=2;m*m<=n;m++)
    {
        if(n%m==0) return 0;
    }
    return 1;
}*/
int j(int n)
{
    return n<=1?1:n*j(n-1);
}
int fib(int n)
{
    return n<=2?1:fib(n-1)+fib(n-2);
}
int d(int n)
{
    int re=0;
    while(n>10)
    {
        re=re*10+n%10;
        n=n/10;
    }
    return re;
}
int main()
{
   /* int n;
    scanf("%d",&n);
    if(is(n))
    {
        printf("yes");
    }
    else
    printf("no");*/
    /*int arr[100];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d",arr[0]);*/
    /*int a,b;
    scanf("%d %d",&a,&b);
    int found=0;
    int i;
    for(i=a;i<=b;i++)
    {
        if(i%2==0)
        {
            found=1;
        }
        else
        {
            found=0;
            break;
        }
    }
    if(!found)
    {
        printf("%d",i);
    }*/
    int n;
    scanf("%d",&n);
    //printf("%d",j(n));
    //printf("%d",fib(n));
    //printf("%d",d(n));
    /*int sum=0;
    while(n>0)
    {
        sum+=n%10;
        n/=102;
    }
    printf("%d",sum);*/
    /*int m;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
        printf("%d ",i);
        }
    }*/
    return 0;
}
