#include <stdio.h> 

int main()
{
	char i[256];
	float s,t;
	printf("����������������");
	scanf("%s",&i);
	printf("�������������(cm)��");
	scanf("%f",&s);
    printf("��������������(kg)��");
    scanf("%f",&t);
    printf("===========����Ϊ��ת��=====================\n");
    t=t*2.204;
    s=s*0.393;
    
    printf("%s�������%.2f(in),������%.2f(lb)��\n",i,s,t);
    return 0;
    
}
