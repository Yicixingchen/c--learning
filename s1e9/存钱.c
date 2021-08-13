#include <stdio.h>
#include <math.h>

int main()
{
	float cun=10000,qu1,qu2,qu3;
	qu1=cun*(1.0+2.75*5*0.01);
	printf("一次性定期存5年，取%.2f\n",qu1);
	
	qu2=cun*(1.0+0.0275*3)*(1.0+0.0225*2);
	printf("先村3年定期，到期后本息再存2年定期%.2f\n",qu2);
	
	qu3=cun*pow(1.0175,5);
	printf("存1年定期，连续5次%.2f\n",qu3);
	
	return 0;
}
