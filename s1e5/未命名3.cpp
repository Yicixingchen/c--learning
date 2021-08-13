#include <stdio.h>

#define fanqie 3.7
#define jielan 7
#define xiqin 1.3
#define kongxincai 8
#define yangcong 2.4
#define youcai 9
#define huanggua 6.3
#define bailuobo 0.5

int main()
{   float price=fanqie+0.5*(kongxincai+youcai);
	printf("小明需要支付%.2f\n",price);
	
	price=0.5*(3*xiqin+0.5*yangcong+5*huanggua);
	printf("小红需要支付%.2f\n",price);
	
	price=0.5*(10*huanggua+20*bailuobo);
	printf("小甲鱼需要支付%.2f\n",price);
	return 0;
}
