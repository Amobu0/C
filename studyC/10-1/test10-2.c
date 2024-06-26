#include <stdio.h>

void input_nums(int *lotto_nums);
void print_nums(int *lotto_nums);

int main(void)
{
  int lotto_nums[6];

  input_nums(lotto_nums);
  print_nums(lotto_nums);
  return 0;
}

void input_nums(int *lotto_nums)
{
  for (int i = 0; i < 6; i++)
  {
    printf("Enter number : ");
    scanf("%d", lotto_nums + i);
    for (int j = 0; j < i; j++)
    {
      if (lotto_nums[j] == lotto_nums[i])
      {
        printf("The same number exists");
        printf("\n");
        i--;
      }
    }
  }
}

void print_nums(int *lotto_nums)
{
  for (int i = 0; i < 6; i++)
  {
    printf("%3d", lotto_nums[i]);
    printf("\n");
  }
}