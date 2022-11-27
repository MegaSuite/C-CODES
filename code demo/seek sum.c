#include<stdio.h>
int main(){
    int s=0,c=0;
    long n=0;
    scanf("%ld",&n);
    scanf("%d",&s);
    char arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&c);
        arr[i]=c;
    }
    for(int j=0;j<=n-1;j++){
        int temp1=arr[j];
        for(int m=j+1;m<=n-1;m++){
            int temp2=arr[m];
            if (s==temp1+temp2){
                printf("%d %d",j,m);
                break;
            }
            break;
        }
    }
    return 0;

}