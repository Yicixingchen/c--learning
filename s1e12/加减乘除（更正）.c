#include <stdio.h>
#include <stdbool.h>

int main()
{
	float i,j;
	char ch;
	float result;
	bool invalid=false;
	
	printf("������ʽ�ӣ�");
	scanf("%f %c %f",&i,&ch,&j);
	
	switch (ch)
	{
		case '+':printf("����ǣ�%.2f\n",i+j);break;
		case '-' :printf("����ǣ�%.2f\n",i-j);break;
		case '*':printf("����ǣ�%.2f\n",i*j);break;
		case '/':
			if(j!=0) 
			{
				printf("����ǣ�%.2f\n",i/j);break;
			}
			else
			{
				printf("���ź�����������Ϊ�㣡\n");
			}
}
	
	
	return 0;
	
}
