#include <stdio.h>

#define S(r) 3.14*r*r
#define C(r) 2*3.14*r

int main()
{
	int r=5;
	printf("半径为%d的圆，面积是：%.2f,周长是：%5.2f\n",r,S(r),C(r));
	return 0;
}
