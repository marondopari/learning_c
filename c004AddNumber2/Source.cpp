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

	printf("2つの数字を入力して下さい\n(例：13　スペース　15)\n");		//2つの数字を入力して下さい(例：13　スペース　15)と画面に表示する
	int a, b;		//整数型の変数a,bを用意する
	char str[256];	//char型の文字列の宣言
	gets_s(str);	//文字列を入力

	//空エンターだったら
	if (str[0] == 0)
	{
		printf("〇数字を入力して下さい\n");	//〇数字を入力して下さいと画面に表示する
		return 0;	//０を返す
	}

	sscanf_s(str, "%d %d", &a, &b);	//文字列を整数に変換

	printf("合計%dです", a + b);	//合計%dですと画面に表示する
}