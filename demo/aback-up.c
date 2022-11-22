#include<stdio.h>
int main()
{
char ch1[100]={0};
char ch2[100]={0};
int i=0,c=0;
int j=0;
while((ch1[i]=getchar())!='\n') i++;
while((ch2[j]=getchar())!='\n') j++;
for(c=0;c<100;c++)
{
    if(ch1[c]=='\n')
    {
        for (int x=0;x<100;x++)
        {
            if(ch2[x]=='\n') break;
            ch1[c]=ch2[x];
            c++;
        }
        break;
    }
    continue;
}
printf("%s",ch1);
return 0;
}