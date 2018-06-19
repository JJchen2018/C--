#include <stdio.h>
int main()
{
	int i;
	int sum,p;
	sum=0;
	p=1;
	
	for(i=1;i<=20;i++)
	{
			p=p*i;
			sum=sum+p;
	}
	printf("1!+2!+3!+...+20!=%d",sum);

	return 0;
}