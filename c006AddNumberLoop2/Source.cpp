#include <stdio.h>

int main(void)
{
	int sum = 0;	//�����^�̕ϐ�sum�ɂO����

	int n;				//�����^�̕ϐ�n��p�ӂ���

	for (int i = 0; i < 10; i++)
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
		sum = sum + n;				//�݌v
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d+", n);
	}

	printf("���v��%d�ł�\n", sum);


}