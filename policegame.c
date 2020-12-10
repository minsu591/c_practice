#include <stdio.h>
int main(void)
{
	//정수형 변수에 대한 예제
	/*int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);*/

	//printf("1\n");
	//printf("2\n"); //2는 범위에서 벗어나므로 주석 처리
	//printf("3\n");

	// 실수형 변수에 대한 예제
	/*
	float f = 46.5f; // 숫자 뒤에는 f 붙이기
	printf("%.2f\n", f);
	double d = 4.428;
	printf("%.2lf\n", d);
	*/

	/*
	//상수 만드는 방법 const 추가
	const int YEAR = 2000; // 상수의 개념, 아래쪽에서 YEAR의 값을 바꿀 수 없음
	printf("태어난 년도 : %d\n", YEAR);
	*/

	// printf
	// 연산
	
	/*
	int add = 3 + 7; //10
	printf("3 + 7 = %d\n", add);
	printf("%d x %d = %d\n", 30, 70, 30 * 70);
	*/

	//scanf
	//키보드 입력을 받아서 저장
	/*
	int input;
	printf("값을 입력하세요 : ");
	scanf_s("%d", &input); //scanf뒤에 _s는 정수 받는 걸 뜻함, input 앞에 &는  input이라는 변수가 정의된 곳에 값을 입력받겠다
	printf("입력값 : %d\n", input);
	*/

	/*
	int one, two, three;
	printf("3개의 정수를 입력하세요 : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("첫번째 값 : %d\n", one);
	printf("두번째 값 : %d\n", two);
	printf("세번째 값 : %d\n", three);
	*/


	//문자(한 글자), 문자열(한 글자 이상의 여러 글자)
	/*char c = 'A';
	printf("%c\n", c);*/

	
	/*char str[256]; //256개의 문자만 허용
	scanf_s("%s", str, sizeof(str)); //문자열 입력에는 &없어도 ㄱㅊ, sizeof라는걸 이용해 256개의 문자 이상은 받지 않음
	printf("%s\n", str);
	*/

	

	// 프로젝트
	// 경찰관이 범죄자의 정보를 입수 (조서 작성)
	// 이름? 나이? 몸무게? 키? 범죄명?
	char name[256];
	printf("이름이 뭐예요? ");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("몇 살이에요?");
	scanf_s("%d", &age);

	float weight;
	printf("몸무게는 몇 kg 이에요? ");
	scanf_s("%f", &weight);

	double height;
	printf("키는 몇 cm 이에요? ");
	scanf_s("%lf", &height);

	char what[256];
	printf("무슨 범죄를 저질렀어요? ");
	scanf_s("%s", what, sizeof(what));

	//조서 내용 출력
	printf("\n\n---범죄자 정보 ---\n\n");
	printf(" 이름       :%s\n", name);
	printf(" 나이       :%d\n", age);
	printf(" 몸무게     :%.2f\n", weight);
	printf(" 키         :%.2lf\n", height);
	printf(" 범죄명     :%s\n", what);

	return 0;
}