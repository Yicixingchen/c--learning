#include <stdio.h>
#include <math.h>

int main()
{
	float cun=10000,qu1,qu2,qu3;
	qu1=cun*(1.0+2.75*5*0.01);
	printf("һ���Զ��ڴ�5�꣬ȡ%.2f\n",qu1);
	
	qu2=cun*(1.0+0.0275*3)*(1.0+0.0225*2);
	printf("�ȴ�3�궨�ڣ����ں�Ϣ�ٴ�2�궨��%.2f\n",qu2);
	
	qu3=cun*pow(1.0175,5);
	printf("��1�궨�ڣ�����5��%.2f\n",qu3);
	
	return 0;
}
