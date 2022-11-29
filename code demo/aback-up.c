#include<stdio.h>
void sharp(char ch);
int main()
{
    char line[10]={0};
    int i=0;
    while((line[i]=getchar())!='\n')
    {
        i++;
    }
    // gets(line);
    for (int x=0;x<9;x++)
    {
        sharp(line[x]);
        printf("%c",line[x]);
    }

}
void sharp(char ch)
{
    if(ch>='0'&&ch<='9') printf("#");
} 