//project 4, 함수
#include <stdio.h>

//선언
void p(int num);
void function_without_return(); //선언만 하는거라 세미콜론으로 문장 마무리
int function_with_return();
void function_without_parameters();
void function_with_parameters(int num1, int num2, int num3);

int apple(int total, int ate); //전체 total개에서 ate개를 먹고 남은 수를 반환

int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);

int main_passwordmasterpractice(void)
{

	/*
	//function
	//계산기

	int num = 2;
	//printf("num은 %d 입니다\n", num);
	p(num);

	// 2 + 3은?
	num = num + 3; // num += 3
	//printf("num은 %d 입니다\n", num);
	p(num);

	// 5 -1 은?
	num -= 1; // num = num -1
	//printf("num 은 %d 입니다\n", num);
	p(num);

	// 4 * 3 =?
	num *= 3;
	//printf("num 은 %d 입니다\n", num);
	p(num);

	// 12/ 6은?
	num /= 6;
	//printf("num은 %d 입니다 \n", num);
	p(num);

	----(1)
	*/ 

	//반환 값이 없는 함수
	//function_without_return(); ----(2)

	//반환 값이 있는 함수
	/*int ret = function_with_return();
	p(ret); -------(3)
	*/

	//파라미터(전달값)이 없는 함수
	//function_without_parameters();

	//파라미터(전달값)이 있는 함수
	//function_with_parameters(35, 24, 32);

	//파라미터(전달값)과 반환값이 있는 함수
	//int ret = apple(5, 2); //5개의 사과 중에서 2개를 먹었어요
	//printf("남은 사과는 %d개 입니다.\n", ret);
	//printf("사과 %d 중에 %d개를 먹으면 %d개가 남아요\n", 10, 4, apple(10,4)); //printf내에서 함수 활용


	//계산기 함수 (project)
	int num = 2;
	num = add(num, 3);
	p(num);

	num = sub(num, 1);
	p(num);

	num = mul(num, 3);
	p(num);

	num = div(num, 6);
	p(num);



	return 0;
}




//정의 
//(main 함수 위에서 void p(int num);으로 선언을 하고 main함수 아래에서 같은 문장으로 대괄호 열어서 함수 생성

void p(int num)  // void 함수이름(전달값)
{
	printf("num은 %d입니다\n", num);

}


//반환형 함수이름(전달값) //함수에서 
// 전달값 36
// 함수 ㅁ + 4
// 반환형 ?
//문자 - char, 정수 int, 실수 double, float, 반환하지 않겠다 void
//전달값 전달값이 (int num1, int num2, char c, float f)등으로 선언 가능 위에서 선언한거랑 똑같이 해야함.----(1)




//함수 종류

//반환값이 없는 함수 (반환값이 없어서 아무 것도 할 필요 없음)
void function_without_return()
{
	printf("반환값이 없는 함수입니다.\n");
}
//------(2)

//반환값이 있는 함수
int function_with_return() //이 함수를 호출하면 함수 내의 어떤 문장을 수행하고 10이라는 숫자를 반환해줌
{
	printf("반환값이 있는 함수입니다\n");
	return 10;
}
//---------(3)

//파라미터(전달값)이 없는 함수
void function_without_parameters()
{
	printf("전달값이 없는 함수입니다.\n");
}

//파라미터(전달값)이 있는 함수
void function_with_parameters(int num1,int num2,int num3)
{
	printf("전달값이 있는 함수이며, 전달받은 값은 %d, %d, %d 입니다.\n", num1, num2, num3);

}

int apple(int total, int ate)
{
	printf("전달값과 반환값이 있는 함수입니다.\n");
	return total - ate;
}

int add(int num1, int num2)
{
	return num1 + num2;
}

int sub(int num1, int num2)
{
	return num1 - num2;
}
int mul(int num1, int num2)
{
	return num1 * num2;
}
int div(int num1, int num2)
{
	return num1 / num2;
}

//main 함수 위에서 함수를 선언할 것.