#include <stdio.h>

void func(int (*fp)(int, int));
int sum(int a, int b);
int mul(int a, int b);
int max(int a, int b);

int main(void)
{
  int sel;

  printf("01 두 정수의 합\n");
  printf("02 두 정수의 곱\n");
  printf("03 두 정수 중에서 큰 값 계산\n");
  printf("원하는 연산을 선택하세요 : ");
  scanf("%d", &sel);

  switch (sel)
  {
  case 1:
    func(sum);
    break;
  case 2:
    func(mul);
    break;
  case 3:
    func(max);
    break;
  }

  return 0;
}

void func(int (*fp)(int, int))
{
}