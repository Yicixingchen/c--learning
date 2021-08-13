#include <stdio.h>

int main()
{
	unsigned int i;
	printf("ÇëÊäÈë³É¼¨£º");
	scanf("%d",&i) ;

	if (100>=i>=90)
	{
		printf("A\n");
	}
	else if(i>=80)
	{
		printf("B\n");
	}
	else if(i>=70)
	{
		printf("C\n");
	}
	else if(i>=60)
	{
		printf("D\n");
	}
	else
	{
		printf("E\n");
	}
	
	return 0;

}
