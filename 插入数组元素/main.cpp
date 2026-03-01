#include <stdio.h>
#include <stdlib.h>
int cmp(const void*a,const void*b)
{
    return *(int *)a-*(int *)b;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[100];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int m;
    scanf("%d",&m);
    qsort(a,n,sizeof(int),cmp);
    int pos=n;
    for(int i=0;i<n;i++){
        if(a[i]>=m){
            pos=i;
            i++;
            break;
        }
    }
    for(int i=0;i<pos;i++){
        printf("%d ",a[i]);
    }
    printf("%d ",m);
    for(int i=pos;i<n;i++){
        printf("%d",a[i]);
        if(i!=n-1){
            printf(" ");
        }
    }
    return 0;
}
