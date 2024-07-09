#include <stdio.h>
#include <string.h>

int main(void)
{
  char str[80];

  printf("Enter String containing spaces : ");
  fgets(str, sizeof(str), stdin);

  str[strlen(str) - 1] = '\0';
  printf("This entered string is %s -----This is Test-----\n", str); // String output

  return 0;
}