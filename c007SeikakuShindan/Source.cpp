#include<stdio.h>

void printError(void);		//プロトタイプ宣言

int main(void)
{
	int a,b,c;

	printf("---------好きな食べ物は？---------\n\n１：果実\n２：乾燥野菜\n\n1か２を入力して下さい＞");
	scanf_s("%d", &a);

	switch (a)
	{
	case 1:
		printf("\n\n---------フンの大きさは?---------\n\n１：大きい\n２：小さい\n\n1か２を入力して下さい＞");
		scanf_s("%d", &b);

		switch (b)
		{
		case 1:
			printf("\n\n---------輪郭は？---------\n\n１：丸い\n２：スタイリッシュ\n\n1か２を入力して下さい＞");
			scanf_s("%d", &c);

			switch (c)
			{
			case 1:
				printf("\n☆--------------------☆\n☆あなたはクォッカです☆\n☆--------------------☆\n");
				break;
			case 2:
				printf("\n☆--------------------☆\n☆あなたはパルマワラビーです☆\n☆--------------------☆\n");
				break;
			default:
				printError();
				break;

			}
			break;


		case 2:
			printf("\n\n---------気性は？---------\n\n１：荒い\n２：穏やか\n\n1か２を入力して下さい＞");
			scanf_s("%d", &c);

			switch (c)
			{
			case 1:
				printf("\n☆--------------------☆\n☆あなたは美華です☆\n☆--------------------☆\n");
				break;
			case 2:
				printf("\n☆--------------------☆\n☆あなたはアメリカビーバーです☆\n☆--------------------☆\n");
				break;
			default:
				printError();
				break;

			}
			break;

		default:
			printError();
			break;
		}
		break;

	case 2:
		printf("\n\n---------体は？---------\n\n１：小さい\n２：大きい\n\n1か２を入力して下さい＞");
		scanf_s("%d", &b);

		switch (b)
		{
		case 1:
			printf("\n\n---------あなたは？---------\n\n１：ヴィーガン\n２：肉食主義者\n\n1か２を入力して下さい＞");
			scanf_s("%d", &c);

			switch (c)
			{
			case 1:
				printf("\n☆--------------------☆\n☆あなたはデグーです☆\n☆--------------------☆\n");
				break;


			case 2:
				printf("\n☆--------------------☆\n☆あなたはラットです☆\n☆--------------------☆\n");
				break;


			default:
				printError();
				break;

			}
			break;


		case 2:
			printf("\n\n---------美華のことが？---------\n\n１：大好き\n２：大嫌い\n\n1か２を入力して下さい＞");
			scanf_s("%d", &c);

			switch (c)
			{
			case 1:
				printf("\n☆--------------------☆\n☆あなたはひでちゃんです☆\n☆--------------------☆\n");
				break;

			case 2:
				printf("\n☆--------------------☆\n☆あなたはライムです☆\n☆--------------------☆\n");
				break;


			default:
				printError();
				break;
;
			}
			break;


		default:
			printError();
			break;
		}
		break;

	default:
		printError();
		break;
	}
	
}

void printError(void)
{
	printf("******1か２を入力して下さい******\n");

	return;
}