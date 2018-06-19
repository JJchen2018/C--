#include <stdio.h>

int main()
{
	int i;
	double n;
	double sum;
	n=2;
	sum=0;
	
	for(i=1;i<=20;i++)
	{
		n=1.0/n+1;
		sum=sum+n;
	}
	printf("这个数列前20项之和为%f",sum);
	return 0;
}