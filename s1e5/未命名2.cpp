#include <stdio.h>

#define S(r) 3.14*r*r
#define C(r) 2*3.14*r

int main()
{
	int r=5;
	printf("�뾶Ϊ%d��Բ������ǣ�%.2f,�ܳ��ǣ�%5.2f\n",r,S(r),C(r));
	return 0;
}
