#include <stdio.h>
#include <math.h> 

int main(void)
{
	int h;
	unsigned s;
	printf("请输入华氏度：\n");
	scanf("%c\n",&h);
	s=(h-32)*5/9;
	printf("转换为摄氏度是：%.2u\n",s);
	return 0;
	
}
