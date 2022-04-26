#include <stdio.h>
#include<stdlib.h>
#include <time.h>

void randam(void);

int main(void)
{
	randam();		//関数を呼ぶ
}

void randam(void)
{
	srand((unsigned)time(NULL));	////乱数の種に現在の時刻を指定
	int a;		//整数型の変数aを用意
	a=rand() % 13 + 1;	//1~13のランダムな数値
	printf("%d\n", a);	//aの値を出力
}