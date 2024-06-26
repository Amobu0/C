#include <stdio.h>

int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
void print_month(int *mp);

int main(void)
{
  print_month(month);
  printf("\n");
  return 0;
}

void print_month(int *mp)
{
  int i;
  for (i = 0; i < 12; i++)
  {
    printf("%5d", mp[i]);
    if (i % 5 == 4)
      printf("\n");
  }
}