#include <stdio.h>
int Add32(int a);	//�v���g�^�C�v�錾

int main(void)
{
	char mozi;	//char�^�̕ϐ�
	printf("1��������͂��ĉ�����\n");
	scanf_s("%c", &mozi);	//�����̓���
	printf("%c %d", mozi,mozi);
	int n = Add32(mozi);

	//������������
	if (mozi >= 'a'&&mozi <= 'z')
	{
		printf("�������ł�\n");
	}

	//�啶��������
	else if (mozi >= 'A'&&mozi <= 'Z')
	{
		
		printf("�啶���ł�\n");
		printf("%d",n);
	}

	//����������
	else if (mozi >= '0'&&mozi <= '9')
	{
		printf("�����ł�\n");
	}

	else
	{
		printf("�L���ł�");
	}

}

//int main(void)
//{
//	int n=Add32(5);
//
//	printf("%d", n);
//	return 0;
//
//}

int Add32(int a)
{
	int goukei= a + 32;	//32�𑫂�
	return goukei;
}