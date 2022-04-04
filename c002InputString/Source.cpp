#include<stdio.h>

int main(void)
{
	char str[ 256 ];

	printf("•¶Žš—ñ‚ð“ü—Í‚µ‚Ä‰º‚³‚¢\n");
	scanf_s("%s", &str, sizeof(str));
	printf("•¶Žš—ñ‚Í%s‚Å‚·", str);

	return 0;
}