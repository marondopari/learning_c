#include <stdio.h>

//int main(void)
//{
//	char mozi;	//char�^�̕ϐ�
//	printf("1��������͂��ĉ�����\n");
//	scanf_s("%c", &mozi);	//�����̓���
//
//	//������������
//	if (mozi >= 'a'&&mozi <= 'z')
//	{
//		printf("�������ł�\n");
//	}
//
//	//�啶��������
//	else if (mozi >= 'A'&&mozi <= 'Z')
//	{
//		printf("�啶���ł�\n");
//	}
//
//	//����������
//	else if (mozi >= '0'&&mozi <= '9')
//	{
//		printf("�����ł�\n");
//	}
//
//	else
//	{
//		printf("�L���ł�");
//	}
//
//}


void Add32(int a);	//�v���g�^�C�v�錾

int main(void)
{
	int n;	//�����^�̕ϐ�n
	printf("��������͂��ĉ�����\n");
	scanf_s("%d", &n);	//����

	Add32(n);		//�ϐ�n���w�肵��Add32�֐����Ăяo��
	return 0;

}

void Add32(int a)
{
	printf("%d", a + 32);	//32�𑫂�
	return;
}