#include<stdio.h>

//�v���g�^�C�v�錾
void printHelloWorld(void);
void printNumber(int a);
void printChar(char b);

int main(void)
{
	printHelloWorld();	//�֐��Ăяo��

	printNumber(10);	//�֐��Ăяo��

	int mozi;	//�����^�̕ϐ�
	printf("\n��������͂��ĉ�����\n");
	scanf_s("%d", &mozi);//����
	printChar(mozi);	//�֐��Ăяo��

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
	//32��菬����126���傫���Ȃ�������
	if (!(b >= 32&&b <= 126))
	{
		return;	//������
	}

	printf("%c", b);	//���͂��ꂽ������\��
}