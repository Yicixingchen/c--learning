#include <stdio.h> 

int main()
{
	char count,i;
	
	printf("ÇëÊäÈëÒ»¾äÓ¢Óï£º");
	count =getchar();
	
	
	while (count>=65&&count <=90)
	{
		i=count+32;
		putchar(i);
		
		
	}
	putchar('\n');
	
	while (count>=97&&count<=122)
	{
		i=count-32;
		putchar(i);
	}
	
	putchar('\n');
	
	return 0; 
}
