#include <stdio.h>



int main(void)
{
	double weight, height, BMI;

	printf("몸무게(kg)와 키(cm) 입력 : ");
	scanf_s("%lf %lf", &weight, &height);

	BMI = weight / ((height / 100) * (height / 100));
	printf("%s", (BMI >= 20.0 && BMI < 25.0) ? "표준입니다." : "체중관리가 필요합니다.");

	return 0;

}