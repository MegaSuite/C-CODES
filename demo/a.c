/******************  begin *********************/
/*实验4-3跟踪调试题程序利用R计算圆的面积s*/ 
#include<stdio.h>
#include <assert.h>
#define  R
int integer_fraction(float x);
int main(void)
{
	float  r;
   double s;
	int s_integer=0;
   scanf_s("%f",&r);
   #ifdef  R
      s=(3.14159)*(r);
      s=(s)*(r);
      printf("Area of round is: %lf\n",s);
      s_integer=integer_fraction(s);
      // assert((s-s_integer)<0.5);
      printf("The integer fraction of area is %d\n", s_integer+1);
   #endif
   return 0;
}

int integer_fraction(float x)
{
  int i=x;
  return i;
}




/******************   end  *********************/
