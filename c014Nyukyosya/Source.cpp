#include<stdio.h>
#include<stdlib.h>
#define JUMIN 10		//�Z��10

int main(void)
{
	char jumin[JUMIN][256];	//�ő�256�����̖��O��10�i�[����z��
	int count = 0;

	for (int i = 0; i < JUMIN; i++,count++)
	{
		printf_s("�����҂���͂��ĉ�����\n");

		//��G���^�[��������
		if (jumin[0] == 0)
		{
			break;			//���[�v���甲����
		}

		scanf_s("%s", &jumin[i], sizeof(jumin[i]));
	}

	printf_s("�����҂�\n");

	for (int i = 0; i < count; i++)
	{
			printf_s("%s\n", &jumin[i]);
	}

	printf_s("�ł�");

}