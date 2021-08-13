#include <stdio.h>

int main(void)
{
	float h,s; 
	printf("请输入华氏度：");
	scanf("%f",&h);
	s=(h-32)*5/9;
	printf("转换为摄氏度是：%.2f\n",s);
	return 0;
	
}
