#include<stdio.h>
int main(){
    int a,b;
    char c;
    scanf("%d%c%d",&a,&c,&b);
    switch(c){
        case '+':printf("a+b=%d",a+b); break;
        case '-':printf("a-b=%d",a-b); break;
        case '*':printf("a*b=%d",a*b); break;
        case '/':printf("a/b=%d",a/b); break;
    }
    return 0;
}