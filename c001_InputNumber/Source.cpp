#include<stdio.h>

//int main(void)
//{
//	int a;
//
//	printf("数字を一つ入力してください\n");
//	scanf("%d", &a);
//	printf("%dを入力しました。\n", a);
//
//	return 0;
//}

int main(void)
{
	int a;

	printf("数字を一つ入力してください\n");
	scanf_s("%d", &a);
	printf("%dを入力しました。\n", a);

	return 0;
}