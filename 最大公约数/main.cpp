#include <stdio.h>
#include <stdlib.h>

int gcd(int a,int b){
while(b!=0){
    int temp=b;
    b=a%b;
    a=temp;
}
return a;
}
int main(){
int a,b,c;
scanf("%d %d",&a,&b);
c=gcd(a,b);
printf("%d",c);
return 0;}
