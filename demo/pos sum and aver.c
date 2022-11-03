#include<stdio.h>
int main(){
    int k = 1;
    int sum = 0;
    int x;
    float ave;
    float pos = 0;
    while (k <= 10)
    {
        scanf("%d",&x);
        if (x>0){
            sum+=x;
            pos++;
        }
        k++;
    }

    if (sum > 0){
        printf("累加和:%d\n",sum);
        ave=sum/pos;
        printf("平均值:%.1f",ave);
    }
    else{
        printf("累加和:0\n");
        printf("平均值:0\n");

    }
}