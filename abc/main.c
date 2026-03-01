#include <stdio.h>
#include <stdlib.h>
int dao(int n){
    int rev=0;
    while(n>0){
    rev=rev*10+n%10;
    n=n/10;
}
    return rev;
}

int main()
{
    int a;
    int n;
    scanf("%d",&n);
    int i=100;
    while(i<1000){
        if(i+dao(i)==n){
            a=i;
        }
        i++;
    }
    int b=a%10;
    a=a/10;
    int c=a%10;
    a=a/10;

    printf("%d %d %d\n",&a,&b,&c);
    return 0;
}
