#include <stdio.h> 

int main()
{
	char i[256];
	float s,t;
	printf("请输入您的姓名：");
	scanf("%s",&i);
	printf("请输入您的身高(cm)：");
	scanf("%f",&s);
    printf("请输入您的体重(kg)：");
    scanf("%f",&t);
    printf("===========正在为您转换=====================\n");
    t=t*2.204;
    s=s*0.393;
    
    printf("%s的身高是%.2f(in),体重是%.2f(lb)。\n",i,s,t);
    return 0;
    
}
