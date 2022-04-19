#include <stdio.h>

//int main(void)
//{
//	char mozi;	//char型の変数
//	printf("1文字を入力して下さい\n");
//	scanf_s("%c", &mozi);	//文字の入力
//
//	//小文字か判定
//	if (mozi >= 'a'&&mozi <= 'z')
//	{
//		printf("小文字です\n");
//	}
//
//	//大文字か判定
//	else if (mozi >= 'A'&&mozi <= 'Z')
//	{
//		printf("大文字です\n");
//	}
//
//	//数字か判定
//	else if (mozi >= '0'&&mozi <= '9')
//	{
//		printf("数字です\n");
//	}
//
//	else
//	{
//		printf("記号です");
//	}
//
//}


int Add32(int a);	//プロトタイプ宣言

int main(void)
{
	int n=Add32(5);

	printf("%d", n);
	return 0;

}

int Add32(int a)
{
	int goukei= a + 32;	//32を足す
	return goukei;
}