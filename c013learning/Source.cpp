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
	printf("%d�ł�\n", y);

	printNumber(f, h);
	printNumberReturn(f, h);
}

//��̐��̍��v��Ԃ��֐�
int add(int v, int q)
{
	int goukei = v + q;
	return goukei;
}

//�\������֐�
void printNumber(int a,int b)
{
	printf("\n%d+%d=%d", a,b,a+b);
}

//�\������֐����v�̒l��Ԃ�l�Ƃ��ĕԂ��֐�
int printNumberReturn(int k, int l)
{
	printf("\n%d+%d=%d", k, l, k + l);
	int gokei = k + l;
	return gokei;
}