// ������ �ٽ� ����!!!
#include <stdio.h>

int main(void)
{
	int n;
	int pn;


	printf("2 �̻��� ������ �Է��ϼ��� : ");
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
		printf("�Ҽ��Դϴ�.\n");
	}else {
		printf("�Ҽ��� �ƴմϴ�.\n");
	}
	return 0;
}
