#include <stdio.h>

int DolToYen(int dol);
int YenToDol(int yen);

int main(void)
{

}
//ƒhƒ‹‚ğ‰~‚É•ÏŠ·‚·‚éŠÖ”
int DolToYen(int dol)
{
	int yen=dol*128.87;
	return yen;
}

//‰~‚ğƒhƒ‹‚É•ÏŠ·‚·‚éŠÖ”
int YenToDol(int yen)
{
	int dol=yen / 128.87;
	return dol;
}