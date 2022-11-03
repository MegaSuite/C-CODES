#include<stdio.h>
int main(){
    int k = 1;
    int x;
    int pos = 0;
    int neg = 0;
    int sump = 0;
    int sumn = 0;
    int zero = 0;

    while(k<=10){
        printf("please input 第 %d 个 number:\n",k);
        scanf("%d",&x);
        if (x!=0){
            if(x>0){
                pos ++;
                sump+=x;
            }
            else if(x<0){
                neg ++;
                sumn+=x;
            }
        }
        else{
            zero++;
        }
        k++;
        printf("the number of pos = %d\n",pos);
        printf("the number of neg = %d\n",neg);
        printf("sum of pos= %d\n",sump);
        printf("sum of neg = %d\n",sumn);
        printf("the number of zero = %d\n",zero);
    }
    return 0;
}