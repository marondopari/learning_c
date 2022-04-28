#include <stdio.h>

int DolToYen(int dol);
int YenToDol(int yen);

#define ONEDOL 128.87	//1ドル128.87

int main(void)
{
	//無限ループ
	for (;;)
	{
		int n;
		printf("☆どれを実行しますか？☆\n1:ドル＞円\n2:円＞ドル\n3:終了\n");
		scanf_s("%d", &n);

		if (n == 1)
		{	//１だったら
			int c;
			printf("\nドルを入力してください>");
			scanf_s("%d", &c);

			int d = DolToYen(c);	//関数呼ぶ

			printf("<%dドルは%d円です>\n\n", c, d);
		}
		else if (n == 2)
		{	//２だったら
			int a;
			printf("\n円を入力してください>");
			scanf_s("%d", &a);

			int b = YenToDol(a);	//関数呼ぶ

			printf("<%dドルは%d円です>\n\n", a, b);
		}
		else if (n == 3)
		{	//３だったら
			printf("\n終了");
			break;	//抜ける
		}
	}
}
//ドルを円に変換する関数
int DolToYen(int dol)
{
	int yen=dol* ONEDOL;
	return yen;
}

//円をドルに変換する関数
int YenToDol(int yen)
{
	int dol=yen / ONEDOL;
	return dol;
}