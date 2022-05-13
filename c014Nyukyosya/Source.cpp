#include<stdio.h>
#include<stdlib.h>
#define JUMIN 10		//住民10

int main(void)
{
	char jumin[JUMIN][256];	//最大256文字の名前を10個格納する配列
	int count = 0;

	for (int i = 0; i < JUMIN; i++,count++)
	{
		printf_s("入居者を入力して下さい\n");

		//空エンターだったら
		if (jumin[0] == 0)
		{
			break;			//ループから抜ける
		}

		scanf_s("%s", &jumin[i], sizeof(jumin[i]));
	}

	printf_s("入居者は\n");

	for (int i = 0; i < count; i++)
	{
			printf_s("%s\n", &jumin[i]);
	}

	printf_s("です");

}