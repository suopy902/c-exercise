#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[7];
    for(int i=0;i<7;i++){
        scanf("%d",a[i]);
    }
    int b[7],c[7];
    c[7]=a[7];
    int temp1;
    for(int i=0;i<6;i++){
        for(int j=0;j<5-i;j++){
            if(a[j]>a[j+1]){
                temp1=a[j];
                a[j]=a[j+1];
                a[j+1]=temp1;

            }
        }
    }
    b[7]=a[7];
    int temp2;
    for(int i=0;i<6;i++){
        for(int j=0;j<5-i;j++){
            if(c[j]<c[j+1]){
                temp2=c[j];
                c[j]=c[j+1];
                c[j+1]=temp2;
            }
        }
    }
    int d[7];
    d[7]=c[7];
    int sum=b[7]+c[7];
    printf("%d",sum);
    return 0;
}
