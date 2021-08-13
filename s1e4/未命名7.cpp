#include <stdio.h>

int main()
{
	int r;
	float c;
	float s;
	
	r=5;
	c=2*3.14*r;
	s=3.14*r*r;
	
	printf("圆的周长是：%4.2f,面积是%.2f\n",c,s);
	return 0;
	
}
