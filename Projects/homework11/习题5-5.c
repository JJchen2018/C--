#include <stdio.h>
int main()
{
    int a,n,p,sum;
    int i;
    sum=0;
	printf("������һ������a ");
	scanf("%d",&a);
	printf("������λ��n ");
	scanf("%d",&n);
    p=a;
	for(i=0;i<n;i++)
	{
		sum+=p;
		p=p*10+a;
	}
	printf("�ñ��ʽ֮��Ϊ%d",sum);
	return 0;
}