#include<stdio.h>
int main()
{
	char password[20] = { 0 };
	//输入密码
	printf("Input password:");
	scanf("%s", password);
    //---清理缓冲区---
	int temp = 0;
	while ((temp = getchar()) != '\n')
	{
		;
	}
	//确认密码
	printf("Confirm password(Y/N):");
	int ch = 0;
	ch = getchar();
	//判断是否确认成功
	if (ch == 'Y')
	{
		printf("success!\n");
	}
	else
	{
		printf("defeat!\n");
	}
	return 0;
}
