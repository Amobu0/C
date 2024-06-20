// 다음에 다시 도전!!!
#include <stdio.h>

int main(void)
{
	int n;
	int pn;


	printf("2 이상의 정수를 입력하세요 : ");
	scanf_s("%d", &n);

	pn = 1;
	int i;
	for (i = 2; i < n; i++) {

		if ((n % i) == 0) {
			pn = 0;
			break;
		}
	}
	if (pn == 1) {
		printf("소수입니다.\n");
	}else {
		printf("소수가 아닙니다.\n");
	}
	return 0;
}
