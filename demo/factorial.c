#include <stdio.h>
int main()
{
    int i,n;
    int sum=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum=sum*i;
    printf("%d!=%d",n,sum);
    printf("\n");
    return 0;
}


//若使用double（双精度浮点数）则应如下表
/*int main()
{
    int i,n;
    double sum=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum=sum*i;
    printf("%d!=%lf",n,sum);
    printf("\n");
    return 0;
}*/