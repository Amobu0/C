#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[80], str2[80];
	char temp[80];

	printf("�� ���ڿ� �Է� : ");
	scanf_s("%s %s", str1, sizeof(str1), str2, sizeof(str2));
	printf("�ٲٱ� �� : %s, %s\n", str1, str2);

	strcpy(temp, str1);
	strcpy(str1, str2);
	strcpy(str2, temp);
	printf("�ٲ� �� : %s, %s\n", str1, str2);

	return 0;
}