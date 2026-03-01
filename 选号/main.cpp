#include <stdio.h>
#include <stdlib.h>
int s(long long num){
int sum=0;
while(num>0){
sum+=num%10;
num/=10;}
return sum;
}

int main()
{
    int n;
    scanf("%d",&n);
    long long q[100];
    for(int i=0;i<n;i++){
        scanf("%lld",&q[i]);
    }
    int max=-1;
    long long sel=-1;
    for(int i=0;i<n;i++){
        int cs=s(q[i]);
        if(cs>max||(cs==max&&q[i]>sel)){
        max=cs;
        sel=q[i];}
    }
    printf("%lld\n",sel);
    return 0;
}
