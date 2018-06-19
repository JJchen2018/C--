#include "stdio.h"
int main()
{
	float x,y;
	int high;

	printf("请输入x坐标的值 ");
	scanf("%f",&x);
	printf("请输入y坐标的值 ");
	scanf("%f",&y);

	if((x-2)*(x-2)+(y-2)*(y-2)>1&&(x+2)*(x+2)+(y-2)*(y-2)>1&&(x-2)*(x-2)+(y+2)*(y+2)>1&&(x+2)*(x+2)+(y+2)*(y+2)>1)
	{
		high=0;
	}
	else
	{
		high=10;
	}
	printf("该点的建筑高度为%d",high);
	return 0;
}

