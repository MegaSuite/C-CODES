#include<stdio.h>
int main()
{
    int sum=0,q,t=1;
    scanf("%d",&q);
    for(int i=1;i<=q;i++) //变量i的存在是为了计数
    {
        sum+=t;
        t++;
    }
    printf("sum = %d",sum);
    return 0;
}
