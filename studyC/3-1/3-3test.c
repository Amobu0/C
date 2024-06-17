#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char ch;

	printf("문자열을 입력하세요 : ");
	scanf("%c", &ch);
	printf("%c문자의 아스키 코드 값은 %d입니다.", ch, ch);

	return 0;
}