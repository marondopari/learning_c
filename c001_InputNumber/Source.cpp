#include<stdio.h>

int main(void)
{
	int a;

	printf("数字を一つ入力してください\n");
	scanf("%c", &a);
	printf("%cを入力しました。\n", a);

	return 0;
}