#include <stdio.h>
#define NUM 10		//10回


//int main(void)
//{
//	int sum = 0;	//整数型の変数sumに０を代入
//
//	int n;				//整数型の変数nを用意する
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("数字を入力して下さい\n");
//
//		char str[256];		//char型の文字列の宣言
//		gets_s(str);		//文字列を入力
//
//		//空エンターだったら
//		if (str[0] == 0)
//		{
//			break;			//ループから抜ける
//		}
//
//		sscanf_s(str, "%d", &n);	//文字列を整数に変換
//		sum = sum + n;				//累計
//	}
//
//	for (int i = 0; i < n; i++)
//	{ 
//	printf("%d+", n);
//	}
//
//	printf("合計は%dです\n", sum);
//
//
//}

int main(void)
{
	int sum = 0;	//整数型の変数sumに０を代入
	int n;				//整数型の変数nを用意する
	int num[NUM];		//numという配列を宣言、要素数10
	int count=0;	//整数型の変数countに０を代入

	//10回ループ
	for (int i = 0; i < NUM; i++,count++)
	{
		printf("数字を入力して下さい\n");

		char str[256];		//char型の文字列の宣言
		gets_s(str);		//文字列を入力

		//空エンターだったら
		if (str[0] == 0)
		{
			break;			//ループから抜ける
		}

		sscanf_s(str, "%d", &n);	//文字列を整数に変換
		num[i] = n;					//要素num[i]にｎを代入
		sum = sum + n;				//累計
	}

	//カウントの数だけループ
	for (int i = 0; i < count; i++)
	{
		printf("%d+", num[i]);		//配列の中身を順番に表示
	}

	printf("\n合計は%dです\n", sum);


}