#include <stdio.h>

int main(void)
{
	int i,j;
	char ch;
	
	printf("������ʽ�ӣ�");
	scanf("%f%c%f",&i,&ch,&j);
	
	switch (ch)
	{
		case '+':printf("����ǣ�%.2f\n",i+j);
		case '-' :printf("����ǣ�%.2f\n",i-j);
		case '*':printf("����ǣ�%.2f\n",i*j);
		case '/':printf("����ǣ�%.2f\n",i/j);
		
	}
	if(ch=='/')
	{
		if(j==0)
		{
			printf("���ź�����������Ϊ�㣡\n");
		}
	}
	
	
	return 0;
	
}
