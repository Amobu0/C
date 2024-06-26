#include <stdio.h>

int main(void)
{
    int ary[3];
    int i;

    *(ary + 0) = 10;              // ary[0] = 10
    *(ary + 1) = *(ary + 0) + 10; // ary[1] = ary[0] +10

    printf("thrid array element keyboard input : ");
    scanf("%d", ary + 2); // &ary[2]

    for (i = 0; i < 3; i++)
    {                              // print all array
        printf("%5d", *(ary + i)); // ary[i]
    }
    printf("\n");
    return 0;
}

/*
    100
    3.5
    116
    0.5
    7.4
    (116-100) / sizeof(double) = 2

    o x o x o o

    for (i = 0; i < 3; i++)
    {
        printf("%.1lf", *pb);
        pb++;
    }
*/