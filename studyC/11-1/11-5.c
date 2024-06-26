#include <stdio.h>

int main(void)
{
  int res;
  char ch;

  while (1)
  {
    res = scanf("%c", &ch);
    if (res == -1)
      break;
    printf("%5d", ch);
  }

  return 0;
}