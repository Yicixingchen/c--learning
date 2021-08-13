#include <stdio.h>

int main()
{
	float nian;
	
	printf("请输入年份：");
	scanf("%d",&nian);
	
	printf("%d\n",nian/4-nian/4.0&&nian/4-nian/4.0);
	printf("结果为1-----不是闰年，\n结果为0------是闰年\n");
	
	return 0;
}

