#include<stdio.h>

int main(void)
{
	char str[ 256 ];

	printf("文字列を入力して下さい\n");
	scanf_s("%s", &str, sizeof(str));
	printf("文字列は%sです", str);

	return 0;
}