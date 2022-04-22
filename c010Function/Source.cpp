#include<stdio.h>

void printHelloWorld(void);
void printNumber(int a);
void printChar(char b);

int main(void)
{
	printHelloWorld();

	printNumber(10);

	int mozi;
	printf("\n•¶Žš‚ð“ü—Í‚µ‚Ä‰º‚³‚¢\n");
	scanf_s("%d", &mozi);
	printChar(mozi);

	return 0;
}

void printHelloWorld(void)
{
	printf("HelloWorld\n");

}

void printNumber(int a)
{
	printf("%d",a);
}

void printChar(char b)
{
	if (b >= 32&&b <= 126)
	{
		printf("%c", b);
	}
	else
	{
		return;
	}
}