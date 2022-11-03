#include<stdio.h>
int main(){
    char str[20]="国峻源牛吗？";
    char b[20];
    scanf_s("%s",&b[20]);
    if (b[20] == str[20])
        printf("国峻源真是太牛辣！");
    else
        printf("什么？你觉得国峻源不牛！该杀！");
return 0;
}