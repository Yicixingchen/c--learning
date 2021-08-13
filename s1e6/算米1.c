#include <stdio.h> 
#include <math.h>

int main()
{
	float i;
	double mi;
	double temple;
	for (i=0; i < 64; i++)
	{
		pow(2,i);
		mi = mi + temple;
	}
	
	double jin =mi/25000;
	
	printf("舍罕王应该给予达依尔%d粒\n,如果每25000粒麦子重1kg，那么舍罕王应该给予达依尔%d",mi,jin);
	
	return 0;
	
}
