#include <stdio.h>

int DolToYen(int dol);
int YenToDol(int yen);

int main(void)
{

}
//�h�����~�ɕϊ�����֐�
int DolToYen(int dol)
{
	int yen=dol*128.87;
	return yen;
}

//�~���h���ɕϊ�����֐�
int YenToDol(int yen)
{
	int dol=yen / 128.87;
	return dol;
}