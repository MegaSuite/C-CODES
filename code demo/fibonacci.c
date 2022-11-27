#include <stdio.h>
int main () {
    long long num1,num2,num3,line;
    num1=1;
    num2=1;
    
    printf("How many lines do you want?\n");
    scanf_s("%lld",&line);
    if(line==1) printf("%lld\n",num1);
    else if(line==2) printf("%lld\n%lld\n",num1,num2);
    else{
        printf("%lld\n%lld\n",num1,num2);
        for(int i = 1;i<=line-2;i++){
            num3=num1+num2;
            printf("%lld\n",num3);
            num1=num2;
            num2=num3;
        } 
    }
return 0;
}