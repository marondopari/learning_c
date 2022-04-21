#include <stdio.h>
int Add32(int a);	//プロトタイプ宣言
int De32(int b);

int main(void)
{
	char mozi;	//char型の変数
	printf("1文字を入力して下さい\n");
	scanf_s("%c", &mozi);	//文字の入力
	int n = Add32(mozi);
	int b = De32(mozi);

	//小文字か判定
	if (mozi >= 'a'&&mozi <= 'z')
	{
		printf("%c %d", b, b);
		printf("小文字です\n");
	}

	//大文字か判定
	else if (mozi >= 'A'&&mozi <= 'Z')
	{
		
		printf("大文字です\n");
		printf("%c %d",n,n);
	}

	//数字か判定
	else if (mozi >= '0'&&mozi <= '9')
	{
		printf("数字です\n");
	}

	else
	{
		printf("記号です");
	}

}

//int main(void)
//{
//	int n=Add32(5);
//
//	printf("%d", n);
//	return 0;
//
//}

int Add32(int a)
{
	int goukei= a + 32;	//32を足す
	return goukei;
}

int De32(int c)
{
	int goukei = c - 32;	//32を足す
	return goukei;
}