#include<stdio.h>

//プロトタイプ宣言
void printHelloWorld(void);
void printNumber(int a);
void printChar(char b);
bool IsChar(char c);

int main(void)
{
	printHelloWorld();	//関数呼び出し

	printNumber(10);	//関数呼び出し

	int mozi;	//整数型の変数
	printf("\n文字を入力して下さい\n");
	scanf_s("%d", &mozi);//入力
	printChar(mozi);	//関数呼び出し

	IsChar(mozi);

	return 0;
}

//HelloWorldを表示する関数
void printHelloWorld(void)
{
	printf("HelloWorld\n");

}

//10を表示する関数
void printNumber(int a)
{
	printf("%d",a);
}

//表示できない文字だったらreturnでぬけて、
//表示できる文字だったらprintfで文字として表示する関数
void printChar(char b)
{

	IsChar(b);	//関数呼び出し
	

	printf("%c", b);	//入力された文字を表示
}

//表示出来るならtrue、できないならfalseを返す関数
bool IsChar(char c)
{
	//32より小さく126より大きくなかったら
	if (!(c >= 32 && c <= 126))
	{
		return false;	//偽を返す
	}

	return true;		//真を返す
}