#include<stdio.h>

//int main(void)
//{
//	int n;			//�����^�̕ϐ�n��p�ӂ���
//	int sum = 0;	//�����^�̕ϐ�sum�ɂO��������
//
//	//�������[�v
//	while (1)
//	{
//		printf("��������͂��ĉ�����\n");	//��������͂��ĉ������Ɖ�ʂɕ\��
//		scanf_s("%d", &n);		//�ϐ�n�ɐ����ϊ��������̓f�[�^���i�[
//
//		sum = sum + n;			//�ϐ�sum�ɕϐ�n��݌v���Ă���
//
//		int c = getchar();		//�����^�̕ϐ�c�ɕ�����̐擪1������������
//
//		//�G���^�[����������
//		if (c == '\n')
//		{
//			break;		//���[�v���甲����
//		}
//	}
//
//	printf("���v��%d�ł�\n", sum);		//���v��%d�ł��Ɖ�ʂɕ\��
//}

int main(void)
{
	int sum = 0;	//�����^�̕ϐ�sum�ɂO��������

	//�������[�v
	while (1)
	{
		printf("��������͂��ĉ�����\n");
		int n;			//�����^�̕ϐ�n��p�ӂ���
		char str[256];	//char�^�̕�����̐錾
		gets_s(str);	//����������

		//��G���^�[��������
		if (str[0] == 0)
		{
			break;	//���[�v���甲����
		}

		sscanf_s(str, "%d", &n);	//������𐮐��ɕϊ�

		sum = sum + n;		//�ϐ�sum�ɕϐ�n��݌v���Ă���
	}

	printf("���v��%d�ł�\n", sum);
}

//int main(void)
//{
//	int sum = 0;
//
//	while (1)
//	{
//		printf("��������͂��ĉ�����\n");
//
//		int n;
//		n=gethe();
//		print("%d",n);
//
//		int c = getchar();
//		if (c == '\n')
//		{
//			break;
//		}
//
//		sum = sum + n;
//	}
//
//	printf("���v��%d�ł�\n", sum);
//}

