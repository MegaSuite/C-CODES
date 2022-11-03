#include<stdio.h>
int main(void)
{
    char name[20];
    int score;
    printf("Input your name and score,please!\n");
    scanf("%s",name);
    scanf("%d",&score);
    printf("Hello %s!,your score is %d\n",name,score);
    return 0;
}