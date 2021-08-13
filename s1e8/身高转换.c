#include <stdio.h> 

int main()
{
	char i;
	unsigned int s;
	unsigned int t;
	printf("请输入您的姓名：\n");
	scanf("%s",&i);
	printf("请输入您的身高(cm)：\n");
	scanf("%d",&s);
    printf("请输入您的体重(kg)：\n");
    scanf("%d",&t);
    printf("===========正在为您转换=====================\n");
    int t1=t*2.204;
    int s1=s*0.3937;
    
    printf("%c的身高是%.2u(in),体重是%.2u(lb)\n",i,s1,t1);
    return 0;
    
}
