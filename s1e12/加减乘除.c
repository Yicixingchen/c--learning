#include <stdio.h>

int main(void)
{
	int i,j;
	char ch;
	
	printf("请输入式子：");
	scanf("%f%c%f",&i,&ch,&j);
	
	switch (ch)
	{
		case '+':printf("结果是：%.2f\n",i+j);
		case '-' :printf("结果是：%.2f\n",i-j);
		case '*':printf("结果是：%.2f\n",i*j);
		case '/':printf("结果是：%.2f\n",i/j);
		
	}
	if(ch=='/')
	{
		if(j==0)
		{
			printf("很遗憾，除数不能为零！\n");
		}
	}
	
	
	return 0;
	
}
