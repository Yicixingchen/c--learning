#include <stdio.h>
#include "ssebtr1.h"

int main()
{
	unsigned int n，bpm;
	float z;
	float i=getHearRare();
	printf("请输入年龄：");
	scanf("%d",&n);
	
	bpm=150;
	z=220-n;
	
	palySound("150\n");
	palySound("-1\n");
	
	getHeartRate("%d",i);
	
	if(i>z)
	{
		printf("请马上停止跑步，否则有生命危险...\n");
	}
	
	else if(i>z*0.85)
	{
		printf("请放慢脚步\n");
		bpm=bpm-20;
		palySound(bpm);
	
	}
	else if (i>z*0.75)
	{
		printf("Come on,请加快节奏！\n");
		bpm=bpm+20;
		palySound(bpm);
	}
	else
	{
		palySound(bpm);
	}
	

	
	
	return 0;
}
