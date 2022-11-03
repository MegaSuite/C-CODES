#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num,i,temp;
    int judge=1;           
	for (num=6;judge=1;num++)                      
	{
		for (temp=num,i=1;i<=5;i++)
		if ((temp - 1) % 5 == 0) temp = 4 * (temp - 1) / 5;
		else  judge = 0;
		if (judge==1) break;
		else judge = 1;                           
	}
	printf("Total number of fish is %d\n", num);  
	return 0;
}