#include <stdio.h>
#include <stdbool.h>

int main()
{
	float i,j;
	char ch;
	float result;
	bool invalid=false;
	
	printf("请输入式子：");
	scanf("%f %c %f",&i,&ch,&j);
	
	switch (ch)
	{
		case '+':printf("结果是：%.2f\n",i+j);break;
		case '-' :printf("结果是：%.2f\n",i-j);break;
		case '*':printf("结果是：%.2f\n",i*j);break;
		case '/':
			if(j!=0) 
			{
				printf("结果是：%.2f\n",i/j);break;
			}
			else
			{
				printf("很遗憾，除数不能为零！\n");
			}
}
	
	
	return 0;
	
}
