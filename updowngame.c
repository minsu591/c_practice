#include <time.h>
#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	//up & down project 숫자를 랜덤으로 정해서 숫자를 입력하면 up & down으로 힌트를 주고 숫자 알려맞추는 게임
	srand(time(NULL));
	int num = rand() % 99 + 1; //1~100까지의 숫자
	printf("랜덤 숫자는 %d입니다.\n", num);
	int call;
	int chance = 5;

	for (int chance = 0; chance < 5; chance++)
	{
		printf("숫자를 말하십시오.\n");
		scanf_s("%d", &call);
		if (call < num)
		{
			printf("UP\n");
		}
		else if (call > num)
		{
			printf("DOWN\n");
		}
		else if (call == num)
		{
			printf("정답입니다.\n");
			break;
		}
		else
		{
			printf("알 수 없는 오류가 발생했습니다.");
		}
		printf("기회가 %d번 남았습니다.\n", 5-chance);
		
	}
	

	return 0;
}

/*



	int number;
	printf("숫자를 입력하십시오");
	scanf_s("%d", &number);
	srand(time(NULL));
	int i = rand() % 99 +1;
	
	for (int j = 0; j < 5; j++);
	{
		if (number > i)
		{
			printf("DOWN");
		}
		else if (number < i)
		{
			printf("UP");
		}
		else if (number == i)
		{
			printf("CORRECT");
		}

		printf("%d의 기회가 남았습니다.\n", 5-j);

	}


	//쌤 풀이
	srand(time(NULL));
	int num = rand() % 100 + 1; // 1~ 100 사이의 숫자
	printf("숫자 : %d\n", num);
	int answer = 0;
	int chance = 5;
	while (chance > 0) // while(1) -> 참, 0이면 거짓, 1이라고 정의하면 while 안의 모든 문장을 실행함.
	{
		printf("남은 기회 %d 번\n", chance - 1);
		printf("숫자를 맞춰보세요. (1~100사이)\n");
		scanf_s("%d", &answer);

		if (answer > num)
		{
			printf("DOWN \n\n");
		}
		else if (answer < num)
		{
			printf("UP \n\n");
		}
		else if (answer == num)
		{
			printf("정답입니다. \n\n");
			break; //break 넣어서 남은 chance의 수와 관계없이 탈출
		}
		else
		{
			printf("알 수 없는 오류가 발생했습니다.");
		}
	}
*/