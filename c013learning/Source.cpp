#include <stdio.h>
#include<stdlib.h>
#include <time.h>

int calcAdd(int v, int q);
void printAdd(int a,int b);
int calcAndPrintAdd(int k, int l);

int main(void)
{
	int f = 20;
	int h = 4;

	int y= calcAdd(f, h);
	printf("%dです\n", y);

	printAdd(f, h);
	calcAndPrintAdd(f, h);
}

//二つの数の合計を返す関数
int calcAdd(int v, int q)
{
	int goukei = v + q;
	return goukei;
}

//表示する関数
void printAdd(int a,int b)
{
	printf("\n%d+%d=%d", a,b, calcAdd(a,b));
}

//表示する関数合計の値を返り値として返す関数
int calcAndPrintAdd(int k, int l)
{
	
	int gokei = calcAdd(k, l);
	printf("\n%d+%d=%d", k, l, gokei);
	return gokei;
}