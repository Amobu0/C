#include <stdio.h>



int main(void)
{
	double weight, height, BMI;

	printf("������(kg)�� Ű(cm) �Է� : ");
	scanf_s("%lf %lf", &weight, &height);

	BMI = weight / ((height / 100) * (height / 100));
	printf("%s", (BMI >= 20.0 && BMI < 25.0) ? "ǥ���Դϴ�." : "ü�߰����� �ʿ��մϴ�.");

	return 0;

}