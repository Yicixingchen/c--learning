#include <stdio.h>

int main(void)
{
	int count=0;
	printf("������һ��Ӣ�ľ��ӣ�");
	while (getchar()!='\n')
	{
		count = count+1;
	}
	printf("���ܹ�������%d���ַ���\n",count);
	return 0;
}
