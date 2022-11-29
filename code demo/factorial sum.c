#include <stdio.h>
int main()
{
    int i,n,j,t;
    long s=0;
    int sum=1;
    scanf_s("%d",&n);
    for (j=1;j<=n;j++){
        sum=1;
        for (i=1;i<=j;i++) sum=sum*i;
        s=s+sum;
    }
    printf("%d",s);   
    printf("\n");
    return 0;
}
