//loop
#include <stdio.h>
int main(void)
{
	// ++ �Ի�
	/*
	int a = 10;
	printf("a�� %d\n", a);
	a++;
	printf("a�� %d\n", a);
	a++;
	printf("a�� %d\n", a);
	*/

	//int b = 20;
	////b= b+1 
	//printf("b�� %d\n", ++b); //b�� 1�� ���ϴ� �� �ϰ� b�� �ֱ�
	//printf("b�� %d\n", b++); //b�� �ְ� 1�� �ֱ�
	//printf("b�� %d\n", b);

	//int i = 1;
	//printf("HELLO WORLD %d\n", i++); //1
	//printf("HELLO WORLD %d\n", i++); //2
	//printf("HELLO WORLD %d\n", i++);//3
	//printf("HELLO WORLD %d\n", i++);//4
	//printf("HELLO WORLD %d\n", i++);//5
	//printf("HELLO WORLD %d\n", i++);//6
	//printf("HELLO WORLD %d\n", i++);//7

	//�ݺ���
	// for, while, do while

	//for(����; ����; ����) {  }
	/*
	for (int i = 1; i <= 10; i++)
	{
		printf("Hello world %d\n", i);
	}
	*/

	//while(����) {  }
	/*
	
	int i = 1;
	while (i <= 10)
	{
		printf("hello world %d\n", i++);
		//i++
	}
	*/

	//do {  } while (����);
	/*
	int i = 1;
	do {
		printf("hello world %d\n", i);
		i++;
	} while (i <= 10);
	*/

	// 2�� �ݺ���
	/*
	for (int i = 1; i <= 3; i++)
	{
		printf("ù ��° �ݺ��� : %d\n", i);

		for (int j = 1; j <= 5; j++)
		{
			printf("	�� ��° �ݺ��� : %d\n", j);
		}
	}

	*/

	//������
	/*

	for (int i = 2; i <= 9; i++)
	{
		printf("%d�� ���\n",i);
		for (int j = 1; j <= 9; j++)
		{
			printf("  %d x %d = %d\n", i, j, i * j);
		}
	}

	*/

	//�Ƕ�̵� �׾ƶ� �� ����
	/*
	*
	**
	***
	****
	*****
	*/
	
	/*

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	*/

	//2�� �ݺ��� �Ųٷ�
/*
for (int i = 0; i < 5; i++)
{
	for (int j = i; j < 5 - 1; j++)
	{
		printf("S");
	}
	for (int k = 0; k <= i; k++)
	{
		printf("*");
	}
	printf("\n");

}
*/


//������Ʈ
/*
int input;
printf("�� ��¥�� �Ƕ�̵带 �װڽ��ϱ�?");
scanf_s("%d", &input);

for (int i = 0; i < input; i++)
{
	for (int j = i; j < input - 1; j++)
	{
		printf("S");
	}
	for (int k = 0; k <= i*2; k++)
	{
		printf("*");
	}
	for (int t = i; t < input - 1; t++)
	{
		printf("s");
	}
	printf("\n");
}
*/


//�� ��
	int floor;
	printf("�� ������ �װڽ��ϱ�?");
	scanf_s("%d", &floor);
	for (int i = 0; i < floor; i++)
	{
		for (int j = i; j < floor - 1; j++)
		{
			printf("s");
		}
		for (int k = 0; k < i*2+1; k++)
		{
			printf("*");
		}
		printf("\n");
	}



	return 0;
}