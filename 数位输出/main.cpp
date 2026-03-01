#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,p,count=0;
    int a[10]={0};
    scanf("%d",&n);
    while(n>0){
        p=n%10;
        a[count++]=p;
        n/=10;
    }
    int temp;
    for(int i=0;i<count-1;i++){
        for(int j=0;j<count-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<count;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
