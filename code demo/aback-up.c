#include<stdio.h>
void FMax(int a[],int n,int* max,int* min);
int main()
{
	int a[5],n=0;
	for(n=0;n<5;n++)
	{
		scanf_s("%d",&a[n]);
	}
	int big=a[0],small=a[0];
	FMax(a,n,&big,&small);
	printf("Max:%d\n",big);
	printf("Min:%d\n",small);
	return 0;
	
	
}
void FMax(int a[],int n,int* max,int* min)
{
	for (int i=0;i < n; i++)
	{
		if (*max<a[i]) 
			// *max=a[i];
			*max=*(a+i);
		else if (*min>a[i]) 
			// *min=a[i];
			*min=*(a+i);
	}
}