#include<stdio.h>

int main(void)
{
	int n;
	int sum = 0;

	while (1)
	{
		printf("数字を入力して下さい\n");
		rewind(stdin);
		scanf_s("%d", &n);

		sum = sum + n;

		int c = getchar();

		if (c == '\n')
		{
			break;
		}
	}

	printf("合計は%dです\n", sum);
}

//int main(void)
//{
//
//	int n;
//	int sum=0;
//	char str[256];
//	gets_s(str);
//
//	while (1)
//	{
//
//		printf("数字を入力して下さい\n");
//		rewind(stdin);
//		sscanf_s(str,"%d", &n);
//
//		sum = sum + n;
//
//		if (str[0] == 0)
//		{
//			break;
//		}
//	}
//
//	printf("合計は%dです\n", sum);
//}

//int main(void)
//{
//	int sum = 0;
//
//	while (1)
//	{
//		printf("数字を入力して下さい\n");
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
//	printf("合計は%dです\n", sum);
//}