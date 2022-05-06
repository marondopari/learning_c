#include <stdio.h>
#include<stdlib.h>
#include <time.h>

int add(int v, int q);
void printNumber(int a,int b);
int printNumberReturn(int k, int l);

int main(void)
{
	int f = 20;
	int h = 4;

	int y=add(f, h);
	printf("%dです\n", y);

	printNumber(f, h);
	printNumberReturn(f, h);
}

//二つの数の合計を返す関数
int add(int v, int q)
{
	int goukei = v + q;
	return goukei;
}

//表示する関数
void printNumber(int a,int b)
{
	printf("\n%d+%d=%d", a,b,a+b);
}

//表示する関数合計の値を返り値として返す関数
int printNumberReturn(int k, int l)
{
	printf("\n%d+%d=%d", k, l, k + l);
	int gokei = k + l;
	return gokei;
}