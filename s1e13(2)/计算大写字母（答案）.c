#include <stdio.h>

int main()
{
    int ch, count = 0;

    printf("������һ��Ӣ�ľ��ӣ�");

    while ((ch = getchar()) != '\n')
    {
        if (ch >= 'A' && ch <= 'Z')
        {
            count = count + 1;
        }
    }

    printf("���ܹ�������%d����д��ĸ��\n", count);

    return 0;
}