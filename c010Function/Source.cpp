#include<stdio.h>

//�v���g�^�C�v�錾
void printHelloWorld(void);
void printNumber(int a);
void printChar(char b);
bool IsChar(char c);

int main(void)
{
	printHelloWorld();	//�֐��Ăяo��

	printNumber(10);	//�֐��Ăяo��

	int mozi;	//�����^�̕ϐ�
	printf("\n��������͂��ĉ�����\n");
	scanf_s("%d", &mozi);//����
	printChar(mozi);	//�֐��Ăяo��

	IsChar(mozi);

	return 0;
}

//HelloWorld��\������֐�
void printHelloWorld(void)
{
	printf("HelloWorld\n");

}

//10��\������֐�
void printNumber(int a)
{
	printf("%d",a);
}

//�\���ł��Ȃ�������������return�łʂ��āA
//�\���ł��镶����������printf�ŕ����Ƃ��ĕ\������֐�
void printChar(char b)
{

	IsChar(b);	//�֐��Ăяo��
	

	printf("%c", b);	//���͂��ꂽ������\��
}

//�\���o����Ȃ�true�A�ł��Ȃ��Ȃ�false��Ԃ��֐�
bool IsChar(char c)
{
	//32��菬����126���傫���Ȃ�������
	if (!(c >= 32 && c <= 126))
	{
		return false;	//�U��Ԃ�
	}

	return true;		//�^��Ԃ�
}