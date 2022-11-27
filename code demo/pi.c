/********** Begin **********/
#include<stdio.h>
#include<math.h>
int main(){
    int tag=1,n=1;//tag表示项数的正负号
    double sum=0.0,t=1.0,c;
    scanf("%lf",&c);
    while(fabs(t)>=c)//fabs(t)求t的绝对值
    {
        sum=sum+t;
        tag*=-1;
        n+=2;
        t=1.0/n*tag;
    }
    sum=sum+t;
    printf("%.6lf",4*sum);
    return 0;
}