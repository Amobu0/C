#include <stdio.h>

int main(void)
{

    int len, max = 0;
    char ch;
    while (1)
    {
        ch = getchar();
        if (ch == -1)
            break;
        len = 0;
        while (ch != '\n')
        {
            len++;
            ch = getchar();
        }
        if (max < len)
        {
            max = len;
        }
    }
    printf("length of longest word : %d\n", max);
    return 0;
}