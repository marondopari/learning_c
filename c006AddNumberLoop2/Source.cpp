#include <stdio.h>
#define NUM 10		//10��


//int main(void)
//{
//	int sum = 0;	//�����^�̕ϐ�sum�ɂO����
//
//	int n;				//�����^�̕ϐ�n��p�ӂ���
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("��������͂��ĉ�����\n");
//
//		char str[256];		//char�^�̕�����̐錾
//		gets_s(str);		//����������
//
//		//��G���^�[��������
//		if (str[0] == 0)
//		{
//			break;			//���[�v���甲����
//		}
//
//		sscanf_s(str, "%d", &n);	//������𐮐��ɕϊ�
//		sum = sum + n;				//�݌v
//	}
//
//	for (int i = 0; i < n; i++)
//	{ 
//	printf("%d+", n);
//	}
//
//	printf("���v��%d�ł�\n", sum);
//
//
//}

int main(void)
{
	int sum = 0;	//�����^�̕ϐ�sum�ɂO����
	int n;				//�����^�̕ϐ�n��p�ӂ���
	int num[NUM];		//num�Ƃ����z���錾�A�v�f��10
	int count=0;	//�����^�̕ϐ�count�ɂO����

	//10�񃋁[�v
	for (int i = 0; i < NUM; i++,count++)
	{
		printf("��������͂��ĉ�����\n");

		char str[256];		//char�^�̕�����̐錾
		gets_s(str);		//����������

		//��G���^�[��������
		if (str[0] == 0)
		{
			break;			//���[�v���甲����
		}

		sscanf_s(str, "%d", &n);	//������𐮐��ɕϊ�
		num[i] = n;					//�v�fnum[i]�ɂ�����
		sum = sum + n;				//�݌v
	}

	//�J�E���g�̐��������[�v
	for (int i = 0; i < count; i++)
	{
		printf("%d+", num[i]);		//�z��̒��g�����Ԃɕ\��
	}

	printf("\n���v��%d�ł�\n", sum);


}