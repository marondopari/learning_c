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
	printf("%d�ł�\n", y);

	printAdd(f, h);
	calcAndPrintAdd(f, h);
}

//��̐��̍��v��Ԃ��֐�
int calcAdd(int v, int q)
{
	int goukei = v + q;
	return goukei;
}

//�\������֐�
void printAdd(int a,int b)
{
	printf("\n%d+%d=%d", a,b, calcAdd(a,b));
}

//�\������֐����v�̒l��Ԃ�l�Ƃ��ĕԂ��֐�
int calcAndPrintAdd(int k, int l)
{
	
	int gokei = calcAdd(k, l);
	printf("\n%d+%d=%d", k, l, gokei);
	return gokei;
}