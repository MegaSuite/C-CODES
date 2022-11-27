#include<stdio.h>
void show(char str[]);
int main(void)
{
    char name[20];
    printf("Input your name please!\n");
    scanf("%s",name);
    show(name);
    return 0;
}
void show(char str[]){
    printf("Hello %s!\n",str);
}