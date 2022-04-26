#include <stdio.h>
#include<stdlib.h>
#include <time.h>

int randam();
int add(int v, int q);
bool tone(int k);

int main(void)
{
	int f=randam();		//関数を呼ぶ
	printf("%d\n",f);

	int r=add(5, 6);	//関数を呼ぶ
	printf("合計%d\n", r);

	bool tOne = tone(11);	//関数呼ぶ
	//真だったら
	if (tOne == true)
	{
		printf("%d\n", tOne);	//1表示
	}
	//偽だったら
	else
	{
		printf("%d\n", tOne);	//０表示
	}

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