#include <stdio.h>
#include "ssebtr1.h"

int main()
{
	unsigned int n��bpm;
	float z;
	float i=getHearRare();
	printf("���������䣺");
	scanf("%d",&n);
	
	bpm=150;
	z=220-n;
	
	palySound("150\n");
	palySound("-1\n");
	
	getHeartRate("%d",i);
	
	if(i>z)
	{
		printf("������ֹͣ�ܲ�������������Σ��...\n");
	}
	
	else if(i>z*0.85)
	{
		printf("������Ų�\n");
		bpm=bpm-20;
		palySound(bpm);
	
	}
	else if (i>z*0.75)
	{
		printf("Come on,��ӿ���࣡\n");
		bpm=bpm+20;
		palySound(bpm);
	}
	else
	{
		palySound(bpm);
	}
	

	
	
	return 0;
}
