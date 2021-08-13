#include <stdio.h>

int main()
{
	char a;
	printf("请输入一个字符：");
	scanf("%c",&a);
	
	if (122>=a>=97)
	{
		a=a-32;
		printf("转换结果为：%c\n",a);

	}
	else if(65>=a>=90)
	{
		a=a+32;
		printf("转换结果为：%c\n",a);
		
		
	}
	else
	{
		printf("不转换\n");
	}
	return 0;
}
