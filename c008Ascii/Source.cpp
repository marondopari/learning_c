#include<stdio.h>

int main (void)
{
	int num = 0;		//整数型の変数numに０を代入
	char text[256];		//textという配列を宣言、要素数256

	//１２７回ループする
	for (int i = 0; i <= 127; i++)
	{
		sprintf_s(text,"%d\n", num+i);	//数値を文字列に変換
		printf("%s", text);				//文字列を出力する

	}
}