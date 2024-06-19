#include <stdio.h>

int main(void){
int a, b, g;
char c;

printf("사칙연산 입력(정수): ");
scanf_s("%d%c%d", &a, &c, 1, &b);

if (c == '+')
{
	g = a + b;
	printf("%d%c%d=%d", a, c, b, g);
}
else if (c == '-')
{
	g = a - b;
	printf("%d%c%d=%d", a, c, b, g);
}
else if (c == '*')
{
	g = a * b;
	printf("%d%c%d=%d", a, c, b, g);
}
else
{
	g = a / b;
	printf("%d%c%d=%d", a, c, b, g);
}
}