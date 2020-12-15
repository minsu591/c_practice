//프로젝트 5 - 배열
// 아빠는 대머리

#include <stdio.h>
int main_array(void)
{
	//배열
	/*
	int subway_1 = 30; // 지하철 1호차에는 30명 타고 있음
	int subway_2 = 40;
	int subway_3 = 50;

	printf("지하철 1호차에 %d 명이 타고 있습니다\n",subway_1);
	printf("지하철 2호차에 %d 명이 타고 있습니다\n",subway_2);
	printf("지하철 3호차에 %d 명이 타고 있습니다\n",subway_3);
	*/

	//정수형 변수를 연속해서 만들 수 있는 자료형 - 배열

	/*
	//여러 개의 변수를 함께 동시에 생성
	int subway_array[3]; //몇 개의 int형 연속 변수를 만들 것이냐를 대괄호 안에 넣기
	subway_array[0] = 30; //배열은 index값이 0부터 시작하므로
	subway_array[1] = 40;
	subway_array[2] = 50;

	for (int i = 0; i < 3; i++)
	{
		printf("지하철 %d호차에 %d명이 타고 있습니다\n", i + 1, subway_array[i]);
	}
	*/

	/*
	//배열 선정에 값 설정
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	*/

	/*
	//선언만 하고 값 초기화를 하지 않으면 알 수 없는 값이 나옴
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	*/

	//배열 크기는 항상 상수로 선언
	/*
	int size = 10;
	int arr[size]; //식에 상수값이 들어가야 됨, 직접 숫자값을 집어넣어야 사용가능
	*/

	/*
	int arr[10] = { 1, 2}; //선언하지 않은 3번째 값부터는 자동으로 0으로 초기화됨
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	*/

	//int arr[] = { 1, 2 }; //arr[2]와 같음


	//float문일 때
	/*
	float arr_f[5] = { 1.0f, 2.0f, 3.0f };
	for (int i = 0; i < 5; i++)
	{
		printf("%.2f\n", arr_f[i]);
	}
	*/

	/*
	//문자(한 글자인 글자) vs 문자열(한 글자 이상의 문자 모음)
	char c = 'A';
	printf("%c\n", c);

	//문자열 끝에는 '끝'을 의미하는 NULL문자('\0')가 항상 포함되어야함
	//char str[6] = "coding"; // [c] [o] [d] [i] [n] [g]
	char str[7] = "coding"; //coding이라는 글자를 나타내고 자동으로 \0이 들어감
	printf("%s\n", str);
	*/

	
	/*
	char str[] = "coding"; //알아서 \0을 채운다
	printf("%s\n", str);
	printf("%d\n", sizeof(str)); //sizeof 배열형 변수가 가지는 크기를 알려주는

	
	//한 칸씩 띄워서 표시해보면 마지막에 비어있는 값이 나옴 -> NULL문자
	for (int i = 0; i < sizeof(str); i++)
	{
		printf("%c\n", str[i]);
	}
	*/

	/*
	char kor[] = "나도코딩";
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor));
	//영어는 1글자가 1 byte
	//한글은 1글자가 2 byte
	//한 글
	//En gl ish -> 이렇게 이해하기
	//char 크기 1 byte (문자의 끝을 나타내는)

	*/

	//char c_array[7] = { 'c', 'o', 'd','i','n','g','\0' };
	//printf("%s\n", c_array);

/*
	char c_array[10] = { 'c', 'o', 'd','i','n','g'}; //남는 공간이 있기만 하면 자동으로 그 문자 끝 값이 들어감
	printf("%s\n", c_array);
	for (int i = 0; i < 10; i++)
	{
		printf("%c\n", c_array[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", c_array[i]);
	}
	//%d로 출력하면 숫자가 나옴
	//ASCII 코드 값 출력 (null 문자는 0으로 입력됨)
	*/

/*
	//문자열 입력받기 : 경찰서 조서 쓰기 예제
	char name[256];
	printf("이름을 입력하세요 : ");
	scanf_s("%s", name, sizeof(name));
	printf("%s\n", name);
	*/

	//참고 : ASCII 코드 : ANSI (미국표준협회) 에서 제시한 표준 코드 체계
	//7bit : 총 128개 코드 (0-127)
	// a : 97 (문자 a의 아스키코드는 정수 97)
	// A : 65
	// 0 : 48
	//전국 호환 문제에 의해 위와 같이 통일함

/*
	printf("%c\n", 'a');
	printf("%d\n", 'a');
	
	printf("%d\n", '\0');
*/	

/*
//참고2 : 0-127 사이의 아스키코드 정수값에 해당하는 문자 확인
	for (int i = 0; i < 128; i++)
	{
	printf("%c의 아스키코드 값은 %d이다.\n", i, i);
	}
*/
	
	return 0;
	
}