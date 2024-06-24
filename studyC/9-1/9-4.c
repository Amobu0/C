//#include <stdio.h>
//
//int main(void)
//{
//	int a = 10, b = 20;
//	const int* pa = &a;
//
//	printf("변수 a 값 : %d\n", *pa); //포인터를 간접 참조해 a출력
//	pa = &b;
//	printf("변수 b 값 : %d\n", *pa); //포인터를 간접 참조해 b출력
//	pa = &a;
//	a = 20;
//	printf("변수 a 값 : %d\n", *pa);
//
//	return 0;
//}