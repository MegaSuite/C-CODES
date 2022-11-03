#include<stdio.h>
int main()
{
	int i,j,t,a[10];
    printf("Let's start our game!\n");
    printf("\n");
	printf("请输入10个整数:\n");
    printf("\n");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);    //输入10个整数存到数组里
        printf("num[%d]=%d\n",i,a[i]);
        printf("\n");
    }
	for(i=0;i<9;i++)
		for(j=i+1;j<10;j++)
			if(a[i]>a[j])     //如果前一个数比后一个大，则调换值
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
    printf("---------------\n");
    printf("排序成功！\n");
    printf("\n");
	for(i=0;i<10;i++){
		printf("num[%d]=%d\n",i,a[i]);
	    printf("\n");
    }
	return 0;
}
