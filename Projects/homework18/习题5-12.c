#include <stdio.h>
int main()
{
	int peach;
	int rest;
	int i;
	
	peach=0;
	rest=1;
	for(i=9;i>0;i--)
	{
		peach=(rest+1)*2;
		rest=peach;
	}
	printf("猴子在第一天摘了%d个桃子",peach);
	return 0;
}