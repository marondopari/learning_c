#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char str[256];

	printf_s("�����҂���͂��ĉ�����\n");

	scanf_s("%s", &str, sizeof(str));

	printf_s("�����҂�\n");
	printf_s("%s\n", &str);
	printf_s("�ł�");
}