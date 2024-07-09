#include <stdio.h>

int main(void)
{
  char str[80];

  printf("String input : ");
  scanf("%s", str);
  printf("First word : %s\n", str);
  scanf("%s", str);
  printf("Second word remaining in buffer : %s\n", str);

  return 0;
}
