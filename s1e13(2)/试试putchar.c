#include <stdio.h>

int main()
{
    int ch = 'A';
    int count = 3;

    while (count)
    {
        ch = ch + count;
        count = count - 1;
        putchar(ch);
    }

    return 0;
}