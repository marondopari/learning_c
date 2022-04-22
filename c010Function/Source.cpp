#include<stdio.h>

void printHelloWorld(void);
void print(int a);

int main(void)
{
	printHelloWorld();

	print(10);

	return 0;
}

void printHelloWorld(void)
{
	printf("HelloWorld\n");
	return;
}

void print(int a)
{
	printf("%d",a);
	return;
}