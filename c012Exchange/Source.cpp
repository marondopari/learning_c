#include <stdio.h>

float DolToYen(int dol);
float YenToDol(int yen);

#define ONEDOL 128.87	//1�h��128.87

int main(void)
{
	//�������[�v
	for (;;)
	{
		int n;
		printf("���ǂ�����s���܂����H��\n1:�h�����~\n2:�~���h��\n3:�I��\n");
		scanf_s("%d", &n);

		if (n == 1)
		{	//�P��������
			int c;
			printf("\n�h������͂��Ă�������>");
			scanf_s("%d", &c);

			float d = DolToYen(c);	//�֐��Ă�

			printf("<%d�h����%f�~�ł�>\n\n", c, d);
		}
		else if (n == 2)
		{	//�Q��������
			int a;
			printf("\n�~����͂��Ă�������>");
			scanf_s("%d", &a);

			float b = YenToDol(a);	//�֐��Ă�

			printf("<%d�~��%f�h���ł�>\n\n", a, b);
		}
		else if (n == 3)
		{	//�R��������
			printf("\n�I��");
			break;	//������
		}
	}
}
//�h�����~�ɕϊ�����֐�
float DolToYen(int dol)
{
	float yen=dol* ONEDOL;
	return yen;
}

//�~���h���ɕϊ�����֐�
float YenToDol(int yen)
{
	float dol=yen / ONEDOL;
	return dol;
}