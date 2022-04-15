#include<stdio.h>

int main (void)
{
	int num = 0;
	char text[256];

	for (int i = 0; i <= 127; i++)
	{
		sprintf_s(text,"%d\n", num+i);
		printf("%s", text);

	}
}