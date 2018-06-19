#include <stdio.h>

int main()
{
	int k;
	double sum;
	sum=0;
	
	for(k=1;k<=100;k++)
	{
			sum=sum+k;
	}
	for(k=1;k<=50;k++)
	{
			sum=sum+k*k;
	}
	for(k=1;k<=10;k++)
	{
			sum=sum+1.0/k;
	}
	printf("sum=%f",sum);

	return 0;
}