#include <stdio.h>

int main()
{
	char a;
	printf("������һ���ַ���");
	scanf("%c",&a);
	
	if (122>=a>=97)
	{
		a=a-32;
		printf("ת�����Ϊ��%c\n",a);

	}
	else if(65>=a>=90)
	{
		a=a+32;
		printf("ת�����Ϊ��%c\n",a);
		
		
	}
	else
	{
		printf("��ת��\n");
	}
	return 0;
}
