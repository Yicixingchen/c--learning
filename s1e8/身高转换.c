#include <stdio.h> 

int main()
{
	char i;
	unsigned int s;
	unsigned int t;
	printf("����������������\n");
	scanf("%s",&i);
	printf("�������������(cm)��\n");
	scanf("%d",&s);
    printf("��������������(kg)��\n");
    scanf("%d",&t);
    printf("===========����Ϊ��ת��=====================\n");
    int t1=t*2.204;
    int s1=s*0.3937;
    
    printf("%c�������%.2u(in),������%.2u(lb)\n",i,s1,t1);
    return 0;
    
}
