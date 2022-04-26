#include <stdio.h>
#include<stdlib.h>
#include <time.h>

int randam();
int add(int v, int q);
bool tone(int k);

int main(void)
{
	int score;		//スコア
	char str;

	int f=randam();		//関数を呼ぶ
	score = f;	//ランダムの数値をスコアに入れる
	printf("<%dです>\n", score);	//スコア表示

	printf("続けますか。\nｙ（はい）：ｎ（いいえ）> ");
	scanf_s("%c", &str);	//入力

	//ｎキーが押されたら
	if (str == 'n')
	{
		printf("\nスコア:%d\n", score);	//スコア表示

	}
	//yキーが押されたら
	else if (str == 'y')
	{
		int v = randam();			//関数を呼ぶ
		printf("<%dです>\n", v);	//表示

		int g = add(score, v);		//2つの合計を足す関数を呼ぶ
		score = g;					//スコアに足した数を入れる

		printf("\nスコア:%d\n", score);	//スコア表示

		bool tOne = tone(score);	//関数呼ぶ
		//２１超えてたら
		if (tOne==true)
		{
		}
		//２１超えてなかったら
		else if(tOne == false)
		{
			printf("続けますか。\nｙ（はい）：ｎ（いいえ）> ");
			scanf_s("%c", &str);	//入力

			if (str == 'n')
			{
				printf("\nスコア:%d\n", score);	//スコア表示

			}
			else if(str == 'y')
			{
				int j = randam();
				printf("<%dです>\n", j);	//表示

				int o = add(score, j);		//2つの合計を足す関数を呼ぶ
				score = o;

				printf("\nスコア:%d\n", score);	//スコア表示
			}
		}
	}

	//int r=add(5, 6);	//関数を呼ぶ
	//printf("合計%d\n", r);

	//bool tOne = tone(11);	//関数呼ぶ
	////真だったら
	//if (tOne == true)
	//{
	//	printf("%d\n", tOne);	//1表示
	//}
	////偽だったら
	//else
	//{
	//	printf("%d\n", tOne);	//０表示
	//}

}

//１から13までのランダムな数を返す
int randam()
{
	srand((unsigned)time(NULL));	////乱数の種に現在の時刻を指定
	int a;		//整数型の変数aを用意
	a=rand() % 13 + 1;	//1~13のランダムな数値
	return a;
}

//二つの数の合計を返す関数
int add(int v,int q)
{
	int goukei = v + q;
	return goukei;
}

//21以下ならfalse、21を超えてたらtrueを返す関数
bool tone(int k)
{
	//21以下なら
	if (k <= 21)
	{
		return false;	//falseを返す
	}

	//21以上
	return true;	//trueを返す
}