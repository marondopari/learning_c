#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//int main(void)
//{
//	int sum, count;
//	int data;
//
//	sum = 0;
//
//	for (count = 0; count < 2; count++)
//	{
//		printf("��������͂��ĉ�����\n");
//		scanf_s("%d", &data);
//		sum += data;
//		
//	}
//
//	printf("���v��%d�ł�\n", sum);
//	
//}

//int main(void)
//{
//	
//	int sum, count;
//	sum = 0;
//
//	char str[10];
//
//
//	//gets_s(str);
//	//if (gets_s(str) == "\n")return NULL;
//
//	for (count = 0; count < 2; count++)
//	{
//		printf("��������͂��ĉ�����\n");
//		gets_s(str, sizeof(str));
//		/*puts(str);*/
//
//		/*sscanf_s("%d", str);*/
//		sum += (int)str;
//	}
//
//	printf("���v��%d�ł�\n", sum);
//}

//int main(void)
//{
//
//	printf("��������͂��ĉ�����\n");
//	int a;
//	int sum, count;
//	sum = 0;
//	char str[256];
//	gets_s(str);
//
//	if (str[0] == 0)
//	{
//		printf("�Z��������͂��ĉ�����\n");
//		return 0;
//	}
//	
//	for (count = 0; count < 2; count++)
//	{
//		sscanf_s(str, "%d", &a);
//		sum += a;
//	}
//
//	printf("%d", sum);
//	
//}

int main(void)
{

	printf("2�̐�������͂��ĉ�����\n(��F13�@�X�y�[�X�@15)\n");		//2�̐�������͂��ĉ�����(��F13�@�X�y�[�X�@15)�Ɖ�ʂɕ\������
	int a, b;		//�����^�̕ϐ�a,b��p�ӂ���
	char str[256];	//char�^�̕�����̐錾
	gets_s(str);	//����������

	//��G���^�[��������
	if (str[0] == 0)
	{
		printf("�Z��������͂��ĉ�����\n");	//�Z��������͂��ĉ������Ɖ�ʂɕ\������
		return 0;	//�O��Ԃ�
	}

	sscanf_s(str, "%d %d", &a, &b);	//������𐮐��ɕϊ�

	printf("���v%d�ł�", a + b);	//���v%d�ł��Ɖ�ʂɕ\������
}