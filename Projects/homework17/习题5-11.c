#include <stdio.h>
int main()
{
	int i;
	float s,n;
	s=0;
	n=100;
    for(i=1;i<=10;i++)
    {
        s=s+2*n;
        n=n/2.0;
    }
    s=s-100;
    printf("10����ع����� %5f��,��10�ε�%5f�׸�",s,n);
}