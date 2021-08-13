#include <Servo.h> 

#define LEFT_MOTO_GO  8
#define LEFT_MOTO_BACK  9
#define RIGHT_MOTO_GO  10
#define RIGHT_MOTO_BACK  11


int main(void)
{
	
	
	
	return 0;
}

void loop()
{
	char ch;
	printf("请输入指令：");
	scanf("&c",&ch);
	
	switch(ch)
	{
		case 'g':digitalWrite(LEFT_MOTO_GO,HIGH),digitalWrite(LEFT_MOTO_BACK,LOW),digitalWrite(RIGHT_MOTO_GO,HIGH),digitalWrite(RIGHT_MOTO_BACK,LOW);break;
		case 'b':digitalWrite(LEFT_MOTO_GO,LOW),digitalWrite(LEFT_MOTO_BACK,HIGH,digitalWrite(RIGHT_MOTO_GO,LOW),digitalWrite(RIGHT_MOTO_BACK,HIGH);break;
		case 'r':digitalWrite(LEFT_MOTO_GO,HIGH),digitalWrite(LEFT_MOTO_BACK,LOW),digitalWrite(RIGHT_MOTO_GO,LOW),digitalWrite(RIGHT_MOTO_BACK,HIGH);break;
		case 'l':digitalWrite(LEFT_MOTO_GO,LOW),digitalWrite(LEFT_MOTO_BACK,HIGH),digitalWrite(RIGHT_MOTO_GO,HIGH),digitalWrite(RIGHT_MOTO_BACK,LOW);break;
		default:printf("指令不正确！！\n")
		
	}
	
}
