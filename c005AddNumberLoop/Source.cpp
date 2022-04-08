#include<stdio.h>

int main(void)
{
	int n;			//整数型の変数nを用意する
	int sum = 0;	//整数型の変数sumに０を代入する

	//無限ループ
	while (1)
	{
		printf("数字を入力して下さい\n");	//数字を入力して下さいと画面に表示
		scanf_s("%d", &n);		//変数nに整数変換した入力データを格納

		sum = sum + n;			//変数sumに変数nを累計していく

		int c = getchar();		//整数型の変数cに文字列の先頭1文字を代入する

		//エンターを押したら
		if (c == '\n')
		{
			break;		//ループから抜ける
		}
	}

	printf("合計は%dです\n", sum);		//合計は%dですと画面に表示
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

