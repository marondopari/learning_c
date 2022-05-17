#include <stdio.h>
#define NUM 10		//限界値

int main(void)
{
	int count = 0;//何回ループしたかをカウントする変数
	int n;		//整数型の変数nを用意する
	int num[10];		//numという配列を宣言、要素数10

	for (int i=0;i<NUM;i++,count++)
	{
		printf("数字を入力して下さい\n");
		char str[256];		//char型の文字列の宣言
		gets_s(str);		//文字列を入力
							//scanfだと空エンターが処理できないのでget_sを使う

		//空エンターだったら
		if (str[0] == 0)
		{
			break;			//ループから抜ける
		}

		sscanf_s(str, "%d", &n);	//入力された文字列を整数に変換
		num[i] = n;					//要素num[i]に入力された整数を代入
	}

	//カウントの数だけループ
	for (int i = 0; i < count; i++)
	{
		printf("%d\n", num[i]);		//配列の中身を順番に表示
	}
}