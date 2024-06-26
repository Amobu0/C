#include <stdio.h>

int main(void)
{
  char ch;

  printf("Enter characters : ");
  ch = getchar();
  printf("ASCII code value of '%c' character %d\n", ch, ch);
  return 0;
}