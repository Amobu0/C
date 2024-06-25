#include <stdio.h>

int main(void)
{
  int ary[3] = {10, 20, 30};
  int *pa = ary;
  int i;

  printf("value of array : ");
  for (i = 0; i < 3; i++)
  {
    printf("%d ", *pa);
    pa++;
  }

  printf("\n");
  return 0;
}