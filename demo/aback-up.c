#include <stdio.h>
void menu()
{
    printf("Please choose one of the following:\n"
    "1)copy files\n2)move files\n3)remove files\n4)quit\n"
    "Enter the number of your choice:\n");
}
int main_body(int a,int b)
{
    int c=0;
    int flag;
    flag=scanf("%d",&c);
    if (flag==1&&c<=a&&c>=b) printf("%d",c);
    else if(flag==0) printf("%d",4);
    else
    {
        menu();
        main_body(a,b);
    }
}
int main()
{
    menu();
    int a=44,b=3;
    main_body(a,b);
    return 0;
}