#include <stdio.h>

int main()
{
	int i,n;
	int sum;
	
	for(n=1;n<=1000;n++)
	{
		sum=0;
		for(i=1;i<n;i++)
		{
			if(n%i==0)
			{
				sum=sum+i;
			}
			
		}
		if(sum==n)
		{
			printf("%d its factors are ",n);
	        for(i=1;i<n;++i)
	        {
	        	if(n%i==0)
		        {
		        	printf("%d,",i);
		        }
	        }
        	printf("\n");
	    }
    }    
	return 0;
}