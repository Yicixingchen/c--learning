#include <stdio.h>
#include <stdbool.h>

int main()
{
        float op1, op2;
        char ch;
        float result;
        bool invalid = false;

        printf("������ʽ�ӣ�");
        scanf("%f %c %f", &op1, &ch, &op2);

        switch (ch)
        {
                case '-': op2 = -op2; // no break
                case '+': result = op1 + op2; break;
                case '*': result = op1 * op2; break;
                case '/':
                        if (op2 != 0)
                        {
                                result = op1 / op2;
                                break;
                        }
                        else
                        {
                                invalid = true;
                                break;
                        }
        }

        if (invalid)
        {
                printf("��������Ϊ�㣡\n");
        }
        else
        {
                printf("����ǣ�%.2f\n", result);
        }

        return 0;
}
