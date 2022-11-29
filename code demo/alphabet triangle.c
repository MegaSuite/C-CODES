#include<stdio.h>

int main(void)
{
    int i,j,COUNT;
    char a;
    printf("请输入字母：");
    scanf_s("%c",&a);
    if (a>='A'&&a<='Z'){
        COUNT = a-'A'+1; 
        for(i=1;i<=COUNT;i++)
        {
            for(j=0;j<2*(COUNT-i);j++)
                printf(" ");
            for(j=0,a = 'A';j<i;j++,a++)
                printf("%c ",a);
             for(j=1,a = 'A'+i-2;j<i;j++,a--)
                printf("%c ",a);
        printf("\n");  
        }

        
    }
    else{
        COUNT = a-'a'+1; 
        for(i=1;i<=COUNT;i++)
        {
            for(j=0;j<2*(COUNT-i);j++)
                printf(" ");
            for(j=0,a = 'a';j<i;j++,a++)
                printf("%c ",a);
            for(j=1,a = 'a'+i-2;j<i;j++,a--)
                printf("%c ",a);
            printf("\n");  
        }
    }
    return 0;
}

