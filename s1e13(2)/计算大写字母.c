#include <stdio.h>

int mian()
{
	char a;
	int i=0;

	printf("������һ��Ӣ�ľ��ӣ�");
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