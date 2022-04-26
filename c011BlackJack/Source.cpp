#include <stdio.h>
#include<stdlib.h>
#include <time.h>

int randam();
int add(int v, int q);

int main(void)
{
	int f=randam();		//関数を呼ぶ
	printf("%d\n",f);

	int r=add(5, 6);	//関数を呼ぶ
	printf("合計%d\n", r);

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