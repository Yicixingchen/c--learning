#include <stdio.h>

int main()
{
    int ch;

    printf("������һ��Ӣ�ľ��ӣ�");

    while ((ch = getchar()) != '\n')
    {
        if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch - 'A' + 'a';
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            ch = ch - 'a' + 'A';
        }

        putchar(ch);
    }

    putchar('\n');

    return 0;
}