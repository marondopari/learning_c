#include<stdio.h>

int main(void)
{
	char str[ 256 ];

	printf("���������͂��ĉ�����\n");
	scanf_s("%s", &str, sizeof(str));
	printf("�������%s�ł�", str);

	return 0;
}