#include <stdio.h>

int main()
{
        char ch;

        printf("请输入一个字符：");
        scanf("%c", &ch);

        if (ch >= 'A' && ch <= 'Z')
        {
                ch = ch + 32; // ch加32，变成小写，然后赋值回ch
        }
        else if (ch >= 'a' && ch <= 'z')
        {
                ch = ch - 32; // 同上
        }

        printf("%c\n", ch);

        return 0;
}
