#include <stdio.h> 

int main(void)
{
	char ch;
	
	printf("������ɼ���");
	scanf("%c",&ch);
	
	switch (ch)
	{
		case 'A': printf("��ĳɼ���90�����ϣ�\n"); break;
		case 'B': printf("��ĳɼ���80~89�֣�\n"); break;
		case 'C': printf("��ĳɼ���70~79�֣�\n"); break;
		case 'D':printf("��ĳɼ���60~69�֣�\n"); break;
		case 'E':printf("��ĳɼ���60�����£�\n"); break;
		default: printf("��������Ч�ɼ�������\n"); break;
		
	}
	return 0;
}
