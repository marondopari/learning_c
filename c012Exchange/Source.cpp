#include <stdio.h>

int DolToYen(int dol);
int YenToDol(int yen);

int main(void)
{

}
//ドルを円に変換する関数
int DolToYen(int dol)
{
	int yen=dol*128.87;
	return yen;
}

//円をドルに変換する関数
int YenToDol(int yen)
{
	int dol=yen / 128.87;
	return dol;
}