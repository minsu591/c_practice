//
//
//#include <stdio.h>
//int main_guessnumber(void)
//{
//	//숫자 맞히기 게임
//
//	//if else, break, continue, switch
//
//	/*
//	// if (조건) {   } else {   }
//	//버스를 탄다고 가정-> 학생 / 일반인으로 구분 (일반인 20세)
//	int age = 25;
//	if (age >= 20)
//		printf("일반인 입니다.");
//	else
//		printf("학생입니다.\n");
//	*/
//		
//	/*
//		//초등학생(8-13) / 중학생 (14-16) / 고등학생(17-19)으로 나눈다면?
//		//if, else if , else
//	int age = 19;
//	if (age >= 8 && age <= 13)
//	{
//		printf("초등학생입니다\n");
//	}
//	else if (age >= 14 && age <= 16)
//	{
//		printf("중학생입니다.\n");
//	}
//	else if (age >= 17 && age <= 19)
//	{
//		printf("고등학생입니다.\n");
//	}
//	else
//	{
//		printf("학생이 아닌가봐요\n");
//	}
//	*/
//	
//	//break, continue
//
//	/*
//	// 1번부터 30번까지 있는 반에서 1번부터 5번까지 조별 발표를 한다.
//	for (int i = 1; i <= 30; i++)
//	{
//		if (i >= 6)
//		{
//			printf("나머지 학생은 집에 가세요.");
//			break; //조건을 충족하면 for문을 탈출하는
//
//		}
//		printf("%d번 학생은 조별 발표 준비를 하세요.\n", i);
//	}
//	*/
//
//	//1번부터 30번까지 있는 반에서 7번학생은 오늘 아프다.
//	//7번 학생을 제외하고 6번부터 10번까지 조별 발표를 하세요.
//
//	/*
//	for (int i = 1; i <= 30; i++)
//	{
//		if (i >= 6 && i<= 10)
//		{
//			if (i == 7)
//			{
//				printf("%d번 학생은 결석입니다.\n", i);
//				//continue; //break는 for문을 탈출한다면 continue는 다음 문장을 실행하지 않고 반복으로 넘어가는
//			}
//			printf("%d번 학생은 조별 발표 준비를 하세요\n", i);
//			
//		}
//	
//	}
//	*/
//
//	/*
//	// &&, 두 조건을 둘 다 충족해야함 || 두 조건 중 둘 중에 하나만 충족하면 됨
//	int a = 10;
//	int b = 10;
//	int c = 12;
//	int d = 13;
//	if (a == b || c == d)
//	{
//		printf("a와 b, 혹은 c와 d의 값이 같습니다.\n");
//	}
//	else
//	{
//		printf("값이 서로 다르네요\n");
//	}
//	*/
//
//	return 0;
//}



//랜덤 처음 시작할 때
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	/*
	//srand(time(NULL)); //난수 초기화
	//int num = rand() % 3 + 1; //뽑고 싶은 숫자의 범위 설정, 시작하는 수가 0이기 때문에 3 입력시 0 ~ 2
	printf("난수 초기화 이전..\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", rand() % 10);
	}
	//난수 초기화를 하지 않았기 때문에 실행시킬 때마다 같은 숫자가 계속 반복해서 나옴

	srand(time(NULL)); //난수 초기화
	printf("\n\n난수 초기화 이후..\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", rand() % 10);
	}
	*/

	//가위 0 바위 1 보 2
	/*
	srand(time(NULL));
	int i = rand() % 3;
	if (i == 0)
	{
		printf("가위\n");
	}
	else if (i == 1)
	{
		printf("바위\n");
	}
	else if (i == 2)
	{
		printf("보\n");
	}
	*/

	/*
	//switch
	srand(time(NULL));
	int i = rand() % 3;
	switch (i)
	{
	case 0:printf("가위\n"); break; //각 부분마다 break부분을 넣지 않으면 2가 나왔을 때 2 이후의 모든 케이스를 출력함
	case 1:printf("바위\n"); break;
	case 2:printf("보\n"); break;
	default:printf("몰라요\n"); break;
	}
	*/

	/*
	//case문은 조건이 하나 밖에 안되기 때문에 예를 들어 1~5하고 싶으면 케이스마다 1 2 3 4 5를 작성해야함
	//교통카드 예제 switch 구문으로 바꿔보기
	//아래와 같이 printf를 다 작성하는게 아니고 마지막 부분으로 전환되는 부분에만 넣어주고 break 넣으면됨

	int age = 15;
	switch (age)
	{
	case 8:
	case 9:printf("A"); break;
	case 10:
	case 11:printf("B"); break;
	case 12:
	case 13:printf("C"); break;
	}
	*/


	return 0;
}

