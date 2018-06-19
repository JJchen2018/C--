#include "stdio.h"
#include "math.h"
int main()
{
	float zhengShu;
	float pingFanggen;

	printf("请输入一个小于1000的正数 ");
	scanf("%f",&zhengShu);

	if(zhengShu>1000||zhengShu<0)
	{
		printf("请重新输入一个小于1000的正数 ");
		scanf("%f",&zhengShu);
		pingFanggen=sqrt(zhengShu);
	}
	else
	{
        pingFanggen=sqrt(zhengShu);
	}
		printf("正数=%f,平方根=%2.0f",zhengShu,pingFanggen);

	return 0;
}


		

