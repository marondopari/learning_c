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


int Add32(int a);	//�v���g�^�C�v�錾

int main(void)
{
	int n=Add32(5);

	printf("%d", n);
	return 0;

}

int Add32(int a)
{
	int goukei= a + 32;	//32�𑫂�
	return goukei;
}