#include <stdio.h>

int main(void)
{
	char mozi;	//charŒ^‚Ì•Ï”
	printf("1•¶Žš‚ð“ü—Í‚µ‚Ä‰º‚³‚¢\n");
	scanf_s("%c", &mozi);	//•¶Žš‚Ì“ü—Í

	//¬•¶Žš‚©”»’è
	if (mozi >= 'a'&&mozi <= 'z')
	{
		printf("¬•¶Žš‚Å‚·\n");
	}

	//‘å•¶Žš‚©”»’è
	if (mozi >= 'A'&&mozi <= 'Z')
	{
		printf("‘å•¶Žš‚Å‚·\n");
	}

	//”Žš‚©”»’è
	if (mozi >= '0'&&mozi <= '9')
	{
		printf("”Žš‚Å‚·\n");
	}

	else
	{
		printf("‹L†‚Å‚·");
	}
}