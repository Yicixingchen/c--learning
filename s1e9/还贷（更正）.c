#include <stdio.h>
#include <math.h>


int main() 
{
	float price,area,yir,mir;
	float interest,loan;
	float ave_repay,down_payment;
	float total_price,total_repay;
	int ratio,time;
	
	printf("�����뵥�ۣ�Ԫ/ƽ������");
	scanf("%f",&price);
	printf("�����������");
	scanf("%f",&area);
	printf("�����밴�ҳ�����");
	scanf("%d",&ratio) ;
	printf("�����밴��������");
	scanf("%d",&time);
	printf("�����뵱ǰ��׼�����ʣ�");
	scanf("%f",&yir);
	
	total_price=area*price;
	loan=total_price*ratio *0.1;
	ave_repay=loan*(yir/100/12*pow(1+yir/100/12,time*12))/(pow(1+yir/100/12,time*12)-1);
	interest=time*12*ave_repay-loan;
	total_repay=ave_repay*time*12;
	down_payment=total_price*(1-ratio*0.1); 
	
	
	printf("===========������===========\n");
	printf("�����ܶ%.2fԪ\n",total_price);
	printf("���ڸ��%.2fԪ\n",down_payment);
	printf("�����ܶ%.2fԪ\n",loan);
	printf("�����ܶ%.2fԪ\n",total_repay);
	printf("֧����Ϣ��%.2fԪ\n",interest);
	printf("�¾����%.2fԪ\n",ave_repay);
	
	return 0;
	
}
