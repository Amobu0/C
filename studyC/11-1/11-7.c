#include <stdio.h>

int main(void)
{
  int num, grade;

  printf("Enter student ID : ");
  scanf("%d", &num);
  getchar();
  printf("Enter your grades : ");
  grade = getchar();
  printf("Student ID : %d, Grades : %c\n", num, grade);

  return 0;
}