#include <stdio.h>

#define STRING char *
#define IF if(
#define THEN ){
#define ELSE }else{
#define FI ;}
#define WHILE while(
#define DO ){
#define OD ;}
#define INT int
#define BEGIN {
#define END }


INT main()
BEGIN
        INT i;
        
        printf("�������������䣺");
		scanf("%d", &i);
		
		IF i<18 THEN
		       printf("��δ��18���꣬����ʹ���������\n");
		ELSE
		       printf("������18���꣬��ӭʹ�ñ����򣬺ٺٺ١�����\n");
		FI
		       
		return 0;
END
