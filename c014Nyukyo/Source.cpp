#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char str[256];

	printf_s("“ü‹Ò‚ğ“ü—Í‚µ‚Ä‰º‚³‚¢\n");

	scanf_s("%s", &str, sizeof(str));

	printf_s("“ü‹Ò‚Í\n");
	printf_s("%s\n", &str);
	printf_s("‚Å‚·");
}