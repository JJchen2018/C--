#include <stdio.h>
#include <math.h>
int main()
{
	float a;
	float x0,x1;
	printf("������һ������ ");
	scanf("%f",&a);
	x0=a/2;  
    x1=(x0+a/x0)/2;
    while(fabs(x1-x0)>=1e-5)
    {
    	x0=x1;
    	x1=(x0+a/x0)/2;
    }
    printf("������ƽ����Ϊ%0.2f",x1);
    return 0;
}