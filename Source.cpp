#include<stdio.h>

int main(void)
{
	char str[256];

	printf("文字列表示を表示してください\n");
	scanf_s("%s", &str, sizeof(str));
	printf("%sです",str);

	return 0;
}