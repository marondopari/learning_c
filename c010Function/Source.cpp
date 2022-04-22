#include<stdio.h>

void printHelloWorld(void);
void printNumber(int a);

int main(void)
{
	printHelloWorld();

	printNumber(10);

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