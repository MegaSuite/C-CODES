#include<stdio.h>
int main(){
    long sum=0,d=1;
    int n;
    scanf_s("%d",&n);
    for(int j=1;j<=n;j++){
        d=1;
        for(int i=1;i<=j;i++){
            d=d*j;
        }
        sum=sum+d;
    }
    printf("%ld",sum);
    return 0;
}
