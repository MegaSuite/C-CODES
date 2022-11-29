#include <stdio.h>
#include <math.h>
float solution(void)
{
	float x0, f, fd, h; 
	float x = -2;
	do
	{
		x0 = x; 
		f = x0 * x0 * x0 *x0 -2* x0 * x0 + x0;
		fd = 4 * x0 * x0*x0 -4 *x0 + 1;
		h = f / fd;
		x = x0 - h; 
        // printf("所求方程的根为：x=%f\n", x);
	} while (fabs(x-x0) >= 1e-5);
	return x;
}
int main()
{
	float x; 
	x = solution();
	printf("\n");
	printf("所求方程的根为：x=%f\n", x);
	return 0;
}
