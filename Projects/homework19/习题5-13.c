#include <stdio.h>
#include <math.h>
int main()
{
	float a;
	float x0,x1;
	printf("请输入一个正数 ");
	scanf("%f",&a);
	x0=a/2;  
    x1=(x0+a/x0)/2;
    while(fabs(x1-x0)>=1e-5)
    {
    	x0=x1;
    	x1=(x0+a/x0)/2;
    }
    printf("该数的平方根为%0.2f",x1);
    return 0;
}