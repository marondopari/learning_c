#include<stdio.h>

int main (void)
{
	int num = 0;		//�����^�̕ϐ�num�ɂO����
	char text[256];		//text�Ƃ����z���錾�A�v�f��256

	//�P�Q�V�񃋁[�v����
	for (int i = 0; i <= 127; i++)
	{
		sprintf_s(text,"%d\n", num+i);	//���l�𕶎���ɕϊ�
		printf("%s", text);				//��������o�͂���

	}
}