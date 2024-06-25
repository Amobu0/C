#include <stdio.h>

void swap(double* pa, double* pb); // �� �Ǽ��� �ٲٴ� �Լ�
void line_up(double* maxp, double* midp, double* minp);	// �Լ� ����

int main(void)
{
	double max, mid, min;

	printf("3�� �Է� : ");
	scanf("%lf %lf %lf", &max, &mid, &min);
	line_up(&max, &mid, &min);
	printf("�� ��� : %.1lf, %.1lf, %.1lf\n", max, mid, min);
	
	return 0;
}

void swap(double* pa, double* pb)
{
	double temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void line_up(double* maxp, double* midp, double* minp)
{	

	if (*maxp < *midp) swap(maxp, midp);
	if (*maxp < *minp) swap(minp, maxp);
	if (*midp < *minp) swap(midp, minp);
}