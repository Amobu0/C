#include <stdio.h>

int main(void)
{
  int ary1[4] = {1, 2, 3, 4};
  int ary2[5] = {11, 12, 13, 14};
  int ary3[5] = {21, 22, 23, 24, 25};
  int *pary[3] = {ary1, ary2, ary3};
  int i, j;

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 5; j++)
    {
      printf("%5d", pary[i][j]);
    }
    printf("\n");
  }
  printf("%5d\n", pary[2][2]);
  return 0;
}