#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int n;
    for(n=a;n<=b;n++){
            int sum=0;
        for(int i=1;i<n;i++){
        if(n%i==0){
             sum=sum+i;}
        }
    if(n==sum){
    printf("%d\n",n);}
    }
    return 0;
}
