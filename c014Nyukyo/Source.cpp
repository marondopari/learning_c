#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char str[256];

	printf_s("入居者を入力して下さい\n");

	scanf_s("%s", &str, sizeof(str));

	printf_s("入居者は\n");
	printf_s("%s\n", &str);
	printf_s("です");
}