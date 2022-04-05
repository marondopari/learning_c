#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//int main(void)
//{
//	int sum, count;
//	int data;
//
//	sum = 0;
//
//	for (count = 0; count < 2; count++)
//	{
//		printf("数字を入力して下さい\n");
//		scanf_s("%d", &data);
//		sum += data;
//		
//	}
//
//	printf("合計は%dです\n", sum);
//	
//}

//int main(void)
//{
//	
//	int sum, count;
//	sum = 0;
//
//	char str[10];
//
//
//	//gets_s(str);
//	//if (gets_s(str) == "\n")return NULL;
//
//	for (count = 0; count < 2; count++)
//	{
//		printf("数字を入力して下さい\n");
//		gets_s(str, sizeof(str));
//		/*puts(str);*/
//
//		/*sscanf_s("%d", str);*/
//		sum += (int)str;
//	}
//
//	printf("合計は%dです\n", sum);
//}

//int main(void)
//{
//
//	printf("数字を入力して下さい\n");
//	int a;
//	int sum, count;
//	sum = 0;
//	char str[256];
//	gets_s(str);
//
//	if (str[0] == 0)
//	{
//		printf("〇数字を入力して下さい\n");
//		return 0;
//	}
//	
//	for (count = 0; count < 2; count++)
//	{
//		sscanf_s(str, "%d", &a);
//		sum += a;
//	}
//
//	printf("%d", sum);
//	
//}

int main(void)
{

	printf("2つの数字を入力して下さい\n(例：13　スペース　15)\n");
	int a, b;
	char str[256];
	gets_s(str);

	if (str[0] == 0)
	{
		printf("〇数字を入力して下さい\n");
		return 0;
	}

	sscanf_s(str, "%d %d", &a, &b);

	printf("合計%dです", a + b);
}