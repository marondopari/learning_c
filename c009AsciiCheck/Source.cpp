#include <stdio.h>

int main(void)
{
	char mozi;	//char�^�̕ϐ�
	printf("1��������͂��ĉ�����\n");
	scanf_s("%c", &mozi);	//�����̓���

	//������������
	if (mozi >= 'a'&&mozi <= 'z')
	{
		printf("�������ł�\n");
	}

	//�啶��������
	if (mozi >= 'A'&&mozi <= 'Z')
	{
		printf("�啶���ł�\n");
	}

	//����������
	if (mozi >= '0'&&mozi <= '9')
	{
		printf("�����ł�\n");
	}

	else
	{
		printf("�L���ł�");
	}
}