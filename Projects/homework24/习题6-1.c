#include <stdio.h>  
int main()
{
	int a[101],i,j;
	for(i=2;i<=100;i++)
	{
		a[i]=1;
	}
	for(i=2;i<=10;i++)
	{
		for(j=i+i;j<=100;j+=i)
		{
			a[j]=0;
		}
	}
	printf("一百以内的素数：");
	for(i=2;i<=100;i++)
	{
		if(a[i])
		{
			printf("%d",i);
			printf(" ");
		}
	}
	return 0;
}