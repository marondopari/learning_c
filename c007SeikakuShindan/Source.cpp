#include<stdio.h>

void printError(void);		//�v���g�^�C�v�錾

int main(void)
{
	int a,b,c;

	printf("---------�D���ȐH�ו��́H---------\n\n�P�F�ʎ�\n�Q�F�������\n\n1���Q����͂��ĉ�������");
	scanf_s("%d", &a);

	switch (a)
	{
	case 1:
		printf("\n\n---------�t���̑傫����?---------\n\n�P�F�傫��\n�Q�F������\n\n1���Q����͂��ĉ�������");
		scanf_s("%d", &b);

		switch (b)
		{
		case 1:
			printf("\n\n---------�֊s�́H---------\n\n�P�F�ۂ�\n�Q�F�X�^�C���b�V��\n\n1���Q����͂��ĉ�������");
			scanf_s("%d", &c);

			switch (c)
			{
			case 1:
				printf("\n��--------------------��\n�����Ȃ��̓N�H�b�J�ł���\n��--------------------��\n");
				break;
			case 2:
				printf("\n��--------------------��\n�����Ȃ��̓p���}�����r�[�ł���\n��--------------------��\n");
				break;
			default:
				printError();
				break;

			}
			break;


		case 2:
			printf("\n\n---------�C���́H---------\n\n�P�F�r��\n�Q�F���₩\n\n1���Q����͂��ĉ�������");
			scanf_s("%d", &c);

			switch (c)
			{
			case 1:
				printf("\n��--------------------��\n�����Ȃ��͔��؂ł���\n��--------------------��\n");
				break;
			case 2:
				printf("\n��--------------------��\n�����Ȃ��̓A�����J�r�[�o�[�ł���\n��--------------------��\n");
				break;
			default:
				printError();
				break;

			}
			break;

		default:
			printError();
			break;
		}
		break;

	case 2:
		printf("\n\n---------�̂́H---------\n\n�P�F������\n�Q�F�傫��\n\n1���Q����͂��ĉ�������");
		scanf_s("%d", &b);

		switch (b)
		{
		case 1:
			printf("\n\n---------���Ȃ��́H---------\n\n�P�F���B�[�K��\n�Q�F���H��`��\n\n1���Q����͂��ĉ�������");
			scanf_s("%d", &c);

			switch (c)
			{
			case 1:
				printf("\n��--------------------��\n�����Ȃ��̓f�O�[�ł���\n��--------------------��\n");
				break;


			case 2:
				printf("\n��--------------------��\n�����Ȃ��̓��b�g�ł���\n��--------------------��\n");
				break;


			default:
				printError();
				break;

			}
			break;


		case 2:
			printf("\n\n---------���؂̂��Ƃ��H---------\n\n�P�F��D��\n�Q�F�匙��\n\n1���Q����͂��ĉ�������");
			scanf_s("%d", &c);

			switch (c)
			{
			case 1:
				printf("\n��--------------------��\n�����Ȃ��͂Ђł����ł���\n��--------------------��\n");
				break;

			case 2:
				printf("\n��--------------------��\n�����Ȃ��̓��C���ł���\n��--------------------��\n");
				break;


			default:
				printError();
				break;
;
			}
			break;


		default:
			printError();
			break;
		}
		break;

	default:
		printError();
		break;
	}
	
}

void printError(void)
{
	printf("******1���Q����͂��ĉ�����******\n");

	return;
}