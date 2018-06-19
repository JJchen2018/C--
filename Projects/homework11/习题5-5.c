#include <stdio.h>
int main()
{
    int a,n,p,sum;
    int i;
    sum=0;
	printf("请输入一个数字a ");
	scanf("%d",&a);
	printf("请输入位数n ");
	scanf("%d",&n);
    p=a;
	for(i=0;i<n;i++)
	{
		sum+=p;
		p=p*10+a;
	}
	printf("该表达式之和为%d",sum);
	return 0;
}