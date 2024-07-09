#include <stdio.h>

int main(void)
{
  char str[80];

  printf("Enter string containing spaces : ");
  gets(str);
  printf("The entered string is %s\n", str);

  return 0;
}