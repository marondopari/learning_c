#include <stdio.h>
#define NUM 10		//���E�l

int main(void)
{
	int count = 0;//���񃋁[�v���������J�E���g����ϐ�
	int n;		//�����^�̕ϐ�n��p�ӂ���
	int num[10];		//num�Ƃ����z���錾�A�v�f��10

	for (int i=0;i<NUM;i++,count++)
	{
		printf("��������͂��ĉ�����\n");
		char str[256];		//char�^�̕�����̐錾
		gets_s(str);		//����������
							//scanf���Ƌ�G���^�[�������ł��Ȃ��̂�get_s���g��

		//��G���^�[��������
		if (str[0] == 0)
		{
			break;			//���[�v���甲����
		}

		sscanf_s(str, "%d", &n);	//���͂��ꂽ������𐮐��ɕϊ�
		num[i] = n;					//�v�fnum[i]�ɓ��͂��ꂽ��������
	}

	//�J�E���g�̐��������[�v
	for (int i = 0; i < count; i++)
	{
		printf("%d\n", num[i]);		//�z��̒��g�����Ԃɕ\��
	}
}