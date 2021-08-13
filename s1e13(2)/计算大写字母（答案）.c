#include <stdio.h>

int main()
{
    int ch, count = 0;

    printf("请输入一行英文句子：");

    while ((ch = getchar()) != '\n')
    {
        if (ch >= 'A' && ch <= 'Z')
        {
            count = count + 1;
        }
    }

    printf("你总共输入了%d个大写字母！\n", count);

    return 0;
}