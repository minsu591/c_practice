//loop
#include <stdio.h>
int main(void)
{
	// ++ 뿔뿔
	/*
	int a = 10;
	printf("a는 %d\n", a);
	a++;
	printf("a는 %d\n", a);
	a++;
	printf("a는 %d\n", a);
	*/

	//int b = 20;
	////b= b+1 
	//printf("b는 %d\n", ++b); //b에 1을 더하는 걸 하고 b를 넣기
	//printf("b는 %d\n", b++); //b를 넣고 1을 넣기
	//printf("b는 %d\n", b);

	//int i = 1;
	//printf("HELLO WORLD %d\n", i++); //1
	//printf("HELLO WORLD %d\n", i++); //2
	//printf("HELLO WORLD %d\n", i++);//3
	//printf("HELLO WORLD %d\n", i++);//4
	//printf("HELLO WORLD %d\n", i++);//5
	//printf("HELLO WORLD %d\n", i++);//6
	//printf("HELLO WORLD %d\n", i++);//7

	//반복문
	// for, while, do while

	//for(선언; 조건; 증감) {  }
	/*
	for (int i = 1; i <= 10; i++)
	{
		printf("Hello world %d\n", i);
	}
	*/

	//while(조건) {  }
	/*
	
	int i = 1;
	while (i <= 10)
	{
		printf("hello world %d\n", i++);
		//i++
	}
	*/

	//do {  } while (조건);
	/*
	int i = 1;
	do {
		printf("hello world %d\n", i);
		i++;
	} while (i <= 10);
	*/

	// 2중 반복문
	/*
	for (int i = 1; i <= 3; i++)
	{
		printf("첫 번째 반복문 : %d\n", i);

		for (int j = 1; j <= 5; j++)
		{
			printf("	두 번째 반복문 : %d\n", j);
		}
	}

	*/

	//구구단
	/*

	for (int i = 2; i <= 9; i++)
	{
		printf("%d단 계산\n",i);
		for (int j = 1; j <= 9; j++)
		{
			printf("  %d x %d = %d\n", i, j, i * j);
		}
	}

	*/

	//피라미드 쌓아라 별 연습
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

	//2중 반복문 거꾸로
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


//프로젝트
/*
int input;
printf("몇 층짜리 피라미드를 쌓겠습니까?");
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


//쌤 답
	int floor;
	printf("몇 층으로 쌓겠습니까?");
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