#include<stdio.h>

//int main(void)
//{
//	int n;
//	int sum = 0;
//
//	while (1)
//	{
//		printf("��������͂��ĉ�����\n");
//		rewind(stdin);
//		scanf_s("%d", &n);
//
//		sum = sum + n;
//
//		int c = getchar();
//
//		if (c == '\n')
//		{
//			break;
//		}
//	}
//
//	printf("���v��%d�ł�\n", sum);
//}

int main(void)
{

	int n;
	int sum=0;
	char str[256];
	gets_s(str);

	while (1)
	{

		printf("��������͂��ĉ�����\n");
		rewind(stdin);
		sscanf_s(str,"%d", &n);

		sum = sum + n;

		if (str[0] == 0)
		{
			break;
		}
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

