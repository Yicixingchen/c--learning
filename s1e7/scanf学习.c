#include <stdio.h>

int main()
{
	char c;
	int i;
	int j;
	
	scanf("%c%d%x",&c,&i,&j);
	printf("����c��ֵ�ǣ�%c\n",c);
	printf("����i��ֵ�ǣ�%d\n",i);
	printf("����j��ֵ�ǣ�%#X(%d)\n",j,j);
	
	return 0;
}
