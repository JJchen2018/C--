#include <stdio.h>

int main()
{
	int baiwei;
	int shiwei;
	int gewei;
	int shuixianhuashu;
	
	for(baiwei=1;baiwei<10;baiwei++)
	{
		for(shiwei=0;shiwei<10;shiwei++)
		{
			for(gewei=0;gewei<10;gewei++)
			{
				shuixianhuashu=100*baiwei+10*shiwei+gewei;
				if(shuixianhuashu==(baiwei*baiwei*baiwei+shiwei*shiwei*shiwei+gewei*gewei*gewei))
				printf("%d\n",shuixianhuashu);
			}
		}
	}
	
	return 0;
}