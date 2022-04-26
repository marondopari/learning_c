#include <stdio.h>
#include<stdlib.h>
#include <time.h>

int randam();

int main(void)
{
	int f=randam();		//関数を呼ぶ

	printf("%d\n",f);
}

int randam()
{
	srand((unsigned)time(NULL));	////乱数の種に現在の時刻を指定
	int a;		//整数型の変数aを用意
	a=rand() % 13 + 1;	//1~13のランダムな数値
	return a;
}