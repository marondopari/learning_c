#include <stdio.h>

int main(void)
{
	int sum = 0;	//整数型の変数sumに０を代入

	int n;				//整数型の変数nを用意する

	for (int i = 0; i < 10; i++)
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
		sum = sum + n;				//累計
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d+", n);
	}

	printf("合計は%dです\n", sum);


}