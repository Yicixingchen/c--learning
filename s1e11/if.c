#include <stdio.h>

int main (void)
{
	int i;
	
	printf("您老贵庚啊？");
	scanf("%d",&i);
	
	if(i>=18)
	{
		printf("进门左拐！\n");
	}
    else
    {
    	printf("慢走不送！");
	}
	return 0;
}
