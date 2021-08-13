#include <stdio.h>

int mian()
{
	char a;
	int i=0;

	printf("请输入一行英文句子：");
	scanf("%c", a);

	while (a=='\n')
	{
		if (a <= 90 && a >= 65)
		{
			i++;
		}
		else
		{
			break;
		}
	}

	printf("%i", i);

	
	
	return 0;

}