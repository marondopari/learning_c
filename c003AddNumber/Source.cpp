#include<stdio.h>

int main(void)
{
	int a, b;

	printf("一つ目の数字を入力して下さい\n");

	scanf_s("%d",&a);

	printf("二つ目の数字を入力して下さい\n");

	scanf_s("%d", &b);

	printf("%d+%d=%d\n", a, b, a + b);

	return 0;
}